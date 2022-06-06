#include<fstream>
#include<iostream>
#include<string>
using namespace std;

class Fileread{
 private:
    int counter[128]; ifstream *x; string words;
    void increment(int i, string words){
        counter[words[i]]++;   
    }
 public:
    Fileread(string s){
        for(int i=0; i<128; i++){
            counter[i]=0;
        }
        x = new ifstream(s);
        counter_func();
    }
    void counter_func(){
        while(*x >> words){
            for(int i=0; i<words.length(); i++){
                increment(i, words);
            }
        }
        for(int i=1; i<128; i++){
            char x = i;
            print(x,i);
        }
    }
    void print(char x, int i){
        if(counter[i]!=0 && i!=32){
            cout<<x<<" "<<counter[i]<<endl;
        }
    }
    ~Fileread(){
        x->close();
        delete x;
    }
};

int main(int argc, char *argv[]) {
    Fileread thisfile(argv[1]);
}