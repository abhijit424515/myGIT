#include<simplecpp>
main_program{
    turtleSim();
    repeat(4){
        repeat(4){
            repeat(4){
                forward(10); right(90);
            }
            penUp(); forward(15); penDown();
        }
        penUp(); forward(-60); left(90); forward(-15); right(90); penDown();
    }
    wait(3);
}
