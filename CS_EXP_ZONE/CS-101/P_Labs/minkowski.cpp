#include<simplecpp>
main_program {
    int n,p;
    cin>>n>>p;
    double x,y, abs;
    double S=0, E;
    for(int i=1; i<=n; i++) {
        cin>>x>>y;
        abs = x-y;
        if (abs<0) {abs = -1*abs;}
        S += pow(abs,p);
    }
    E = pow(S,(1.0/p));
    cout<<fixed;
    cout.precision(2);
    cout<<E;
}
