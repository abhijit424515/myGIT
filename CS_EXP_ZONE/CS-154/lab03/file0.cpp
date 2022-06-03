#include<iostream>
using namespace std;

class super {
    protected:
        bool f1=0, f2=0, f3=0;
    public:
        super(){
            f1=1;
        }
        bool feature1(){
            return f1;
        }
        bool feature2(){
            return f2;
        }
        bool feature3(){
            return f3;
        }
};

class prodC: public super {
    public:
        
};

class prodB: public prodC {
    public:
        prodB(){
            f3=1;
        }
};

class prodA: public prodB {
    public:
        prodA(){
            f2=1;
        }
};

int main(){
    prodA a1; prodB b1; prodC c1;

    // the table
    cout<<"\n\t\tProduct-A\tProduct-B\tProduct-C";
    
    cout<<"\nfeature-1\t";
    if(a1.feature1()) cout<<"y\t\t";
    else cout<<"n\t\t";
    if(b1.feature1()) cout<<"y\t\t";
    else cout<<"n\t\t";
    if(c1.feature1()) cout<<"y\t\t";
    else cout<<"n\t\t";

    cout<<"\nfeature-2\t";
    if(a1.feature2()) cout<<"y\t\t";
    else cout<<"n\t\t";
    if(b1.feature2()) cout<<"y\t\t";
    else cout<<"n\t\t";
    if(c1.feature2()) cout<<"y\t\t";
    else cout<<"n\t\t";
    
    cout<<"\nfeature-3\t";
    if(a1.feature3()) cout<<"y\t\t";
    else cout<<"n\t\t";
    if(b1.feature3()) cout<<"y\t\t";
    else cout<<"n\t\t";
    if(c1.feature3()) cout<<"y\t\t";
    else cout<<"n\t\t";
    
    cout<<"\n\n";
}