#include<iostream>
using namespace std;
struct Point{
    double x,y;
};
struct Circle1{
    Point center;
    double r;
};
struct Circle2{
    Point *centerptr;
    double r;
};
int main(){
    Circle1 c[4]={{{0.6,0.8},5.0},{{1.2,1.6},10.0},{{1.8,2.4},15.0},{{2.4,3.2},20.0}};
    //OR    c[0].center.x=0.6; c[0].center.y=0.8; c[0].r=5.0;

    Circle2 d[4];
    d[0].centerptr->x=0.6; d[0].centerptr->y=0.8; d[0].r=5.0;
    // OR   *(d[0].centerptr).x=0.6; *(d[0].centerptr).y=0.8; d[0].r=5.0;

    for(int i=0; i<4; i++)
        cout<<c[i].center.x<<" "<<c[i].center.y<<" "<<c[i].r<<endl;
    return 0;
}