#include<simplecpp>

main_program{
    turtleSim();
    // starting with a triangle
    repeat(3) {
        forward(100); left(120); wait(0.1);
    }
    right(90);
    // followed by rectangle
    forward(150); left(90); wait(0.1);
    forward(100); left(90); wait(0.1);
    forward(150);
    wait(500);
}
