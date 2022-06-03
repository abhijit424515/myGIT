#include<iostream>
using namespace std;
int main(){
    int n; cin>>n; int myarray[n];
    int currentmax=0; int last_index=n-1;
    bool found;
    for(int i=0; i<n; i++){
        cin>>myarray[i];
    }
    for(int i=0; i<n; i++){                     // i,j are the indexes of the initial/final numbers
        found=false; last_index=n-1;            // variables to reset : found, last_index 
        for(int j=n-1; i<j; j--){               
            if(myarray[j]==myarray[i]){         // when repeated number exists, and is found
                last_index=j;
                found=true;
                break;
            }
        }
        if((currentmax<last_index-i)&&(found==true)){
            currentmax=last_index-i;
        }
    }
    cout<<currentmax;
}