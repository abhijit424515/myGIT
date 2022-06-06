#include <stdlib.h>
#include <stdio.h>

void calc_prob(int n){
    int count[6]; // stores number of occurences of each number
    for(int i=0; i<6; i++){
        count[i]=0;
    }
    for(int i=0; i<n; i++){
        count[rand()%6]+=1;
    }
    for(int i=0; i<6; i++){
        printf("The probability of getting %i is %lf\n",i+1,count[i]/(double)n);
    }
}

int main(int argc, char *argv[]){
    srand(time_t(0));
    calc_prob(atoi(argv[1]));
    // atoi converts a string to an int
}