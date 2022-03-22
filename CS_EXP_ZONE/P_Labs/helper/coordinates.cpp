#include <simplecpp>
void print_coordinates(int n){
    int tX=0,tY=0, angle=0; char x;
    repeat(n){
        cin>>x;
        if(x=='L'){angle += 90; angle %= 360;}
        if(x=='F'){
            if(angle==0){tX += 1;}
            if(angle==90){tY += 1;}
            if(angle==180){tX -= 1;}
            if(angle==270){tY -= 1;}
        }
    }
    cout<<tX<<" "<<tY;
}
