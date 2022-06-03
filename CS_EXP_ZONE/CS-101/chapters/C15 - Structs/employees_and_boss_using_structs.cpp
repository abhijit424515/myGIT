#include<iostream>
using namespace std;
struct Employee{
    char title[20];
    Employee *boss;
};
int main(){
    Employee e1={"President", NULL};
    Employee e2={"MD", &e1};
    Employee e3={"ED", &e1};
    cout<<e2.boss->title<<endl;
    cout<<e3.boss->boss->title<<endl;           // This is an error, since no employee is there with NULL title
    return 0;
}