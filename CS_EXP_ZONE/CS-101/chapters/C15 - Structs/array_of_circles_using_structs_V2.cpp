#include<iostream>
using namespace std;
struct Point{
    double x,y;
};
struct Circle{
    Point *centerptr;
    double r;
};
int main(){
    Circle c[4];
    c[0].centerptr->x=0.6; c[0].centerptr->y=0.8; c[0].r=5.0;
    return 0;
}