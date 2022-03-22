Backlink : [[C++ INDEX]]

---
# C++ Functions
The format of defining a function in C++ is :
```
return_type function_name( list of [parameter type and name] ) {
   body of the function
   return {}
}
```

- A function needs to be defined before it is called (acc. to the [[C++ ORDER OF COMPILATION]])
- A function declaration tells the compiler about a function's name, return type, and parameters.
- The parameters are copied from the activation frame of the parent function, and hence this is called **passing arguments by values**.
- A function may/may not return a value (void return_type)
- The variables defined in the activation frame of the function get destroyed after the execution of the function ends, and the memory reserved for it is now free
- Any program/function will refer to the variables **within** its activation frame



* For bool type function, you can also return 0 (false) and 1(true)
* If the preconditions are not satisfied, nothing is promised for the output for the program

---
**Activation frame** -> Area allocated in memory where the function will have it's variables