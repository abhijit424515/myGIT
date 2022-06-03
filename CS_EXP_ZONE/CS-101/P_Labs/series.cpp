#include<simplecpp>
main_program {
    double x,c; int n;
    double p,q,r=1;
    cin>>x;
    cin>>n;
    c = x;
    for(int i=1; i<=n; i++){
        p = pow(x,(2*i)+1);
        q = pow(-1,i);
        r *= ((2*i) -1)*(2*i);
        c += ((p*q)/r);
    }
    cout<<fixed;
    cout.precision(2);
    cout<<c;
}
