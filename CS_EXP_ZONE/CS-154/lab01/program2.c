#include<fstream>
#include<iostream>
#include<string>
using namespace std;

int main(int argc, char *argv[]) {
    int counter[128];
    for(int i=0; i<128; i++){
        counter[i]=0;
    }
    string file = argv[1];
    ifstream myfile(file);
    string words;
    while(getline(myfile, words)){
        
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
    myfile.close();

}