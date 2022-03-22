#include<iostream>
using namespace std;
void demo()
{ 
    static int count = 0;
    cout << count << " ";
}
struct alpha{
    static int counter;
    alpha(){
        counter++;
    }
    static void resetter(){
        counter=0; 
    }
};

int main()
{   
    for (int i=0; i<5; i++)    
        demo();
    cout<<endl;

    alpha::counter=0;
    alpha one,two,three;
    cout<<alpha::counter<<endl;
    alpha::resetter();
    cout<<alpha::counter<<endl;
}