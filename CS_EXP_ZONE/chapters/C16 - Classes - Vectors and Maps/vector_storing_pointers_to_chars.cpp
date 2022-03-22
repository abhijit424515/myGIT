#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<char*> v1(4);
    char one='a',two='b',three='c',four='d';
    v1[0]=&one; v1[1]=&two; v1[2]=&three; v1[3]=&four; 
    for(int i=0; i<4; i++){
        cout<<*v1[i]<<endl;
    }
    return 0;
}