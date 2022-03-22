#include <simplecpp>
int perfect(int n)
{
    int x=1; int s = 0;
    while(x<n){
        if(n%x==0){
            s += x;
        }
        x++;
    }
    if(s==n){
        return 1;
    }
    else{
        return 0;
    }
}
