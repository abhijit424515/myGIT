#include<iostream>
using namespace std;
int main(){
    int x[5]={8,7,6,5,4};
    cout<<x[0]<<" "<<x<<" "<<*x<<endl;
    cout<<x[1]<<" "<<x+1<<" "<<*(x+1)<<endl;
    cout<<x[2]<<" "<<x+2<<" "<<*(x+2)<<endl;
    cout<<x[3]<<" "<<x+3<<" "<<*(x+3)<<endl;
    cout<<x[4]<<" "<<x+4<<" "<<*(x+4)<<endl;
    return 0;
}