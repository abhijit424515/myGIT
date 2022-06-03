#include<iostream>
using namespace std;
int main(){
    int T,X,Y; cin>>T; bool array[T]; 
    for(int i=0; i<T; i++){
        cin>>X>>Y;
        if(X==Y && X>0) array[i]=1;
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