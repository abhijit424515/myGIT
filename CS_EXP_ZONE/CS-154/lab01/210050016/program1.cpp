#include <stdlib.h>  
#include <iostream>
using namespace std;

class Dice{
    public:
            int roll(){
                return rand()%6; // Generate random number

            }
};

class Probability_finder{
            int n; // Data member that stores how many times to roll
        public:
            Probability_finder(int n){
                this->n = n; // Constructor
            }
            
            void calculate_probability(){
                    // Similar to calculate_probability in problem1.c

                    Dice dice; // Create object of Dice, so that we can roll
                    int count[6]; // Stores the counts of occurence of each number from 1 to 6
                    for (int i = 0; i < 6; i++){
                            count[i] = 0; // Initialise
                    }
                    for (int i = 0; i < n; i++){
                            int value = dice.roll(); // Roll dice
                            count[value] += 1;  // Increment
                    }

                    for (int i = 1; i<= 6; i++){
                            cout <<  "The probability of getting " << i << " is " << count[i-1]/(double) n << endl;
                    }

            }
};

int main(int argc, char *argv[]){
        Probability_finder prob(atoi(argv[1])); // Creates an object of the class, atoi converts char* to int
        prob.calculate_probability();
}
