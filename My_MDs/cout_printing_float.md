backlink : [[additional_reading_material]]

---

## Printing floating point numbers using cout

Consider the following statement
```
cout << 12.34567;        // 12.3457
```
The above line prints 12.3457.

To understand this, let's understand how cout interprets the floating point number. The behaviour of cout depends on two settings: format flag and precision. The behaviour of precision setting in turn depends on the format flag.
When the format flag is set to floatfield, the precision setting specifies the maximum of meaningful digits to display in total including both those before and after the decimal point.
When the format flag is set to fixed, the precision setting specifies the number of digits to display after the decimal point.
By default the format flag is set to floatfield and the precision is set to 6. So it displays a maximum of 6 significant digits.

To print 7 meaningful digits, we can use the following
```
cout.precision(7);        // sets precision to 7
cout << 12.34567;        // 12.34567
```
The above line prints 12.34567.

If we set the format flag to fixed and the precision to 2; this results in printing 2 decimal digits after the decimal point.
```
cout << fixed;                // sets format flag to fixed
cout.precision(2);        // sets precision to 2
cout << 12.35;                // 12.35
```
The above line prints 12.35.

You can understand the behaviour of using ```cout << fixed;``` and ```cout.precision(2); ```from the following program.
```
#include <simplecpp>
main_program{
 cout.precision(2);
 cout << fixed;
 cout << 12 << '\n';         // 12
 cout << 12.3 << '\n';       // 12.30
 cout << 12.34 << '\n';      // 12.34
 cout << 12.344 << '\n';     // 12.34
 cout << 12.345 << '\n';     // 12.35
 cout << 12.346 << '\n';     // 12.35
 cout << 12.34567 << '\n';   // 12.35
}
```
Note that the precision discussed here is the display precision that cout uses.

This is different from the precision that a float or double can store or represent. 
That solely depends on the size of those datatypes. 
If the value you are trying to store overflows (i.e., has more digits after the decimal point than)  the maximum precision allowed by a datatype, then the floating point number will get truncated at that precision.