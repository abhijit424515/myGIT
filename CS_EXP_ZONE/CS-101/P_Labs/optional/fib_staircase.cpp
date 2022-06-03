#include<simplecpp>

int fib(int x) {
    if ((x==1) || (x==2)){
        return 1;
    }
    else {
        return (fib(x-1) + fib(x-2));
    }
}

main_program {
    int n, i;
    cin>>n;

    for(i = 1; i <= n; i++) {
        repeat (fib(i)) {
            cout<<"*";
        }
        cout<<endl;
    }
}
