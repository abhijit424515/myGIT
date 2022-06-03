#include<simplecpp>
main_program{
    turtleSim();
    // first, we will define pi
    double pi = 2*acos(0);
    repeat(6) {
        repeat(180) {
            forward(pi/4.5); right(2);
            // for radius 20, perimeter = 40*pi, so for each step of 2 degress, we move forward by 40*pi/180 = pi/4.5
        }
        repeat(30) {
            forward(pi/4.5); left(2); // making a partial circle / arc
        }
    }
    wait(5000);
}
