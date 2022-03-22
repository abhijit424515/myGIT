[[C++ INDEX]]

---
# C++ VARIABLES
## WHAT ARE THE VARIABLE TYPES ?

| DATA-type category      | DATA-types                     |
| ----------------------- | ------------------------------ |
| Built-in DATA types     | int, float, char, double, bool |
| User-defined DATA types | struct, union, enum            |
| Derived DATA types      | array, function, pointer       |

## WHAT IS THE SYNTAX TO DEFINE VARIABLES ?

**[DATA-type variable_name = value_of_variable]**

EX. float alpha = 3.6890;
EX. char beta = 'g';

## RULES TO DEFINE VARIABLES =>

- All variable names must begin with a letter of the alphabet, or an underscore (_), and can range from 1 to 255 character.
- OFC variable names are case-sensitive.
- Mind you that no spaces or special characters are allowed in variable names.
- C++ keywords cannot be used as variable names, so you better look them up at https://en.cppreference.com/w/cpp/keyword .
- The range of the DATA types can be found at https://en.cppreference.com/w/cpp/language/types .

![[tut04.cpp]]

## SCOPE OF A VARIABLE =>

- A local variable (one that was defined inside a function) has local scope (that variable is only usable inside the function).
- A global variable (one that was defied outside any function) has global scope (that variable is usable anywhere in the program).
- Local variables can't function even across sub functions
- Also, a local change in a global variable is local too.

==We can assign different values to same variable, and the LATEST LOCAL variable will be used==
==Also, the local change in such a variable has local scope==