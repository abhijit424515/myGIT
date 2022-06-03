#include<simplecpp>
main_program{
    int x,n,k;
    cin>>x>>n>>k;
    int exp_digit;
    int product = 1; int exp_exp=0; int pro;

    while(n>0){
        pro = x;
        exp_digit = n%2;
        n = n/2;
        x = x%k;
        if(exp_digit==1){
            if(exp_exp>0){
                repeat(exp_exp) {
                    pro *= pro;
                    pro = pro%k;
                }
            }
            product=product*pro;
            product=product%k;
        }
        exp_exp++;
    }
    cout<<product;
}
