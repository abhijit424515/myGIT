#include<iostream>
int min_tiles(int w, int h){
    if (w*h==0){return 0;}
    // we need w>=h
    if (w<h){
        int temp=w; w=h; h=temp;
    }
    if(h==1){return w;}

    int copy_of_w=w, copy_of_h=h;
    int w1=1, h1=1;

    while(copy_of_w>1){
        copy_of_w/=2;
        w1*=2;
    }
    while(copy_of_h>1){
        copy_of_h/=2;
        h1*=2;
    }
    
    return (w1/h1) + min_tiles(w-w1,h-h1) + min_tiles(w-w1,h1) + min_tiles(w1,h-h1);
}
int main()
{
    int w, h;
    std::cin >> w >> h;
    std::cout << min_tiles(w, h) << std::endl;
    return 0;
}