// 1st way
int main() {}
// by default, the function returns 0, which denotes successful execution of the program

// 2nd way
int main(void) {}
/*
There is no difference in C++. 
However in C, an empty argument list means that the function can take any arguments, while the same means no arguments in C++.
So we must use int main(void) in C.
*/

// 3rd way
int main(int argv, char* argc[]) {}
// this allows us to read command line arguments given to the program at runtime.
