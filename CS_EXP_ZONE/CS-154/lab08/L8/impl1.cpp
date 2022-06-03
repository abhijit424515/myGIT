#include<iostream>
#include <fstream>
#include <string>
using namespace std;
#include <vector>
#include <cmath>
#include "reusable.cpp"
#include <cassert>

class testing{
    int x;
 public:
    int func1(int x){
        // some code related to x passed as parameter
        return this->x;
    }
};


// definition of the function: one variant

int check_already_exists(int t, string x, vector<string> rawList1, vector<string> rawList2) {
    if(t==1){
        for(int i=0; i<rawList1.size(); i++){
            if(rawList1[i]==x) return i;
        }
    }
    else if(t==2){
        for(int i=0; i<rawList2.size(); i++){
            if(rawList2[i]==x) return i;
        }
    }
    return -1;
}

int checksimilarity (string n1, string n2) {
    ifstream f1, f2; 
    f1.open(n1); f2.open(n2);

    vector<string> rawList1; vector<int> quantities1;
    vector<string> rawList2; vector<int> quantities2;
    
    string x1,x2;
    while(f1>>x1) {
        int z = check_already_exists(1,x1,rawList1,rawList2);
        if(z!=-1) quantities1[z]++;
        else{
            rawList1.push_back(x1); quantities1.push_back(1);
        } 
    }
    f1.close();
    while(f2>>x2) {
        int z = check_already_exists(2,x2,rawList1,rawList2);
        if(z!=-1) quantities2[z]++;
        else{
            rawList2.push_back(x2); quantities2.push_back(1);
        } 
    }
    f2.close();

    assert(rawList1.size()==quantities1.size()); assert(rawList2.size()==quantities2.size());

    double dot=0; 
    for(int i=0; i<rawList1.size(); i++){
        for(int j=0; j<rawList2.size(); j++){
            if(rawList1[i]==rawList2[j]) dot+=quantities1[i]*quantities2[j];
        }
    }
    dot = dot/(mod_calc(1,quantities1,quantities2)*mod_calc(2,quantities1,quantities2));
    return round(100*dot);
}