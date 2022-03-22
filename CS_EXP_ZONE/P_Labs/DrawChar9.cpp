#include<simplecpp>
main_program {
    int x;
    // cout<<"Enter the size of the figure: ";
    cin>>x; // input the size of figure

    turtleSim();
    penUp();
    left(180); forward(200); left(90); forward(200); left(90); penDown();

    forward(x); left(90); wait(0.1);
    forward(2*x); left(90); wait(0.1);
    forward(x); left(90); wait(0.1);
    forward(x); left(90); wait(0.1);
    forward(x);

    wait(5);
}
