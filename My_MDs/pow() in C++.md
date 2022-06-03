backlink : [[additional_reading_material]]

# The pow(..) function in C++
The pow(x, n) function in c++ is used to compute $x^n$ . It returns the result as a **double value**.

If we directly store the value returned by the pow(..) function to an int variable, the code does not work as expected on all compilers, even when the value is within integer range.

For example, consider pow(5, 2). When assigned to an int variable, it outputs 24 on some compilers and works fine for some other compilers. But pow(5, 2) without any assignment to an integer outputs 25. 

-   This is because 52 (i.e. 25) might be stored as 24.9999999 or 25.0000000001 because the return type is double. When assigned to int, 25.0000000001 becomes 25 but 24.9999999 will give output 24.

Specifically on Windows, the 32 bit compiler will not produce the same result as g++ in linux.

So if you are on Windows and facing an issue like this, then store the value returned by expression involving pow(..) to a double/float variable and then re-assign it to an integer, if needed.

## Extra (not in CS101 syllabus):

The more correct solution that will work across compilers is to forcibly round up by adding a small value to the result returned by pow(..) and then store it in an int variable.

This can be achieved by adding std::numeric_limits<double>::epsilon() to the result from pow(..).

Another way to do this may be to use round(pow(x,n)) instead of just pow(..) when storing the result of pow(..) in an int variable. round(x) returns the value of x rounded to the nearest integer (as a floating-point value), i.e., round(5.6) will return the floating-point number 6.0, and not the integer 6.