#include<simplecpp>
int coef(int n,int r) {
    int x=1,y=1,z=1;
    if(n>0) {
        for(int i=1; i<=n; i++) {
            x *= i;
        }
    }
    if(r>0) {
        for(int i=1; i<=r; i++) {
            y *= i;
        }
    }
    if(n>r) {
        for(int i=1; i<=(n-r); i++) {
            z *= i;
        }
    }
    return (x/(y*z));
}

main_program {
    int n; cin>>n;

    for(int i=0; i<=n-1; i++) {
        for(int j=0; j<=i; j++) {
            if(j<i) {cout<<coef(i,j)<<" ";}
            else if(j==i) {cout<<1;}
        }
        cout<<endl;
    }
}
