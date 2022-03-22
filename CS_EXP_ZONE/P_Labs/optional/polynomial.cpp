#include<simplecpp>
main_program {
    int n, a, b, c, i, j;
    cin>>n>>a>>b>>c;
    int x[n];
    int y[n];

    for(i=0; i<n; i++) {
        cin>>x[i];
    }
    for(j=0; j<n; j++) {
        y[j] = a*x[j]*x[j] + b*x[j] + c;
        cout<<y[j]<<endl;
    }
}
