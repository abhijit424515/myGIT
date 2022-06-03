#include<iostream>
#include<cmath>
using namespace std;
struct V3{
    double x,y,z;
    double length(){
        return sqrt(x*x+y*y+z*z);
    }
    V3 scale(double t){                     // using functions declared inside structs
        V3 v;
        v.x=x*t; v.y=y*t; v.z=z*t; 
        return v;
    }
    V3 sum(V3 b){                           // using functions declared inside structs
        V3 v;
        v.x=x+b.x; v.y=y+b.y; v.z=z+b.z;
        return v;
    }
};
int main(){
    V3 u,a,s;
    cin>>u.x>>u.y>>u.z>>a.x>>a.y>>a.z;
    for(int t=0; t<10; t++){
        s=(u.scale(t)).sum(a.scale(t*t/2.0));
        cout<<t<<": "<<s.length()<<endl;
    }
    return 0;
}