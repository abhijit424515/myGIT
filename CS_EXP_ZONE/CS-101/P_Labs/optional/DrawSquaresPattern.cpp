#include<simplecpp>

void l_sq() {
    forward(2.5); left(90);
    forward(5); left(90);
    forward(5); left(90);
    forward(5); left(90);
    forward(2.5);
}

main_program {
    int n;
    cin>>n;
    turtleSim();
    repeat(4) {
        right(90); forward(n); l_sq();
    }
    wait(5);
}

