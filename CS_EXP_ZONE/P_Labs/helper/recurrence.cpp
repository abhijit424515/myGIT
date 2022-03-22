#include<iostream>
int W(int n){
    int x,xm=1,xmm=1,xmmm=1;

    for(int i=3; i<=n; i++){
        x=xm+xmm+xmmm;
        xmmm=xmm;
        xmm=xm;
        xm=x;
    } 
    return x;
}