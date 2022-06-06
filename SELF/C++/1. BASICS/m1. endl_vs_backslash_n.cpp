#include<iostream>
using namespace std;
int main(){
    cout << endl; /* is equivalent to */ cout << "\n" << flush;
}

/*
Some key differences ->
1. endl is a manipulator (since it uses flush) while "\n" is a character
2. endl doesn't occupy memory, while "\n" does occupy 1 byte as a char
3. endl is a keyword, and thus it won't specify any meaning when stored in a string and thus cannot be stored in this way. On the other hand, "\n" can be stored in a string, and will convey it's meaning just as well
4. endl is NOT supported in C, while "\n" is supported in both C and C++
5. endl flushes the stream at each call, while "\n" has no flush property, and it won't flush the stream unless flush is called specifically

*/