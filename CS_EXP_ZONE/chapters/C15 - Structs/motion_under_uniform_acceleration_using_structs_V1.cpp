#include<iostream>
#include<cmath>
using namespace std;
struct V3{
    double x,y,z;
    double length(){
        return sqrt(x*x+y*y+z*z);
    }
};
V3 sum(const V3 &a, const V3 &b){                             // using external functions here
    V3 added;
    added.x=a.x+b.x;
    added.y=a.y+b.y;
    added.z=a.z+b.z;
    return added;
}
V3 scale(const V3 &a, const double &t){                       // using external functions here
    V3 scaled;
    scaled.x=a.x*t;
    scaled.y=a.y*t;
    scaled.z=a.z*t;
    return scaled;
}
int main(){
    V3 u,a,s;
    cin>>u.x>>u.y>>u.z>>a.x>>a.y>>a.z;
    for(int t=0; t<10; t++){
        s=sum(scale(u,t),scale(a,t*t/2.0));
        cout<<t<<": "<<s.length()<<endl;
    }
    return 0;
}
/*
In line 28, scale(u,t) returns a V3 struct, why is actually a value/set_of_values, not a variable.
Compiler generated temporary structures (aka scale(u,t) in line 28), which are considered to be constants. 
Hence, if we use const _& in lines 10 and 17, the compiler agrees to just use reference for the temporary V3 structures (which are constants in the eyes of the compiler).

As to why we did it, large structs will take time to be copied in the program, so this method improves efficiency of the program.
*/