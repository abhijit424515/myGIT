#include<simplecpp>
main_program {
    int n; cin>>n;
    int x = 1;
    for(int i=1; i<=n; i++) {
        x = x*i;
    }
    cout<<x;
}
