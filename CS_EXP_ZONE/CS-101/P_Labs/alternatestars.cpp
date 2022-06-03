#include<simplecpp>
main_program {
    int n;
    cin>>n;

    repeat(n) {
        cout<<"*";
        repeat(n-1) {cout<<" *";} // first line
        cout<<endl; // go to next line
        repeat(n-1) {cout<<" *";} // second line, without space at the end
        cout<<endl; // go to next line
    }
}
