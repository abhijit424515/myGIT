#include<simplecpp>
using namespace std;
struct point{
    double x,y;
    point(double x=0,double y=0){
        this->x=x; 
        this->y=y; 
    }
};
void draw_circle_with_endpoints_as_diameters(const point &one, const point &two){
    double x = (one.x + two.x)/2.0;
    double y = (one.y + two.y)/2.0;
    double r = (sqrt((one.x-two.x)*(one.x-two.x)+(one.y-two.y)*(one.y-two.y)))/2.0;
    Circle c(x,y,r);
};