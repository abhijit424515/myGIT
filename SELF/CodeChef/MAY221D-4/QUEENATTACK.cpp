#include<iostream>
using namespace std;
int main(){
    int T; cin>>T; int array[T]; 
    for(int i=0; i<T; i++){
        int N,X,Y; cin>>N>>X>>Y; 
        array[i]=2*N-2+2*N-X-Y;
    }
    for(int i=0; i<T; i++){
        cout<<array[i]<<endl;
    }
    return 0;
}