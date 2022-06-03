#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;
int main(){
    ifstream x; x.open("impl1.cpp");
    vector<string> t;
    string f;
    while(x>>f){
        t.push_back(f);
    }
    cout<<t.size()<<endl;
    return 0;
}