#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/fl_draw.H>
#include <cstdlib>
#include <cmath>


class Rangoli : public Fl_Widget {
    int w, h, l, D;
    void next(double &x, double &y, int n){
        double temp_x = x;
        x = x*cos(M_PI * 2.0 / n)-y*sin(M_PI * 2.0 / n);
        y = temp_x*sin(M_PI * 2.0 / n) + y*cos(M_PI * 2.0 / n); 
        return ;
    }
public:
    Rangoli (int originX, int originY, int width, int height, int len, int N, char *label=0) : Fl_Widget (originX,originY,width,height,label){ w = width; h=height; l=len; D=N;}
    void draw(){ 
        double x0,y0,x1,y1,x2,y2,x3,y3,x4,y4;
        x0=w/2;   y0=h/2;
        x1=0;     y1=0; 
        x2=l;     y2=0;
        x3=l;     y3=l; 
        x4=0;     y4=l; 

        for(int i=0; i<D+1; i++){
            drawShape (x0+x1,y0+y1,x0+x2,y0+y2,x0+x3,y0+y3,x0+x4,y0+y4,i); 
            next(x2,y2,D); next(x3,y3,D); next(x4,y4,D);
        }
    }
    void drawShape (double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4, double i) {
        fl_color ((int) random()%256);
        fl_polygon(x1,y1,x2,y2,x3,y3,x4,y4);
        fl_color (0);
        for(double a=0.1; a<1.0; a+=0.1){
            fl_line (a*x1+(1-a)*x3,a*y1+(1-a)*y3,a*x2+(1-a)*x4,a*y2+(1-a)*y4);
            fl_line (a*x2+(1-a)*x4,a*y2+(1-a)*y4,a*x3+(1-a)*x1,a*y3+(1-a)*y1);
            fl_line (a*x3+(1-a)*x1,a*y3+(1-a)*y1,a*x4+(1-a)*x2,a*y4+(1-a)*y2);
            fl_line (a*x4+(1-a)*x2,a*y4+(1-a)*y2,a*x1+(1-a)*x3,a*y1+(1-a)*y3); 
        }
    }
};

int main(int argc, char *argv[]) {
    int n; if (argc!=2) n = 20; else n=atoi(argv[1]);                          // using a default value of n in-case it was not passed as an argument while running the file
    
    Fl_Window w(600,600,"Rangoli Design by Abhijit"); w.color(95);             // initializing the FLTK window with title and it's dimensions
    Rangoli p2(300,300,600,600,200,n); Rangoli p1(300,300,600,600,100,n);
    w.show();
    return(Fl::run());
}