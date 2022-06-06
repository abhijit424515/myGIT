#include<fstream>
#include<iostream>
#include<string>
using namespace std;

class fileread{
    private:
        int counter[128];
    public:
    fileread(){
        for(int i=0; i<128; i++){
            counter[i]=0;
        }
    }
    void func1(int i, string words){
        counter[words[i]]++;   
    }
    void func2(char x, int i){
        if(counter[i]!=0 && i!=32){
            cout<<x<<" "<<counter[i]<<endl;
        }
    }
};

int main(int argc, char *argv[]) {
    fileread thisfile;
    string file = argv[1];
    ifstream myfile(file);
    string words;
    while(getline(myfile, words)){
        for(int i=0; i<words.length(); i++){
            thisfile.func1(i, words);
        }
    }
    for(int i=1; i<128; i++){
        char x = i;
        thisfile.func2(x,i);
    }
    myfile.close();
}