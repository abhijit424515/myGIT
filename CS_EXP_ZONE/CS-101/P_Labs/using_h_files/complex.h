#include<iostream>
#include<cmath>
struct Complex{
    double real,imag; double my_pie=4*atan2(1,1);
    void print(){
        if(imag>=0){
            std::cout<<real<<" + "<<imag<<"i"<<std::endl;
        }
        else if(imag<0){
            std::cout<<real<<" - "<<-1*imag<<"i"<<std::endl;
        }
    }
    double modulus(){
        return pow(real*real+imag*imag,0.5);
    }
    double argument(){
        return atan2(imag,real);
    }
    double abs_angle_between(Complex c2){
        double angle=c2.argument()-atan2(imag,real);
        if(angle<0){
            angle = -1*angle;
        }
        if(angle>my_pie){
            angle = 2*my_pie - angle;
        }
        return angle;
    }
    Complex conjugate(){
        Complex conj;
        conj.real=real; conj.imag=-1*imag;
        return conj;
    }
    Complex add(Complex c2){
        Complex sum;
        sum.real=real+c2.real; sum.imag=imag+c2.imag;
        return sum;
    }
    Complex multiply(Complex c2){
        Complex mult;
        mult.real=real*c2.real-imag*c2.imag; 
        mult.imag=real*c2.imag+imag*c2.real; 
        return mult;
    }
    
};