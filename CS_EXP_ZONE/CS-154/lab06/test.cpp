#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main() {
    ifstream x;
    x.open("text");
    string a,b,c;
    x>>a; x>>b; x>>c;
    cout<<a<<" space "<<b<<" space "<<c<<" space ";
}