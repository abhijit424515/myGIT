#include <vector>
#include <cassert>
#include <cmath>

int checksimilarity (string n1, string n2);

struct character{
    char x;
    vector<int> list_of_indices_of_this_char;
    double average_index_of_this_char;
    vector<double> abs_deviation;
    double average_deviation_of_this_char;
};

double mod_calc(int t, vector<character> list_of_chars1, vector<character> list_of_chars2) {
    long double sum=0;
    if(t==1){
        for(int i=0; i<list_of_chars1.size(); i++){
            sum+=list_of_chars1[i].average_deviation_of_this_char*list_of_chars1[i].average_deviation_of_this_char;
        }
    }
    else if(t==2){
        for(int i=0; i<list_of_chars2.size(); i++){
            sum+=list_of_chars2[i].average_deviation_of_this_char*list_of_chars2[i].average_deviation_of_this_char;
        }
    }
    if(abs(sum-0)<1e-5) return 1;
    return sqrt(sum);
}

double mod_calc(int t, vector<int> q1, vector<int> q2) {
    double sum=0;
    if(t==1){
        for(int i=0; i<q1.size(); i++){
            assert(q1[i]!=0);
            sum+=q1[i]*q1[i];
        }
    }
    else if(t==2){
        for(int i=0; i<q2.size(); i++){
            assert(q2[i]!=0);
            sum+=q2[i]*q2[i];
        }
    }
    return sqrt(sum);
}
