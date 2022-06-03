#include<iostream>
using namespace std;
struct Point{
    double x,y;
};
struct Circle{
    Point center;
    double r;
};
int main(){
    Circle c1{{0.6,0.8},5.0}; Circle c2;
    c2=c1;
    // Circle c1;
    // c1.center.x=0.6;
    // c1.center.y=0.8;
    // c1.r=5.0;
    return 0;
}