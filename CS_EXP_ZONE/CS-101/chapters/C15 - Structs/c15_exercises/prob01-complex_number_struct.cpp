#include<simplecpp>
using namespace std;
struct complex {
    double x,y,r,t; 
    complex(bool radial,double a=0, double b=0) {
        if(radial){
            r=a; t=b;
            x=r*cos(t*PI/180); y=r*sin(t*PI/180);
        }
        else{
            x=a; y=b;
        }
    }
    void print() {
        if(y!=0){
            cout<<x<<" "<<y<<"i"<<endl;
        }
        else{
            cout<<x<<endl;
        }
    }
    complex sum(complex c2){
        complex c(0);
        c.x = x+c2.x;
        c.y = y+c2.y;
        return c;
    }
    complex multiply(complex c2){
        complex c(0);
        c.x = x*c2.x - y*c2.y;
        c.y = x*c2.y + y*c2.x;
        return c;
    }
};
