#include<simplecpp>
main_program {
    int n;
    int i = 0;
    cin>>n;

    repeat(n) {
        cout<<"*";
    }
    cout<<endl; // this loop is to print the first line

    repeat(n-2) {
        repeat(n-i-2) {cout<<" ";}
        cout<<"*"<<endl;
        i = i+1;
    } // this loop is for the in-between lines

    repeat(n) {
        cout<<"*";
    }
    cout<<endl; // this loop is for the last line
}
