#include<simplecpp>
main_program{
    char input; cin>>input;
    if((input<=90) && (input>=65)) {
        cout<<"uppercase";
    }
    else if((input<=122) && (input>=97)) {
        cout<<"lowercase";
    }
    else {
        cout<<"this is not alphabet";
    }
}