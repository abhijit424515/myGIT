#include <iostream>
#include <string>
#include <cassert>
using namespace std;

int find(string str, string sub) {  
    for(int i=0; i<=str.length()-sub.length(); i++){
        bool x = 1;
        for(int j=0; j<sub.length(); j++){
            if(str[i+j]!=sub[j]){
                x=0;
            }
        }
        if(x) return i;
    }
    return -1;
}

int main () {
    string str,sub; 
    cin>>str>>sub;
    // try inputing strings with spaces, it won't work properly
    
    assert(str.length()>=sub.length());
    int index = find(str,sub); 
    assert(index<=str.length()-sub.length());
    if(index!=-1)  cout<<"The substring was found in the given string at index "<<index<<endl;
    else           cout<<"The substring was not found in the given string"<<endl;
}
