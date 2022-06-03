#include <iostream>
#include <fstream>
#include <string>
using namespace std;
#include <vector>
#include <cmath>
#include <cassert>
#include "reusable.cpp"

// definition of the function: second variant

vector<character> list_of_chars1,list_of_chars2;

int check_already_exists(int t, char p) {
    if(t==1){
        for(int i=0; i<list_of_chars1.size(); i++){
            if(list_of_chars1[i].x==p) return i;
        }
    }
    else if(t==2){
        for(int i=0; i<list_of_chars2.size(); i++){
            if(list_of_chars2[i].x==p) return i;
        }
    }
    return -1;
}

int checksimilarity (string n1, string n2) {
    long long int no_of_all_chars=0, no_of_dist_chars=0; 

    ifstream f1, f2; 
    f1.open(n1); f2.open(n2);
    
    string x1,x2;
    while(f1>>x1) {
        for(int k=0; k<x1.length(); k++){
            int z = check_already_exists(1,x1[k]);
            if(z!=-1) list_of_chars1[z].list_of_indices_of_this_char.push_back(no_of_all_chars);
            else{
                character c; c.x=x1[k]; c.list_of_indices_of_this_char.push_back(no_of_all_chars); 
                list_of_chars1.push_back(c);
                no_of_dist_chars++;
            } 
            no_of_all_chars++; 
        }
    }
    f1.close();
    no_of_all_chars=0, no_of_dist_chars=0;
    while(f2>>x2) {
        for(int k=0; k<x2.length(); k++){
            int z = check_already_exists(2,x2[k]);
            if(z!=-1) list_of_chars2[z].list_of_indices_of_this_char.push_back(no_of_all_chars);
            else{
                character c; c.x=x2[k]; c.list_of_indices_of_this_char.push_back(no_of_all_chars); 
                list_of_chars2.push_back(c);
                no_of_dist_chars++;
            } 
            no_of_all_chars++; 
        }
    }
    f2.close();

    for(int i=0; i<list_of_chars1.size(); i++){
        double alpha=0;
        for(int j=0; j<list_of_chars1[i].list_of_indices_of_this_char.size(); j++){
            alpha+=list_of_chars1[i].list_of_indices_of_this_char[j];
        }
        
        list_of_chars1[i].average_index_of_this_char=alpha*1.00/(list_of_chars1[i].list_of_indices_of_this_char.size()+1e-5);
        double beta=0;

        for(int j=0; j<list_of_chars1[i].abs_deviation.size(); j++){
            beta+=list_of_chars1[i].abs_deviation[j];
            list_of_chars1[i].abs_deviation.push_back(abs(list_of_chars1[i].list_of_indices_of_this_char[j]-list_of_chars1[i].average_index_of_this_char));
        }

        list_of_chars1[i].average_deviation_of_this_char=beta*1.00/(list_of_chars1[i].abs_deviation.size()+1e-5);
    }

    for(int i=0; i<128; i++){
        bool t=1;
        for(int j=0; j<list_of_chars1.size(); j++){
            if(list_of_chars1[j].x==i) {
                t=0; break;
            }
        }
        if(t) {
            character c; c.x=i; c.average_deviation_of_this_char=0; list_of_chars1.push_back(c);
        }
    }

    for(int i=0; i<128; i++){
        bool t=1;
        for(int j=0; j<list_of_chars2.size(); j++){
            if(list_of_chars2[j].x==i) {
                t=0; break;
            }
        }
        if(t) {
            character c; c.x=i; c.average_deviation_of_this_char=0; list_of_chars2.push_back(c);
        }
    }
    assert(list_of_chars1.size()==128 && list_of_chars2.size()==128);

    double dot=0; 
    for(int i=0; i<list_of_chars1.size(); i++){
        for(int j=0; j<list_of_chars2.size(); j++){
            if(list_of_chars1[i].x==list_of_chars2[j].x) {
                dot+=list_of_chars1[i].average_deviation_of_this_char*list_of_chars2[i].average_deviation_of_this_char;
            }
        }
    }
    dot = dot/(mod_calc(1,list_of_chars1,list_of_chars2)*mod_calc(2,list_of_chars1, list_of_chars2));
    return 100*dot;
}