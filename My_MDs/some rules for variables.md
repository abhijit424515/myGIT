Backlink : [[CS 101]]

---

# some rules for variables
### rules to define identifiers (variable names)
- sequence of 1 or more letters/digits/underscore
- should not begin with a digit
- ==CASE-SENSITIVE==
- spaces not allowed inside variable names
- some special names are reserved in C++, and so cannot be used as identifiers

### using variables
```
s = alpha + beta*lambda; 
// first, all the 4 variables used above must have been defined earlier
// second, all except 's' must have been assigned a value earlier

int x=4, y=3; // FIRST x is created, THEN y
int z = x/y; // since z is integer, z = floor(x/y)

float f = 123456789; // stored as 1234567e9
cout<<f; // 123456700 will be printed

```



[operator-precedence in C++](https://en.cppreference.com/w/cpp/language/operator_precedence)