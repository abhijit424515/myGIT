#include<simplecpp>
main_program {
    float x, y;
    x = 65;
    y = 36.0 - 0.2*x;
    turtleSim();
    left(90); right(x); left(18);
    repeat(20) {
        forward(40);
        repeat(10) {
            forward(2.4); left(y);
        }
        forward(40);
        repeat(10) {
            forward(2.4); right(y);
        }
        right(18); // 360/20 = 18
    }
    wait(5);
}
