#include<simplecpp>
main_program{
    turtleSim(); left(30);
    repeat(30){
        forward(40);
        repeat(24){
            forward(1); right(10);
        }
        forward(40);
        repeat(24){
            forward(1); left(10);
        }
        left(12);
    }
    wait(3);
}

