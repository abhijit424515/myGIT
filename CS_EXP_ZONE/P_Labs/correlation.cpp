#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n; cin>>n;
    int x[n], y[n];
    for(int i=0; i<n; i++){
        cin>>x[i];
    }
    for(int i=0; i<n; i++){
        cin>>y[i];
    }
    double N=0,N1=0,N2=0,N3=0,D=0,D1=0,D2=0,D3=0,D4=0;
    for(int i=0; i<n; i++){
        N1+=x[i]*y[i];
        N2+=x[i]; N3+=y[i];
        D1+=x[i]*x[i]; D2+=x[i];
        D3+=y[i]*y[i]; D4+=y[i];
    }
    N=n*N1-N2*N3;
    D=(n*D1-D2*D2)*(n*D3-D4*D4);
    D=sqrt(D);
    
    // // error-proofing
    // cout<<N<<" "<<N1<<" "<<N2<<" "<<N3<<endl;
    // cout<<D<<" "<<D1<<" "<<D2<<" "<<D3<<" "<<D4<<endl;

    if (D==0){
        cout<<-1;
    }
    else{
        cout<<fixed;
        cout.precision(2);
        cout<<N/D;
    }
}