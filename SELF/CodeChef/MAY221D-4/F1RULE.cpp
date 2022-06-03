#include<iostream>
using namespace std;
int main(){
    int T,X,Y; cin>>T; bool array[T]; 
    for(int i=0; i<T; i++){
        cin>>X>>Y;
        if(abs((Y*1.00)-(X*1.07))<=1e-9 || ((X*1.07)-(Y*1.00)>0)) array[i]=1;
        else array[i]=0;
    }
    for(int i=0; i<T; i++){
        if(array[i]){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}