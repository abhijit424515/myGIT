#include<iostream>
using namespace std;
struct Point{
    double x; double y;
};                                      // never forget this semicolon
Point MidP(const Point &a, const Point &b){           // use pass-by-reference for bigger structures      // first word in this denotes the return type
                                        //      if referencing, preferably use const data-types
                                        //      make sure that you use reference if need to modify the struct 
    Point mp;
    mp.x=(a.x+b.x)/2;
    mp.y=(a.y+b.y)/2;
    return mp; 
}

int main(){
    Point p={10,20},q={50,60};
    Point r=MidP(p,q);
    cout<<r.x<<endl;
    cout<<MidP(p,r).x<<endl;
    return 0;
}