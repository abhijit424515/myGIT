#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    vector<int> v1;             // vector of 0 int elements
    vector<string> v2(10);      // vector of 10 strings
    vector<short> v3(10,300);   // vector of 10 shorts, all with value 300
    vector<short> w=v3;         // copy v3 to w

    v3[6]=34;                   // array-like functionality
    v3.push_back(22);           // append the elements 22 to v3
    cout<<v3.size()<<endl;      // returns size of vector v3, which is 11 
    // v3.size() returns a value of type size_t, specifically meant for storing array indices    

    v1.resize(9);               // new length of vector v1 is 9
    v2.resize(15,"**");         // resize, and set all values to "**"
    
    // MULTI-DIMENTIONAL VECTORS
    vector<vector<int> > vv;                            // mind that space (> >, not >>)
    vector<vector<int> > vv1(5,vector<int>(10,23));     
        // vv1 has 5 elements, each being a vector of length 10 and each element of that vector being 23   

    

    return 0;
}