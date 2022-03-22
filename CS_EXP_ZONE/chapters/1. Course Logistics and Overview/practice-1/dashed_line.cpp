#include<simplecpp>
main_program{
    turtleSim();                                            // always call this guy
    repeat(10){
        forward(10); penUp(); forward(10); penDown();
    }
    wait(3);                                                // always include wait time
}
