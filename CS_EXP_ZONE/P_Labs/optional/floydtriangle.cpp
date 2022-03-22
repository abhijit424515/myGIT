#include<simplecpp>
main_program {
    int n, k, t;
    // int first = (((k^2) - k + 2)/2);
    // int last = (((k^2) + k)/2);

    cin>>n;

    cout<<1<<endl;
    for (k=2; k<= n; k++) {
        for (t=(((k*k) - k + 2)/2); t<(((k*k) + k)/2); t++) {
            cout<<t<<" ";
        }
        cout<<(((k*k) + k)/2)<<endl;
    }
}
