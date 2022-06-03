#include<cmath>
#include<iostream>

struct Complex {
    double real;
    double imag;

    Complex conjugate(){
        Complex result;
        result.real = real;
        result.imag = -imag;
        return result;
    }

    double modulus(){
        return sqrt(real*real + imag*imag);
    }

    double argument(){
        return atan2(imag, real);
    }

    Complex add(Complex c){
        Complex result;
        result.real = real + c.real;
        result.imag = imag + c.imag;
        return result;
    }

    Complex multiply(Complex c){
        Complex result;
        result.real = real * c.real - imag * c.imag;
        result.imag = real * c.imag + imag * c.real;
        return result;
    }

    double abs_angle_between(Complex c){
        return fabs(c.argument() - argument());
    }

    void print(){
        char sign = '+';
        if (imag < 0) {
            sign = '-';
        }

        std::cout << real << " " << sign << " " << std::abs(imag) << "i" << std::endl;
    }
};