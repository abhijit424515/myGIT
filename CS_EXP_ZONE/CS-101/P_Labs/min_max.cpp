#include<iostream>
#include<cmath>
using namespace std;
int minimum(int a, int b){
    if(a>=b){return b;}
    if(a<b){return a;}
    return 0;
}
int maximum(int a, int b){
    if(a<=b){return b;}
    if(a>b){return a;}
    return 0;
}
int part_ridge(int x1,int x2,int x3,int x4,int x5){
    int count=0;
    if((x2<x1 && x2<x3) || (x2>x1 && x2>x3)){
        count++;
    }
    if((x3<x2 && x3<x4) || (x3>x2 && x3>x4)){
        count++;
    }
    if((x4<x3 && x4<x5) || (x4>x3 && x4>x5)){
        count++;
    }
    return count;
}
int main(){
    int n; cin>>n; int arr1[n]; int index; int side; int ridge=0;
    int min_ridge=1000000;
    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }
    if(n<5){
        cout<<0; return 0;
    }
    for(int i=2; i<n-2; i++){
        int n1=part_ridge(arr1[i-2],arr1[i-1],arr1[i-1],arr1[i+1],arr1[i+2]);
        int n2=part_ridge(arr1[i-2],arr1[i-1],arr1[i+1],arr1[i+1],arr1[i+2]);

        if(n1<=minimum(min_ridge,n2)){
            index=i; side=-1;
        }
        else if(n2<=minimum(min_ridge,n1)){
            index=i; side=1;
        }
    }
    arr1[index]=arr1[index+side];
    for(int i=1; i<n-1; i++){
        if(arr1[i]<minimum(arr1[i-1],arr1[i+1]) || arr1[i]>maximum(arr1[i-1],arr1[i+1])){
            ridge++;
        }
    }
    cout<<ridge;
}
