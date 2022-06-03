#include<iostream>
using namespace std;
int func(int& a, int b) {
a = a + b;
b = a;
return b;
}
int main () {
int a[5] = {1, 2, 3, 4, 5};
int *b;
b = a;                    // Answers:
cout << *b << endl; // (i) _________________________
a[1] = *(&a[0]);
cout << a[1] << endl; // (ii) _________________________
b = b + 2;
cout << *b << endl; // (iii) _________________________
*b = *a + 2;
cout << *b << endl; //  (iv) _________________________
int c = 5, d = 8;
d = func(c, d) - d;
c = c - d;
cout << c << endl; // (v) _________________________
cout << d << endl;//  (vi) _________________________
char e[]= "END-SEM-EXAM-CS101-2019";
char *f = e;
cout << f + (f[1] - f[0] + 4)<<endl;/// (vii) ________________________________
cout << &e[f - &e[1] + 9]<<endl; ///////(viii) ________________________________

// char p = 7;
// for(int i=0; i<20; i++){
//     cout<<p;
// }


return 1;
}