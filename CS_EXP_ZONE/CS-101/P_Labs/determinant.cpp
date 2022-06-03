#include<iostream>
#include<cmath>
using namespace std;
int DET(int B[5][5], int n){
    if(n==2){
        return (B[0][0]*B[1][1]-B[0][1]*B[1][0]);
    }
    int sum=0;
    for(int k=0; k<n; k++){
        int Ad[5][5];
        for(int i=0; i<n-1; i++){
            for(int j=0; j<n-1; j++){
                if(j<k){
                    Ad[i][j]=B[i+1][j];
                }
                else if(j>=k){
                    Ad[i][j]=B[i+1][j+1];
                }
            }
        }
        sum+=(pow(-1,k))*B[0][k]*DET(Ad,n-1);
    }
    return sum;
}
int main(){
    int n; cin>>n; int M[5][5];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>M[i][j];
        }
    }
    cout<<DET(M,n);
}