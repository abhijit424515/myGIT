#include<iostream>
#include<string>
using namespace std;
int main(){
    string v="abcdab";      //constructor
    string w(v);            // new constructor with same values 
    string x=v+w;           // new constructor with concatenated values

    v[2]=v[3];              // 3rd letter of v changes to the 4th letter
                            //   so v="abddab"
    cout<<v.substr(2)       // prints "ddab"
        <<v.substr(1,3)     // prints "bcd"
        <<endl;             // first number is the starting index, 
                            //   while the 2nd is the length of substring

    int i=v.find("ab");     // returns the starting index of the first "ab"
    int j=v.find("ab",1);   // find, but starting from index 1
    int k=v.find("xy");     // returns string::npos

    // strings can be compared in dictionary order
}