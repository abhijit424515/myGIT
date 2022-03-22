#include<simplecpp>
main_program{
    double r; int n; cin>>r>>n; int line_point_gap=(n-1)/2; double main_angle = 360.0*line_point_gap; main_angle/=n;
    double length = 2*r*sine(main_angle/2);
    turtleSim();
    left(90.0-(main_angle/2));
    repeat(n){
        forward(length); right(main_angle);
    }
    wait(3);
}
