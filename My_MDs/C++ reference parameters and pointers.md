Backlink : [[C++ INDEX]]

---
# C++ Reference Parameters 
<span class="yellow">& is the referencing operator</span>
&m and &n are called **reference parameters**, and they denote the addresses of the respective variables.

If a certain parameter is a reference parameter, then the corresponding argument is said to be **passed by reference**

```
#include<simplecpp>
main_program{
    int x = 10;

    // ref is a reference to x.
    int& ref = x; // or we can use int &ref = x; // WE CAN'T USE int& ref; ref = x;

    // Value of x is now changed to 20
    ref = 20;
    cout << "x = " << x << endl ;

    // Value of x is now changed to 30
    x = 30;
    cout << "ref = " << ref << endl ;

    return 0;
}

```

example -> **exchange program** format-1 (RIGHT)
```
#include<simplecpp>
void exchange(int &m, int &n){ // here, &m and &n are used to reference m and n to a and b respectively (RIGHT)
    int temp = m;
    m=n; n=temp;
    return;
}
main_program{
    int a=1,b=2;
    cout<<a<<" "<<b<<endl;
    exchange(a,b);
    cout<<a<<" "<<b<<endl;
}
```

example -> **exchange program** format-2 (WRONG)
```
#include<simplecpp>
void exchange(int m, int n){
    int temp = m;
    m=n; n=temp;
    return;
}
main_program{
    int a=1,b=2;
    cout<<a<<" "<<b<<endl;
    exchange(&a,&b); // here, &a and &b will mean addresses of a and b (WRONG)
    cout<<a<<" "<<b<<endl;
}

```

---
# C++ Pointers
A pointer is a variable that can store addresses of other variables.
Address of a variable say alpha is &alpha

Customarily, addresses get printed in a sequence of hexadecimal digits prefixed by '0x'

<span class="yellow">& is the referencing operator</span>
<span class="red">WARNING : & is used for both reference variables and pointers, so use PROPERLY</span>
<span class="yellow">* is the de-referencing operator</span>

example
```
#include<simplecpp>
main_program{
    int* v; // declares the data-type whose address is to be stored in v as int
            // we can also use int *v; // preferrable if need to define multiple int/int* types in one line 
    int p; 
    v = &p;
    cout<<p<<" "<<*v<<endl; // both print p
    cout<<v<<" "<<&p<<endl; // both print address of p
}
```

---
important example -> **Convert Cartesian coordinates to Polar** (method 1 : using pointers)
```
#include<simplecpp>
void CtoP(double x, double y, double* p_r, double* p_theta){ // OR we can use double *p_r
    *p_r = sqrt(x*x + y*y);
    *p_theta = atan2(y,x); // output in the range(-pi,pi]
    return;
}
main_program {
    double r,theta;
    CtoP(1,1,&r,&theta);
    cout<<r<<" "<<theta<<endl;
}
```

important example -> **Convert Cartesian coordinates to Polar** (method 2 : using reference operator)
```
#include<simplecpp>
void CtoP(double x, double y, double &radius, double &angle){
    radius = sqrt(x*x + y*y);
    angle = atan2(y,x);
    return;
}
main_program{
    double r,theta;
    CtoP(1,1,r,theta);
    cout<<r<<" "<<theta<<endl;
}
```


## Remarks ==>
```
int *v,p; // v is pointer to store address of an int data-type, while p is a variable of int data-type  
```