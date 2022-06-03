#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/fl_draw.H>
#include <cstdlib>
class Square : public Fl_Widget {
int side, color, x, y; //angle is in degree to which the square is tilted to positive x axis
public : 
    Square(int cenx,int ceny,int sqside,int xcolor) : Fl_Widget (x,y,2*side,2*side) {
        x = cenx;
        y = ceny;
        side = sqside;
        color = xcolor;
    }    
    void draw() {
        fl_color(color); 
        fl_rectf(x, y, side, side);
    }   
};

/*class Diamond : public Fl_Widget {
int height, color, x, y; //angle is in degree to which the square is tilted to positive x axis
public : 
    Diamond(int cenx,int ceny,int length,int xcolor) : Fl_Widget (x,y,length,length) {
        x = cenx;
        y = ceny;
        height = length/2;   //height from centre will be half the length of diamond also the error of 0.5 which may come in integer division is totally tolerable
        color = xcolor;
    }    
    void draw() {
        fl_color(color);   //parallel squares will have identical colours
        fl_polygon( x, (y-height), (x+height), y, x, y+height, x-height, y); //a square with required centre and side length
    
    }
};*/

int main(int argc, char *argv[]) {
    Fl_Window w(400,400,"Rangoli Design");
    w.color(0);
    Square s1(80,40,200,62); //s2(80,160,100,169) , s3(80,160,150,183);
    
    w.resizable(s1);

    w.show();

    return (Fl::run());
}