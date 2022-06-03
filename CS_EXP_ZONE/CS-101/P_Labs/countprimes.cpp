#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    if(n==1){cout<<0; return 0;}                        // trivial case
    int count=n-1; int is_it_prime[n-1];
    for(int i=0; i<n-1; i++){                           // initializing the situation
        is_it_prime[i]=1; 
    }

    for(int i=0; i<n-1; i++){                           // main working
        if(is_it_prime[i]==1){                          // check if current number is "currently" prime
            for(int j=i+1; j<n-1; j++){                 
                if(is_it_prime[j]==1){                  // check if frontier numbers are "currently" prime
                    if((j+2)%(i+2)==0){                 // if jth number is divisible by ith number, 
                        is_it_prime[j]=0; count--;      //              then change it's prime status
                    }
                }
            }
        }
    }
    cout<<count;
    return 0;
}