#include<simplecpp>
main_program{
    int a,b;
    int x=1;
    cin>>a;
    cin>>b;
    while((x%a!=0) || (x%b!=0)){
        x++;
    }
    cout<<x;
}
