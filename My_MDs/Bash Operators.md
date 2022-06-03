[[Tips and Tricks for Linux File Commands]]

---
# Bash OPERATORS
## 1. Arithmetic Operators =>
```
Addition (+):               Binary operation used to add two operands.
Subtraction (-):            Binary operation used to subtract two operands.
Multiplication (*):         Binary operation used to multiply two operands.
Division (/):               Binary operation used to divide two operands.
Modulus (%):                Binary operation used to find remainder of two operands.
Increment Operator (++):    Unary operator used to increase the value of operand by one.
Decrement Operator (- -):   Unary operator used to decrease the value of a operand by one
```

## 2. Relation Operators =>
```
‘==’ Operator:      Double equal to operator compares the two operands. Its returns true is they are equal otherwise returns false.
‘!=’ Operator:      Not Equal to operator return true if the two operands are not equal otherwise it returns false.
‘<‘ Operator:       Less than operator returns true if first operand is less than second operand otherwise returns false.
‘<=’ Operator:      Less than or equal to operator returns true if first operand is less than or equal to second operand otherwise returns false
‘>’ Operator:       Greater than operator return true if the first operand is greater than the second operand otherwise return false.
‘>=’ Operator:      Greater than or equal to operator returns true if first operand is greater than or equal to second operand otherwise returns false
```

## 3. Logical Operators =>
```
Logical AND (&&):       This is a binary operator, which returns true if both the operands are true otherwise returns false.
Logical OR (||):        This is a binary operator, which returns true is either of the operand is true or both the operands are true and return false if none of then is false.
Not Equal to (!):       This is a unary operator which returns true if the operand is false and returns false if the operand is true.
```

## 4. Bitwise Operators => 
```
Bitwise And (&):        Bitwise & operator performs binary AND operation bit by bit on the operands.
Bitwise OR (|):         Bitwise | operator performs binary OR operation bit by bit on the operands.
Bitwise XOR (^):        Bitwise ^ operator performs binary XOR operation bit by bit on the operands.
Bitwise complement (~): Bitwise ~ operator performs binary NOT operation bit by bit on the operand.
Left Shift (<<):        This operator shifts the bits of the left operand to left by number of times specified by right operand.
Right Shift (>>):       This operator shifts the bits of the left operand to right by number of times specified by right operand.
```

## File Test Operator => 
```
-b operator:        This operator check whether a file is a block special file or not. It returns true if the file is a block special file otherwise false.
-c operator:        This operator checks whether a file is a character special file or not. It returns true if it is a character special file otherwise false.
-d operator:        This operator checks if the given directory exists or not. If it exists then operators returns true otherwise false.
-e operator:        This operator checks whether the given file exists or not. If it exits this operator returns true otherwise false.
-r operator:        This operator checks whether the given file has read access or not. If it has read access then it returns true otherwise false.
-w operator:        This operator check whether the given file has write access or not. If it has write then it returns true otherwise false.
-x operator:        This operator check whether the given file has execute access or not. If it has execute access then it returns true otherwise false.
-s operator:        This operator checks the size of the given file. If the size of given file is greater than 0 then it returns true otherwise it is false.
```