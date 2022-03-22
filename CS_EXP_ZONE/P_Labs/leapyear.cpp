#include<simplecpp>
main_program {
    int y; cin>>y;
    if((y%400==0) || ((y%4==0) && (y%100!=0))) {
        cout<<"Yes";
    }
    else {
        cout<<"No";
    }
}