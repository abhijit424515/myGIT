#include <stdlib.h>  
#include <stdio.h>

void calculate_probability(int n){
    int count[6]; // Stores how many times each number in 1 to 6 appears (count of 1 will be in count[0])

    for (int i = 0; i < 6; i++){
        count[i] = 0; // Initialise to 0
    }
    for (int i = 0; i < n; i++){
        int value = rand()%6;  // Random num between 0 and 5
        count[value] += 1;
    }

    for (int i = 1; i<= 6; i++){
        printf("The probability of getting %d is %lf \n", i, count[i-1]/(double) n); // Print
    }

}

int main(int argc, char *argv[]){
    calculate_probability(atoi(argv[1]));  // atoi converts the string we got in argv to an integer
}
