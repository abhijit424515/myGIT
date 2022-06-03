Backlink : [[CS 101]]

---

# Variable Data Types

[IEEE_standard](https://www.geeksforgeeks.org/ieee-standard-754-floating-point-numbers/)

| data type    | no. of allocated bits | properties                                                                             | range                           | example                                |
| ------------ | --------------------- | -------------------------------------------------------------------------------------- | ------------------------------- | -------------------------------------- |
| int          | 32                    | 1st bit is for sign                                                                    | -2147483648 to +2147483648      | -25 = 10000000000000000000000000011001 |
| unsigned int | 32                    |                                                                                        | 0 to 4294967295                 |                                        |
| float        | 32                    | 1st bit is for sign, 23 for mantissa, 8 for signed exponent. so 7 significant digits   | ~ +-(3.4x10^-38 to 3.4x10^38)   |                                        |
| double       | 64                    | 1st bit is for sign, 52 for mantissa, 11 for signed exponent. so 16 significant digits | ~ +-(1.7x10^-308 to 1.7x10^308) |                                        |
| char         | 8                     | ASCII code of characters is used                                                       |                                 | char alpha = 97; // same as char alpha = "a";                                       |

![](https://i.imgur.com/sH567W4.png)
```
const int x = 4; // the value of integer x is 4, and is fixed
// similarly, for other data types

long int y; // will give 32 more bits to store the value of y
// similarly, for other data types
```

---
### pending stuff
![](https://i.imgur.com/nXXSny6.png)
