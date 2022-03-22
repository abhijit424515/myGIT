#include<simplecpp>
main_program{
    unsigned int x = 17; // Line L1
    unsigned int count = 0;
    while(true) {
        if(x == 4) break;
        if(x%2 == 0) { x /= 2; }
        else { x = 3*x+1; count++; }
    }
    cout << count;
}
