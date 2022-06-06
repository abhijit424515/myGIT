#include <stdio.h>
#include <string>
#include <fstream>
#include <iostream>
using namespace std;
class Frequency_finder{
            string filename; // Stores the name of the file
        public:
            Frequency_finder(string s){
                filename = s; // Constructor
            }
            void print_freq(){
                    // Similr to print_freq in program2.c
                    ifstream infile(filename); 
                    int frequency[256]; // Stores the frequency of each ascii value
                    for (int i = 0; i < 256; i++){
                            frequency[i] = 0; // Initialise
                    }
                    char ch;
                    while (infile >> ch){ // Read until end of file
                            frequency[ch] += 1; // Increment
                    }

                    for (int i = 0; i < 256; i++){
                            // Exclude characters that don't appear, and whitespaces and newlines
                            if (frequency[i] > 0 && (char)i != ' ' && (char)i != '\n'){
                                    cout <<"The frequency of "<< (char)i << " is " <<  frequency[i] << endl;

                            }
                    }
            }
};


int main(int argc, char *argv[]){
        Frequency_finder freq(argv[1]); // Create object of the class
        freq.print_freq();
}
