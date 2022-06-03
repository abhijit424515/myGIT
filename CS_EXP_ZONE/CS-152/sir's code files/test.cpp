#include<iostream>
using namespace std;
int main(){
    int age = 15;
    try {
        if (age >= 18) {
            cout << "Access granted - you are old enough.";
        } 
        else {
            throw ('a');
            cout << "after throw\n";
        }
    }
    catch (int myNum) {
        cout << "Access denied - You must be at least 18 years old.\n";
        cout << "Age is: "<<myNum<<"\n"; 
    }
    catch (char x){
        cout << "caught the char thrown: "<<x<<endl;
    }
    catch (...){
        cout << "default handler\n";
    }
}