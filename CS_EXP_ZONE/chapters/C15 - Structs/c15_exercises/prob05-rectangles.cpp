#include<iostream>
using namespace std;
struct Point{
    double x,y;
    Point(double x=0, double y=0) {
        this->x=x; this->y=y;
    }
};
struct rect{
    Point rp1, rp2;
    rect(const Point &p1, const Point &p2){
        rp1=p1; rp2=p2;
    }
};

bool inside(const rect &R, const Point &p) {
    if((R.rp1.x-p.x)*(R.rp2.x-p.x)<0 && (R.rp1.y-p.y)*(R.rp2.y-p.y)<0){
        return true;
    }
}

void incre(rect &R, double dx, double dy){
    R.rp1.x+=dx; R.rp1.y+=dy; 
    R.rp2.x+=dx; R.rp2.y+=dy; 
}