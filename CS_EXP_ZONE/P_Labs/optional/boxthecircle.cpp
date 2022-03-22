#include<simplecpp>
main_program {
    initCanvas("Box the circle", 500, 500);
    Circle c1(200,200,50);
    
    int z1 = getClick(); int x1 = z1/65536; int y1 = z1%65536;
    int z2 = getClick(); int x2 = z2/65536; int y2 = z2%65536;
    Line l0(x1,y1,x2,y2);

    float dy = (y2-y1);
    float dx = (x2-x1);
    float theta = atan((dy/dx));

    Rectangle r1(200,200,100,100);
    r1.rotate(theta);

    wait(3);
}