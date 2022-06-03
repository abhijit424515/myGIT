// Code developed by Abhijit Amrendra Kumar

#include <FL/Fl.H> // needed in every fltk program
#include <FL/Fl_Window.H> // needed to use the Fl_Window class
#include <FL/Fl_Box.H>
#include <FL/fl_draw.H>
#include <iostream>
#include <cmath>
#include <time.h>
using namespace std;

static long start = time(NULL);

const int BGColor=FL_RED;
const int ThrowballColor=FL_BLUE;
const int DodgeballColor=FL_GREEN;

int winWidth=600;
int winHeight=600;
int i;
const int rD=50, rB=10;
int l=200; int dl=10; int acc=5;
int X1 = winWidth/2+l, X2 = winWidth/2, X3 = winWidth/2-l, X4 = winWidth/2; 
int Y1 = winHeight/2, Y2 = winHeight/2-l, Y3 = winHeight/2, Y4 = winHeight/2+l; 
int pX[] = {X1,X2,X3,X4};
int pY[] = {Y1,Y2,Y3,Y4};

class Shape : public Fl_Widget  {
 protected:
	int x, y, w, h;
 public:
	Shape (int x, int y, int w, int h) : Fl_Widget (x,y,w,h){
		this->x=x; this->y=y; this->w=w; this->h=h;
	}
	virtual void wipe()=0;
	virtual void refresh(int dx, int dy)=0;
	virtual int handle(int e)=0;    
};

class BGRect : public Shape {
 private:
 public:
    BGRect (int x,int y,int w, int h) : Shape (x,y,w,h) {
		this->x=x; this->y=y; this->w=w; this->h=h;
    }
    virtual void draw() {
        fl_draw_box (FL_FLAT_BOX,x,y,w,h,BGColor);
    }
    virtual void wipe() { }
    virtual void refresh(int dx, int dy) { }
    virtual int handle(int e) { return 1; }
    string operator+(int x) {
        
    }
};

class Throwball : public Shape {
 private:
    int vx,vy; int r; float theta;
 public:
    int x,y;
    Throwball (int x,int y,int r) : Shape (0,0,winWidth,winHeight) {
        this->x=x; this->y=y; this->r=r; theta = 30.0; vx = dl*cos(M_PI*theta/180); vy = dl*sin(M_PI*theta/180); 
    }
    virtual void draw() {
        if(x<r){ x = r; theta = rand()%180 - 90; dl = dl+acc; fl_color(BGColor); fl_rectf(x-r,y-r,2*r,2*r,BGColor);}
        else if(x>winWidth-r){ x = winWidth-r; theta = rand()%180+90; dl = dl+acc; fl_color(BGColor); fl_rectf(x-r,y-r,2*r,2*r,BGColor);}
        if(y<r){ y = r; theta = rand()%180; dl = dl+acc; fl_color(BGColor); fl_rectf(x-r,y-r,2*r,2*r,BGColor);}
        else if(y>winHeight-r){ y = winHeight-r; theta = rand()%180+180; dl = dl+acc; fl_color(BGColor); fl_rectf(x-r,y-r,2*r,2*r,BGColor);}
        vx = dl*cos(M_PI*theta/180); vy = dl*sin(M_PI*theta/180);
        if(dl==100)
            dl = dl-acc;
        wipe();
        x=x+vx;y=y+vy;
        fl_color(ThrowballColor);
        fl_pie (x-r,y-r,2*r,2*r,0,360);
    }
    virtual void wipe() {
	    fl_color(BGColor);
	    fl_pie (x-r,y-r,2*r,2*r,0,360);
    }
    virtual void refresh(int dx, int dy) {  }
    virtual int handle(int e){ return 1; }
};

void MyTimer(void *userdata){
    Throwball *o = (Throwball*)userdata;
    // o->refresh(0,0);
    o->redraw();
    o->redraw();
    Fl::repeat_timeout(0.04, MyTimer,userdata);
    double D = sqrt((pX[i]-o->x)*(pX[i]-o->x)+(pY[i]-o->y)*(pY[i]-o->y));
    if(D<=rD+rB){
        long tick = time(NULL) - start;
        cout<<"\nYour score is "<<tick<<" seconds\n\n";
        exit(0);
    }
}

class Dodgeball : public Shape {
 private:
    int r; 
 public:
    Dodgeball (int x,int y,int r) : Shape (0,0,winWidth,winHeight) {
        this->x=x; this->y=y; this->r=r; i=0;
    }
    virtual void draw() {
        fl_color(DodgeballColor); 
        fl_pie (x-r,y-r,2*r,2*r,0,360);
    }
    virtual void wipe() {
	    fl_color(BGColor); // change pen color
	    fl_pie (x-r,y-r,2*r,2*r,0,360);
    }
    virtual void refresh(int dx, int dy) {
        x=x+dx;y=y+dy;
        resize(x-r,y-r,2*r,2*r);
	    fl_color(DodgeballColor); 
        fl_pie (x-r,y-r,2*r,2*r,0,360);
    }
    virtual int handle(int e){   
        if(e==FL_PUSH){
            hide();
            // cout<<"wiped"<<endl;
            i=(i+1)%4; x = pX[i]; y = pY[i]; 
            resize(x-r,y-r,2*r,2*r); 
            show();
        }
        return 1;
    }
};

class GAME {
 private:
    Fl_Window *window; BGRect *bgrect; Throwball *ball; Dodgeball *dodge;
 public:
    GAME() {
        window = new Fl_Window (winWidth,winHeight,"GAME"); // outer window
        bgrect = new BGRect(0,0,winWidth,winHeight);
        ball = new Throwball(100,100,rB);
        dodge = new Dodgeball(500,300,rD);
        window->color(FL_WHITE);
	    window->show();
        Fl::add_timeout(0.5, MyTimer,(void*)ball);
	}
    ~GAME() {
        delete ball;
    }
};

int main() {
    srand(time(0));
    GAME game;
    return(Fl::run());
}
