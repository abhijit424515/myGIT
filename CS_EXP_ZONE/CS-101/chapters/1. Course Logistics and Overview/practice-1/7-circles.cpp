#include<simplecpp>
main_program{
    turtleSim();
    repeat(6){
        repeat(60){
            forward(1); right(1);
        }
        repeat(360){
            forward(1); left(1);
        }
    }
    wait(3);
}
