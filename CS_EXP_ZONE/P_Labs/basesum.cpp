#include<simplecpp>
main_program {
    int b1,n1,b2,n2,t1,t2,l1,l2;
    int x1=0,x2=0;

    cin>>b1>>n1;
    l1 = n1;
    t1 = n1%10;
    for(int i=0; t1>0; i++) {
        x1 += t1*pow(b1,i);
        l1 = l1/10;
        t1 = l1%10;
    }

    cin>>b2>>n2;
    l2 = n2;
    t2 = n2%10;
    for(int i=0; t2>0; i++) {
        x2 += t2*pow(b2,i);
        l2 = l2/10;
        t2 = l2%10;
    }
    cout<<(x1+x2);
}
