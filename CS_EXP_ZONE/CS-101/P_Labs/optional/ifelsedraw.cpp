#include<simplecpp>
main_program {
    int n; cin>>n;    
    turtleSim();
    if((n%2==1) || (n%2==(-1))) {
        repeat(4) {
            forward(100); left(90);
        }
    }
    else if(n%2==0) {
        repeat(3) {
            forward(100); left(120);
        }
    }
    wait(2);
}