#include<simplecpp>
main_program {
    initCanvas("Bull's eye", 800,800);
    
    Circle c5(250,250,180);
    c5.setColor(COLOR(0,0,0)); 
    c5.setFill(true); 
    
    Circle c4(250,250,140);
    c4.setColor(COLOR(255,255,0)); 
    c4.setFill(true); 
    
    Circle c3(250,250,100);
    c3.setColor(COLOR(0,0,0)); 
    c3.setFill(true); 
    
    Circle c2(250,250,60);
    c2.setColor(COLOR(255,255,0)); 
    c2.setFill(true); 
    
    Circle c1(250,250,20);
    c1.setColor(COLOR(255,0,0)); 
    c1.setFill(true); 
        
    wait(5);
}