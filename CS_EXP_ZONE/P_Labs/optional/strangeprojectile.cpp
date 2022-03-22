#include<simplecpp>
main_program{
    int a1=1,a2=2,a3; int p,x,y;
    initCanvas("Strange projectile",500,500);
    p = getClick(); x = p/65536; y = p%65536;
    Circle c(x,y,3); c.penDown();

    float vx=1.0,vy=-1.0,g=0.1;
    a3 = a1+a2;
    while(a1<=13){ // while loop runs the code first, then repetitively checks the condition
        repeat(abs(2*vy/g)+1) {
            // we did +1 so that after 2*vy/g cycles, we have vy = -vy(initial), we need to move turtle by (vx,-vy) also
            c.move(vx,vy);
            vy = vy + g;
            wait(0.001);
        }
        cout<<c.getY()<<endl; // to check y-coordinate
        vy = -a1;
        a1 = a2;
        a2 = a3;
        a3 = a1+a2;
    }
    wait(5);
}
