/*
In C++, functions cannot be called before they are declared.
However in the same scenario with C, the compiler assumes the return type of the called function to be int, and so if the function declared after calling it is not an int tyoe return function, compilation will throw an error
*/

/*
What about parameters? 
The compiler assumes nothing about parameters. Therefore, the compiler will not be able to perform compile-time checking of argument types and arity when the function is applied to some arguments. 
This can cause problems. 
For example, the following program compiled fine in GCC and produced garbage value as output. 
*/



#include <stdio.h>
#include <iostream>
int main(void)
{
    // Note that fun() is not declared
    std::cout << fun();
    return 0;
}
 
int fun()
{
   return 5;
}

// it should have worked 😅
