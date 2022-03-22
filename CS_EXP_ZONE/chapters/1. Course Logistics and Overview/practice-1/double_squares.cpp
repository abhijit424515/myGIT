#include<simplecpp>
main_program{
    turtleSim();
    repeat(4){
        forward(100); right(90);
    }
    forward(50); right(45);
    repeat(4){
        forward(100.0/sqrt(2)); right(90);  // 100.0 instead of 100 to get decimals
    }
    wait(3);                                // wait time is compulsory
}
