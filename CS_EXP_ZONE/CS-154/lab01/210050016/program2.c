#include <stdio.h>
#include <string.h>
void print_freq(char *filename){
    FILE* infile = fopen(filename, "r"); // Opens file
    int frequency[256]; // Stores how mnay times a character appears. Frequency of character with ascii code i is in frequency[i]
    for (int i = 0; i < 256; i++){
        frequency[i] = 0; // Initialise
    }
    char ch; // Will store the character we get from file
    while (!feof(infile)){ // Read until end of file
        ch = fgetc(infile); // Read a char
        frequency[ch] += 1; // Increment
    }

    for (int i = 0; i < 256; i++){
        if (frequency[i] > 0 && (char)i != ' ' && (char)i != '\n'){ // Don't print for those characters that don't appear, or whitespace and newlines
            printf("The frequency of %c is %d\n", (char)i, frequency[i]);
        }
    }
}
int main(int argc, char *argv[]){
    print_freq(argv[1]);
}
