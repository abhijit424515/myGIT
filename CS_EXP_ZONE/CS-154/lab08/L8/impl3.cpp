#include <iostream>
#include <cassert>
#include <vector>
#include <fstream>
using namespace std;

int union_of_list(vector<string> rawList1, vector<string> rawList2){
    vector<string> x; 
    for(int i=0; i<rawList2.size(); i++){
        x.push_back(rawList2[i]);
    }
    for(int i=0; i<rawList1.size(); i++){
        bool t=0;
        for(int j=0; j<rawList2.size(); j++){
            if(rawList1[i]==rawList2[j]){
                t=1; break;
            }
        }
        if(!t){
            x.push_back(rawList1[i]);
        }
    }
    return x.size();
}

int checksimilarity(string n1, string n2) {
    vector<string> rawList1, rawList2;
    ifstream f1; ifstream f2; f1.open(n1); f2.open(n2);
    string p;

    while (f1 >> p){
        bool x=0;
        if(rawList1.size()==0){
            rawList1.push_back(p);
        }
        else{
            for(int i=0; i<rawList1.size(); i++){
                if(p==rawList1[i]){
                    x=1; break;
                }
            }
            if (!x){
                rawList1.push_back(p);
            }
        }
    }

    while (f2 >> p){
        bool x=0;
        if(rawList2.size()==0){
            rawList2.push_back(p);
        }
        else{
            for(int i=0; i<rawList2.size(); i++){
                if(p==rawList2[i]){
                    x=1; break;
                } 
            }
            if (!x){
                rawList2.push_back(p);
            }
        }
    }

    int max;    
    int divide = union_of_list(rawList1,rawList2);
    if(rawList1.size()>rawList2.size()){
        max = rawList1.size();
    }
    else{
        max = rawList2.size();
    }
    int score = max * 100 / divide;
    return score;
}
