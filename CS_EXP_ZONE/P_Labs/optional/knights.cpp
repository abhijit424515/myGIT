#include <simplecpp>
int knights(int k){
    int attack=0; int x=1,y=1;
    for(;x<=k; x++){
        for(;y<=k; y++){
            if((x>=3)&&(y>=2)){attack++;}
            if((x>=2)&&(y>=3)){attack++;}
            if((x>=3)&&(y<=(k-1))){attack++;}
            if((x>=2)&&(y<=(k-2))){attack++;}
            if((x<=(k-1))&&(y<=(k-2))){attack++;}
            if((x<=(k-2))&&(y<=(k-1))){attack++;}
            if((x<=(k-2))&&(y>=2)){attack++;}
            if((x<=(k-1))&&(y>=3)){attack++;}
        }
        y=1;
    }
    attack /= 2;
    int total = k*k*(k-1)*(k+1)/2;
    return (total-attack);
}
