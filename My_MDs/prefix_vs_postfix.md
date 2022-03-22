backlink : [[additional_reading_material]]

# prefix_vs_postfix increment/decrement operators

Incrementing (adding 1 to) and decrementing (subtracting 1 from) a variable are both so common that they have their own operators. There are two versions of each operator: prefix and postfix.

| Operator                         | Syntax       | Operation                                                |
| -------------------------------- | ------------ | -------------------------------------------------------- |
| prefix increment (or decrement)  | ++x (or --x) | increment (or decrement) x, then return x                |
| postfix increment (or decrement) | x++ (or x--) | copy x, then increment/decrement x, then return the copy | 

# Prefix

The prefix version is straightforward. First, the operand is incremented (or decremented), and then the expression evaluates to the value of the operand.

E.g.:

int x = 5;

int y = ++x;  // x is incremented to 6, x is evaluated to the value 6, and 6 is assigned to y

cout << x << ' ' << y;        // prints 6 6

# Postfix

The postfix version is slightly different. First, a copy of the operand is made, then the operand (not the copy) is incremented (or decremented), and finally, the copy (not the original) is evaluated.

E.g.:

int x = 5;

int y = x++;  // x is copied to a temporary variable, x is incremented to 6, the copy of x is assigned to y

cout << x << ' ' << y;  // prints 6 5

# Using in conditional statements

## Prefix
```
int x = 5;
if (++x > 5){
 cout << 'x is incremented before comparison';
}
else{
 cout << 'x is incremented after comparison';
}
```
The above code prints x is incremented before comparison.

## Postfix
```
int x = 5;
if (x++ > 5){
 cout << 'x is incremented before comparison';
}
else{
 cout << 'x is incremented after comparison';
}
```
The above code prints x is incremented after comparison.

# Using in Loops

You can use either of the versions in a loop.

## Prefix
```
for (int i = 0; i < 5; ++i){
 cout << i << ' ';
}
```
The above code prints 0 1 2 3 4.

## Postfix
```
for (int i = 0; i < 5; i++){
 cout << i << ' ';
}
```
The above code prints 0 1 2 3 4.