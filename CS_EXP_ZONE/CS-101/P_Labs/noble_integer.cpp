#include<iostream>
using namespace std;
int main(){
    int n; cin>>n; 
    int myarray[n]; int count=0; bool win=0;
    for(int i=0; i<n; i++){
        cin>>myarray[i];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int count=0;
            if (myarray[i]<myarray[j]){
                count++;
            }
            if (myarray[i]==count){
                win=1; break;
            }
        }
        if(win==1){
            break;
        }
    }
    cout<<win;
}