// Below is C++ program
#include <iostream>
#include <thread>
#include <chrono>
using namespace std;
 
int main()
{
    for (int i = 1; i <= 5; ++i)
    {
        cout << i << " ";
        this_thread::sleep_for(chrono::seconds(1));
    }
    cout << endl;
    return 0;
}

// This program will wait for 5 secs, and then print "1 2 3 4 5 " at once.
// Instead, if we had used cout << i << " " << flush; then each number will be displayed one-by-one at 1 sec intervals 
// working properly on linux, but some issue in windows due to which each cout is flushed automatically

/*
Some important points ->
1. cin automatically flushes cout
2. online compilers show output only when program terminates, so use an offline compiler instead

*/