#include <FL/Fl.H> // header files
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <iostream>
#include <string>
#include <fstream>
#include <math.h>
#include <cstdlib>
#include <ctime>
#include<FL/Fl_Int_Input.H>
using namespace std;

Fl_Window *window; Fl_Int_Input *p;
int m;
Fl_Window *window1; Fl_Int_Input *inp; Fl_Box *b1; 

class Atoms {
 public:
    Atoms() {
        window1 = new Fl_Window(500,500);
        inp = new Fl_Int_Input(0,0,500,100,"Enter atomic number here");
        inp->when(FL_WHEN_ENTER_KEY);
        inp->callback(display_e_config);
        window1->end();
        window1->show();
        Fl::run();
    }
    static void make_fl_box(double x, double y, int t, int s) {
        b1 = new Fl_Box (x,y,t,t,"");
        b1->box(FL_UP_BOX);
        b1->box(FL_FLAT_BOX); //creates electron in the previous(penultimate) shell
        b1->color(s);
    }
    static void display_e_config (Fl_Widget*w) {
        window = new Fl_Window (1000,700);
        p=(Fl_Int_Input*)w;
        srand(time(NULL));
        window->color((random()%4)+212); // set its color
        const char *o=p->value(); m=atoi(o);          //m now has the value entered in the textbox
        drawing();   
    }

    static void drawing() {
        int n,y=20; float x=-4,adj_angle,t;

        for(int n=1;n<=m;n++) {
            if(n==1) adj_angle=7;
            else if(n==3) adj_angle=(2*M_PI)/(float)2;
            else if(n==11) adj_angle=(2*M_PI)/(float)8; 
            else if(n==19) adj_angle=(2*M_PI)/(float)8;
            else if(n==37) adj_angle=(2*M_PI)/(float)18;
            else if(n==55) adj_angle=(2*M_PI)/(float)18;
            else if(n==87) adj_angle=(2*M_PI)/(float)32;
            else continue;
            
            float t=adj_angle;          //adj_angle= angle between adjacent electrons in same shell

            while(adj_angle<=0.00001+2*M_PI) {
                for(int i=4;i>0;i-=0.05) {
                    for(x=-i;x<=i;x+=0.05) {
                        make_fl_box(350+y*cos(adj_angle)+x,350+y*sin(adj_angle)+sqrt(i*i-x*x),1,FL_BLACK);
                        make_fl_box(350+y*cos(adj_angle)+x,350+y*sin(adj_angle)-sqrt(i*i-x*x),1,FL_BLACK);
                    }
                }
                adj_angle+=t;
            }

            y+=20;
            for(x=-y;x<=y;x+=0.1) {
                //creates lower half of shell
                make_fl_box(350-y,350,2,FL_GREEN); make_fl_box(350+y,350,2,FL_GREEN);
                make_fl_box(350+x,350+sqrt(y*y-x*x),2,FL_GREEN); make_fl_box(350+x,350-sqrt(y*y-x*x),2,FL_GREEN);
            }
        }

        if(m>0) adj_angle=(2*M_PI)/(float)m;
        if(m>2) adj_angle=(2*M_PI)/(float)(m-2);
        if(m>10) adj_angle=(2*M_PI)/(float)(m-10);
        if(m>18) adj_angle=(2*M_PI)/(float)(m-18); // m-i= no of electrons in valence shell
        if(m>36) adj_angle=(2*M_PI)/(float)(m-36);
        if(m>54) adj_angle=(2*M_PI)/(float)(m-54);
        if(m>86) adj_angle=(2*M_PI)/(float)(m-86);
        t=adj_angle;

        while(adj_angle<=(2*M_PI+0.00001)) {
            for(int i=4;i>0;i-=0.05) {
                for(x=-i;x<=i;x+=0.05) {
                    // It fills electrons in valence shell
                    make_fl_box(350+y*cos(adj_angle)+x,350+y*sin(adj_angle)+sqrt(i*i-x*x),1,FL_BLACK);
                    make_fl_box(350+y*cos(adj_angle)+x,350+y*sin(adj_angle)-sqrt(i*i-x*x),1,FL_BLACK);
                }
            }
            adj_angle+=t;
        }

        for(y=5;y>0;y-=0.1) {
            for(x=-y;x<=y;x+=0.1) {
                // It creates nucleus of atom
                make_fl_box(350+x,350+sqrt(y*y-x*x),1,FL_RED);
                make_fl_box(350+x,350-sqrt(y*y-x*x),1,FL_RED);
            }
        }
        window->end();
        window->show();
    }
};

int main () {
    Atoms x;
} 
