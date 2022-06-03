#include <simplecpp>
int coin_piles(int a, int b){
    if ((a>2*b) || (b>2*a)){return 0;}
    if((a+b)%3!=0){return 0;}
    else{return 1;}
}
