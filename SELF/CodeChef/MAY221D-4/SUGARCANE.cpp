#include<iostream>
using namespace std;
int main(){
    int T,X; cin>>T; int array[T]; 
    for(int i=0; i<T; i++){
        cin>>X; array[i]=15*X;
    }
    for(int i=0; i<T; i++){
        cout<<array[i]<<endl;
    }
    return 0;
}