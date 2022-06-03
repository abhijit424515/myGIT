#include<simplecpp>
int i=0; double side,l,theta;
main_program {
    cin>>side>>l>>theta;
    initCanvas("Snowflakes",500,500);

    Rectangle r1(250,250,l,l);
    r1.setFill("black");
    r1.penDown();
    r1.rotate(1*theta);
    // r1.rotate(90);
    // repeat(floor(side-(l/(2*sqrt(3))))) {
    //     r1.forward(side-(l/(2*sqrt(3))));
    // }
    for(double x=0; x<400; x += 1){
        double t = l/50000;
        r1.forward(1);
        r1.scale((0.9-x*t)/(1.0-x*t));
        r1.imprint();
    }
    /*
    Rectangle r2(250,250,l,1);
    r2.setFill("black");
    r2.penDown();
    r2.rotate(2*theta);
    r2.rotate(90);
    r2.forward(side-(l/(2*sqrt(3))));

    for(int x=0; x<(l-1); x++){
        double t=0.1;
        r2.forward(l);
        r2.scale((0.9-x*t)/(1.0-x*t));
    }
    Rectangle r3(250,250,l,1);
    r3.setFill("black");
    r3.penDown();
    r3.rotate(3*theta);
    r3.rotate(90);
    r3.forward(side-(l/(2*sqrt(3))));

    for(int x=0; x<(l-1); x++){
        double t=0.1;
        r3.forward(l);
        r3.scale((0.9-x*t)/(1.0-x*t));
    }
    Rectangle r4(250,250,l,1);
    r4.setFill("black");
    r4.penDown();
    r4.rotate(4*theta);
    r4.rotate(90);
    r4.forward(side-(l/(2*sqrt(3))));

    for(int x=0; x<(l-1); x++){
        double t=0.1;
        r4.forward(l);
        r4.scale((0.9-x*t)/(1.0-x*t));
    }
    Rectangle r5(250,250,l,1);
    r5.setFill("black");
    r5.penDown();
    r5.rotate(5*theta);
    r5.rotate(90);
    r5.forward(side-(l/(2*sqrt(3))));

    for(int x=0; x<(l-1); x++){
        double t=0.1;
        r5.forward(l);
        r5.scale((0.9-x*t)/(1.0-x*t));
    }
    Rectangle r6(250,250,l,1);
    r6.setFill("black");
    r6.penDown();
    r6.rotate(6*theta);
    r6.rotate(90);
    r6.forward(side-(l/(2*sqrt(3))));

    for(int x=0; x<(l-1); x++){
        double t=0.1;
        r6.forward(l);
        r6.scale((0.9-x*t)/(1.0-x*t));
    }
    */
    wait(5);
}
