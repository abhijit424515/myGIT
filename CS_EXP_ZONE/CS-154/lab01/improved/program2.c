#include<fstream>
#include<iostream>
#include<string>
using namespace std;

void charlist(string x){
    int counter[128]; string words;
    ifstream myfile(x);

    for(int i=0; i<128; i++){
        counter[i]=0;
    }
    while(myfile >> words){
        for(int i=0; i<words.length(); i++){
            counter[words[i]]++;
        }
    }
    for(int i=1; i<128; i++){
        char x = i;
        if(counter[i]!=0 && i!=32){
            cout<<x<<" "<<counter[i]<<endl;
        }
    }
    for(int i=0; i<128; i++){
        counter[i]=0;
    }
    myfile.close();
}

int main(int argc, char *argv[]) {
    charlist(argv[1]);
}