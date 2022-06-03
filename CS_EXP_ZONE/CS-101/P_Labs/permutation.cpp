#include<simplecpp>
void permutation(int &a, int &b, int&c, int n){ // a,b,c are reference operators, which reference to the variables used in the main_program
    if(n==1){
        return; // a,b,c
    }
    else if(n==2){
        int temp1 = b; b=c; c=temp1; // a,c,b
        return;
    }
    else if(n==3){
        int temp1 = a; a=b; b=temp1; // b,a,c
        return;
    }
    else if(n==4){
        int temp1 = a; a=b; b=c; c=temp1; // b,c,a
        return;
    }
    else if(n==5){
        int temp1 = a; a=c; c=b; b=temp1; // c,a,b
        return;
    }
    else if(n==6){
        int temp1 = a; a=c; c=temp1; // c,b,a
        return;
    }
    else{
        return;
    }
}
