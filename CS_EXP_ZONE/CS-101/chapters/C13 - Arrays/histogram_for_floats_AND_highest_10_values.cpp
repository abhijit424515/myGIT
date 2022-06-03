#include<iostream>
using namespace std;
int main(){
    int n; cin>>n; float inputs[n];
    float partitions[30]; float histo_count[30]; 
    for(int i=0; i<n; i++){
        cin>>inputs[i];
    }
    for(int i=0; i<30; i++){
        histo_count[i]=0;
    }
    for(int i=0; i<30; i++){
        if(i<5){
            partitions[i]=(i+1)*(0.05);
        }
        else if(i<25){
            partitions[i]=0.25+(i-4)*(0.025);
        }
        else if(i<30){
            partitions[i]=0.75+(i-24)*(0.05);
        }
    }
    for(int k=0; k<n; k++){
        for(int i=0; i<30; i++){
            if(inputs[k]<partitions[i]){
                histo_count[i]++; break;
            }
        }
    }
    for(int i=0; i<30; i++){
        cout<<histo_count[i]<<" ";
    }
    return 0;
}