[[C++ INDEX]]

---
# C++ how to START and END the program
```cpp
#include<iostream>
int main() {
	std::cout<<"Hello World!"; // << is called the INSERTION OPERATOR, while >> is called the EXTRACTION OPERATOR
	return 0;
}
```
    
Here, ```#include``` is used to include the *standard header-file* named IOSTREAM (input-output-stream).

int stands for integer. An integer value will be returned at the end of this main program.
The return type of main function is *int* due to historical reasons. ```return 0;``` is used to return value 0 as the integer required at the end of main(). FOr main(), returning 0 will be interpreted as the successful completion and termination of the program

main is the ENTRY POINT of the whole program

Anything under double quotes is a string ("Hello World" in this case)

