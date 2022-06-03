#include<simplecpp>
int armstrong(int n)
{
    int coun=0, i=0;
    while(coun<n){
        i++;
        int num1 = i, numdig=0;
        int left=i;
        while(num1>0){
            numdig++;
            num1 /= 10;
        }
        num1 = i;
        while(num1>0){
            int digit = num1%10; double sub; // use double sub instead of int sub;
            if(digit!=0){sub=pow(digit,numdig);}
            else{sub=0;}
            left -= sub;
            num1 /= 10;
        }
        if(left==0){
            coun++;
        }
    }
    return i;
}
