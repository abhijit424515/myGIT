#include<simplecpp>
main_program{
    turtleSim();
    right(90);
    int t; double x, y, dx, dy;
    double pie = 2*acos(0.0); // defining pie
    double len[] = {59.0, 29.0, 13.0, 2.1, 1.7}; // we can use variables too, but using an array is more convenient here (maybe)
    double omeg[] = {2.0, 3.0, 7.0, 11.0, 17.0};

    for(t=1; t<=360; t++) {
        penUp();
        x = (len[0])*cosine((omeg[0])*t) + (len[1])*cosine((omeg[0]+omeg[1])*t) + (len[2])*cosine((omeg[0]+omeg[1]+omeg[2])*t) + (len[3])*cosine((omeg[0]+omeg[1]+omeg[2]+omeg[3])*t) + (len[4])*cosine((omeg[0]+omeg[1]+omeg[2]+omeg[3]+omeg[4])*t);
        y = (len[0])*sine((omeg[0])*t) + (len[1])*sine((omeg[0]+omeg[1])*t) + (len[2])*sine((omeg[0]+omeg[1]+omeg[2])*t) + (len[3])*sine((omeg[0]+omeg[1]+omeg[2]+omeg[3])*t) + (len[4])*sine((omeg[0]+omeg[1]+omeg[2]+omeg[3]+omeg[4])*t);
        dx = (len[0])*(omeg[0])*sine((omeg[0])*t) + (len[1])*(omeg[0]+omeg[1])*sine((omeg[0]+omeg[1])*t) + (len[2])*(omeg[0]+omeg[1]+omeg[2])*sine((omeg[0]+omeg[1]+omeg[2])*t) + (len[3])*(omeg[0]+omeg[1]+omeg[2]+omeg[3])*sine((omeg[0]+omeg[1]+omeg[2]+omeg[3])*t) + (len[4])*(omeg[0]+omeg[1]+omeg[2]+omeg[3]+omeg[4])*sine((omeg[0]+omeg[1]+omeg[2]+omeg[3]+omeg[4])*t);
        dy = (len[0])*(omeg[0])*cosine((omeg[0])*t) + (len[1])*(omeg[0]+omeg[1])*cosine((omeg[0]+omeg[1])*t) + (len[2])*(omeg[0]+omeg[1]+omeg[2])*cosine((omeg[0]+omeg[1]+omeg[2])*t) + (len[3])*(omeg[0]+omeg[1]+omeg[2]+omeg[3])*cosine((omeg[0]+omeg[1]+omeg[2]+omeg[3])*t) + (len[4])*(omeg[0]+omeg[1]+omeg[2]+omeg[3]+omeg[4])*cosine((omeg[0]+omeg[1]+omeg[2]+omeg[3]+omeg[4])*t);
        dx = -dx;

        // below, I will be making sure the direction of turtle is correct since inverse trigonometric functions do not always give out the correct angle
        if ((dx>0) && (dy>0)){
            forward(x); left(90); forward(y);
            right((atan(dy/dx))*180.0 / pie); penDown();
            forward(1); penUp(); forward(-1);
            left((atan(dy/dx))*180.0 / pie); forward(-y); right(90); forward(-x);
        }
        if ((dx>0) && (dy<0)){
            forward(x); left(90); forward(y);
            right((atan(dy/dx))*180.0 / pie); penDown();
            forward(1); penUp(); forward(-1);
            left((atan(dy/dx))*180.0 / pie); forward(-y); right(90); forward(-x);
        }
        if ((dx<0) && (dy>0)){
            forward(x); left(90); forward(y);
            right(180); right((atan(dy/dx))*180.0 / pie); penDown();
            forward(1); penUp(); forward(-1);
            left(180); left((atan(dy/dx))*180.0 / pie); forward(-y); right(90); forward(-x);
        }
        if ((dx<0) && (dy<0)){
            forward(x); left(90); forward(y);
            right(180); right((atan(dy/dx))*180.0 / pie); penDown();
            forward(1); penUp(); forward(-1);
            left(180); left((atan(dy/dx))*180.0 / pie); forward(-y); right(90); forward(-x);
        }
    }
    wait(10);
}
