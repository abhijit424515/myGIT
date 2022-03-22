[[My CS Cheat Sheet]]

# SIMPLECPP

[Simplecpp Webpage](https://www.cse.iitb.ac.in/~ranade/simplecpp/)

```cpp
#include<simplecpp> // Include this header file
main_program {
    // this is a comment
    // this is our opening function
    
    initCanvas("title", 800, 800); // this is to create a canvas (without turtle) of size 800x800
    // OR turtleSim("title", 800, 800); // this is to create a canvas (with turtle) of size 800x800
    Turtle t1,t2,t3,t4; // create 4 turtles named t1, t2, t3, t4
    
    /* BTW, this is a multiline comment*/

}
```

## registered commands
##### turtle commands =>
```cpp
forward(x); // move the turtle forward x pixels, where x is a real number
t1.forward(x); // move the turtle named t1 forward x pixels

left(x); // turn the turtle left by x degress, where x is a real number
t1.left(x); // turn the turtle named t1 left by x degress
right(x); // turn the turtle right by x degress, where x is a real number
t1.right(x); // turn the turtle named t1 right by x degress

penUp(); // lift the turtle
t1.penUp(); // lift the turtle named t1
penDown(); // lower the turtle
t1.penDown(); // lower the turtle named t1
```
- Pens of non-turtle shapes are UP by default

---
##### shape commands
```cpp
// BASIC SYNTAX 
// shape-type name(arguments); // shape-type = Circle, Rectnagle, Line, Text

// name.forward(100); // move the object named 'name' forward by 100 pixels

Circle c1(100,100,10), c2(100,100,20); // first 2 numbers are (x,y) coordinates of centre, and 3rd is the radius
Rectangle r1(100,100,30,40); // first 2 numbers are (x,y) coordinates of centre, while 3rd and 4th are width and height
Line l1(20,30,40,50); // create a line from (20,30) to (40,50)
Text t1(100,100,"C++"); // first 2 numbers are (x,y) coordinates of the centre, while 3rd is the string to be printed

// commands textWidth(t) and textHeight(t) evaluate to the width and height of the text t in pixels
```

```cpp
// let 's' be a shape created earlier

s.moveTo(x,y); // move object s to (x,y)
s.move(dx,dy); // move object s by (dx,dy)
s.scale(factor); // scale object s by factor
s.rotate(angle); // rotate object s by angle(radians)
// rotate and scale cannot happen with text

s.penDown(); // use centre of shape as a drawing pen/turtle
s.penUp(); // lift the shape up

s.setColor("red"); // set border-color of object s to "red"
// OR s.setColor(COLOR(255,0,0)); // using RGB code for the color

// if s is a rectangle/circle
s.setFill(true); // set fill color of object s same as border color

s.getX(); // returns the x-coordinate of the object s
s.getY(); // returns the y-coordinate of the object s
s.getOrientation(); // returns the angle through which the object s has been rotated
s.getScale(); // returns the scale-factor of the object s
s.imprint(); // permanently imprint a duplicate of object s

```
---

##### regular commands
```cpp
repeat(n) {/*code*/}; // repeats some code n times

cout<<x<<endl; // print the value of x, then break line, in terminal
cin>>x>>y; // input the value of x, put a space, then input the value of y, in terminal

wait(5); // wait for 5 seconds

getClick(); // pause the program till the user clicks, and return 65536x + y

```

---

##### math operations

```cpp
sqrt(x); // square root of value of x as double
pow(x,y); // x raise to power y, as double
exp(x); // e raise to power x, as double
log(x); // logarithm of x to the base e, as double
log10(x); // logarithm of x to the base 10, as double

sin(x); // find sine of x, x being in radians
cos(x); // find sine of x, x being in radians
tan(x); // find sine of x, x being in radians

sine(x); // find sine of x, x being in degrees
cosine(x); // find sine of x, x being in radians
tangent(x); // find sine of x, x being in radians

asin(x); // returns arc-sin, in radians
acos(x); // returns arc-cos, in radians
atan(x); // returns arc-tan, in radians
atan2(y,x); // returns arc-tan of (y/x) from (-pi,+pi]
```

##### conditional execution
```cpp
if (x) {/*code if x is true, then go to HERE*/}
else if(y) {/*code if x is false, and y is true, then go to HERE*/}
else if(z) {/*code if x and y both are false, and z is true, then go to HERE*/}
else {/*code if x,y,z are all false, then go to HERE*/}

// HERE
// basically, it's a ladder-work
```

```cpp
while(/*condition*/) {
    // code to run in loops as long as condition is true
}
```

```cpp
for(initialization; condition; update) { // execute initialization once
    // execute this code if condition is true, then execute update
    // recheck condition, and repeat
    // NOTE : new variables defined in initialization have their scope restricted to the loop
    //        Also, clashing variables will lead to the localized loop variables being used
    // break(); and continue(); functions can be used here
}
```
---
## Methods
```cpp
// HOW TO DRAW A CIRCLE
repeat(x) {
	forward(360.0/x); right(360.0/x);
	// Create a polygon of x sides. If x is large, we get a right-hand circle
}

// REPLACE FOR LOOP WITH REPEAT
int i = 1;
repeat(100){
	cout<<i;
	i++;
}

// REPLACE REPEAT WITH WHILE LOOP
int i; cin>>i; int j=i;
while(i>0) {
	cout<<(j-i+1)<<endl;
	i--;
}
```

## Examples
[Euclid's_algorithm_for_GCD.cpp](R:/Projects/IIT-B%20COURSES/CS%20101/methods%20and%20examples/Euclid's_algorithm_for_GCD.cpp)
[maclaurin_series_for_e.cpp](R:/Projects/IIT-B%20COURSES/CS%20101/methods%20and%20examples/maclaurin_series_for_e.cpp)
[plate_border_design.cpp]("R:\Projects\IIT-B%20COURSES\CS%20101\slides\1.%20Course%20Logistics%20and%20%Overview\practice-1\plate_border_design.cpp)
[[hilbert v1.cpp]]
[projectile_motion.cpp](R:/Projects/IIT-B%20COURSES/CS%20101/methods%20and%20examples/projectile_motion.cpp)
[tax_calc_program.cpp](R:/Projects/IIT-B%20COURSES/CS%20101/methods%20and%20examples/tax_calc_program.cpp)
[n-point_star.cpp](R:\Projects\IIT-B%20COURSES\CS%20101\slides\1.%20Course%20Logistics%20and%20Overview\practice-1\n-point_star.cpp)
### pending stuff
![](https://i.imgur.com/oSPHfAs.png)

![](https://i.imgur.com/2ROYuuN.png)

![](https://i.imgur.com/7HZkEtG.png)

---

![](https://i.imgur.com/1PorXdZ.png)

