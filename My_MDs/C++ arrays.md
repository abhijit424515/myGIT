# C++ arrays
Arrays are a collection of variables of same data-type
- The size of an array needs to be defined at the beginning, and **cannot be changed** later in the program
  However, if array is defined like this,
  ```cpp
  int cubes[]={1,2,3,4,5}
  ```
  then it's size is the number of elements initially given
- For an array of size N, the element indexes range from 0 to N-1
- Arrays need not have an elements in the beginning, but then it's size must be defined.


**Examples**
1. Polynomial multiplication
	1. In the loops for i,j indexes of 2 arrays x[], y[], add x[i].y[j] to (i+j) index of the product matrix
	2. For any coefficient $c_k$ of product polynomial, $c_k=\sum_{i=0}^k a_i.b_{k-i}$ 
2. Taxi dispatchment
	#pending 

---
In a computer, , the allocated memory blocks for arrays are consecutive. 
```cpp
int q[]={1,2,3,4}     // Here, each int occupies 1 word (= 4 bytes), and so the array occupies 16 consecutive bytes
```

In reality, an **array is a set of constant pointers**.

```cpp
#include<iostream>
using namespace std;
int main(){
 int q[4]={11,12,13,14}, r = 2;
 cout << q << endl << r << endl << &r << endl;
 cout << q[0] << endl << &q[0] << endl;
}
```

---
### More examples
#pending