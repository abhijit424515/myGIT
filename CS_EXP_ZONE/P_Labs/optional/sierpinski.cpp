#include <simplecpp>
void sierpinski(double s, int t){
    if(t==1){
        repeat(3){forward(s); left(120);}
    }
    else{
        sierpinski(s/2, t-1); forward(s/2);
        sierpinski(s/2, t-1); left(120); forward(s/2); right(120);
        sierpinski(s/2, t-1); right(120); forward(s/2); left(120);
    }
    return;
}
