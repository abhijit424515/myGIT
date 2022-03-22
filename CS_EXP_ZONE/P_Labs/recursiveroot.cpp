#include<simplecpp>
main_program{
    int n;
    cin>>n;

    double x = sqrt(2.0);
    if (n>1) {
        repeat(n-1) {
            x = sqrt(2.0 + x);
        }
    }
    cout<<fixed;
    cout.precision(2);
    cout<<x;
}
