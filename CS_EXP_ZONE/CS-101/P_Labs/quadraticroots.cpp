#include<simplecpp>
main_program {
    int a,b,c,D; cin>>a>>b>>c;
    D = b*b - 4*a*c;
    if(D>0) {
        cout<<"real and distinct";
    }
    else if(D==0) {
        cout<<"real and same";
    }
    else if(D<0) {
        cout<<"complex";
    }
}