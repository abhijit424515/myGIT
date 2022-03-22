#include<simplecpp>
main_program {
    double salary,HRA,DA,gs;
    cin>>salary;

    if(salary<=10000) {
        HRA = 0.20*salary;
        DA = 0.80*salary;
    }
    else if((salary>10000) && (salary<=20000)) {
        HRA = 0.25*salary;
        DA = 0.90*salary;
    }
    else if(salary>20000) {
        HRA = 0.30*salary;
        DA = 0.95*salary;
    }

    gs = salary + HRA + DA;
    cout<<gs;
}