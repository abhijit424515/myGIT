# Vector_fields
## General Terms
Let D be a subset of $\mathbb{R}^n$
<span class=blue>Def</span> : A scalar field on D is a map $f:\rightarrow\mathbb{R}$
<span class=blue>Def</span> : A vector field on D is a map $\mathbf{F}:\rightarrow\mathbb{R^n}$, where $n\geq2$ 

---
### The Del operator, Gradient vector fields, and Conservative vector fields
The del operator is a vector operator, where each component is the partial derivative operator along the same directional variable.
In general, for 3D, we use 
$$
\nabla = \frac{\partial}{\partial x}\hat{i}+\frac{\partial}{\partial y}\hat{j}+\frac{\partial}{\partial z}\hat{k} 
$$
<span class=blue>Def</span> : Let $f:D\subset\mathbb{R^n}\rightarrow\mathbb{R}$, be a differentiable function, where n=2,3. The the vector field associated with $\nabla f$ is called the *gradient vector field*.

<span class=blue>Def</span> : A vector field $\mathbf{F}$ is called a *conservative vector field* if it is a gradient of some scalar function.

---
### Flow lines for vector fields
<span class=blue>Def</span> : 
Let $D\subset\mathbb{R^n}$ 
Let  $\mathbf{c}:[a,b]\rightarrow D$ be a map
$\mathbf{V}$ is a vector field defined from $D\rightarrow\mathbb{R^n}$ 

If the relation,
$$
\mathbf{c'}(t)=\mathbf{V}(\mathbf{c}(t)), \space \forall t\in [a,b]
$$
holds, then $\mathbf{c}$ is a flow line for the vector field $\mathbf{V}$

![|200](https://i.imgur.com/gSS8jKC.png)

---
### Paths and Curves
Let $\mathbf{c}:[a,b]\rightarrow\mathbb{R^n}$ be a map
1. If $\mathbf{c}$ is continuous, it is called a *path*, and it's image is called a *curve*
	1. If $\mathbf{c}$ is a path, and $\mathbf{c}(a)=\mathbf{c}(b)$, then it is a *closed path*
	2. If $\mathbf{c}$ is a path, and $\mathbf{c}(t_1)\neq\mathbf{c}(t_2)$ for any $t_1\neq t_2$ in $[a,b]$, then it is a *simple path*

- If a $C^1$ curve $\mathbf{c}$ is such that $\mathbf{c'}(t)\neq 0\space\space\forall t\in [a,b]$, the curve is called a regular or non-singular parametrised curve.

[[Diffeomorphism]]

---
## Line Integral of Vector Fields
Let $\mathbf{F}:D\subset\mathbb{R^n}\rightarrow\mathbb{R^n}$ be a vector field, where $n\in\mathbb{N}$
Let a curve $\mathbf{c}:[a,b]\rightarrow D$ be a $C^1$ diffeomorphism

If the vector field $\mathbf{F}$ is continuous, then we define the line integral of $\mathbf{F}$ over $\mathbf{c}$ as
$$
\int_c{\mathbf{F}.d\mathbf{s}}=\int_a^b{\mathbf{F}(\mathbf{c}(t)).\mathbf{c'}(t).dt}
$$
---
### Reparametrisation (preserving the orientation)
Let $\mathbf{c}:[a,b]\rightarrow\mathbb{R^n}$ be a *non-singular path*
Let h be a $C^1$ diffeomorphism from $[\alpha,\beta]$ to $[a,b]$ 
(Also, $h(\alpha)=a$ and $h(\beta)=b$ will used for preserving the orientation, while we would use $h(\alpha)=b$ and $h(\beta)=a$ for inverting the orientation.)
Let $t=h(u)$

So let $\gamma(u)=\mathbf{c}(h(u))$, and thus $\gamma$ is called a *reparametrisation* of $\mathbf{c}$.

The line integral now changed to
$$
\int_\gamma{\mathbf{F}.d\mathbf{s}}=\int_\alpha^\beta{\mathbf{F}(\gamma(u)).\gamma'(u).du}=\int_a^b{\mathbf{F}(\mathbf{c}(t).dt).\mathbf{c'}(t).dt}=\int_{\mathbf{c}}{\mathbf{F}.d\mathbf{s}}
$$
##### Arc Length Parametrisation
$$
l(\mathbf{c})=\int_a^b{||\mathbf{c'}(t)||.dt}
$$
#pending 
some arc-length para shit
+before quiz stuff

---
### Theorem
Let n=2,3, and let $D\subset\mathbb{R^n}$. Let $\mathbf{c}:[a,b]\rightarrow D\subset\mathbb{R^n}$ be a smooth path.
Also, let $f:D\rightarrow\mathbb{R}$ be a differentiable function, and $\nabla f$ be continuous on $\mathbf{c}$.
Then $$\int_{\mathbf{c}}{\nabla f.d\mathbf{s}}=f(\mathbf{c}(b))-f(\mathbf{c}(a))$$
#pending 

---
## Conservative Vector Fields
<span class=blue>Def</span> : A *loop* is a *path* with the same start and end points.

<span class=blue>Def </span>: A subset $D\subset\mathbb{R^n}$ is said to be *connected* if it cannot be written as a disjoint union of two non-empty subsets $D_1$ and $D_2$, with $D_1=D\cap U_1$, and $D_2=D\cap U_2$, where $U_1$ and $U_2$ are open subsets. 
- A connected set may be open or closed.

<span class=blue>Def </span>: A subset $D$, where $D\subset\mathbb{R^n}$, is said to be *path connected* if any 2 points in it can be joined by a *path* inside $D$.
- In general, path connected sets are connected. 
- However, connected sets are path connected only if they are open.

<span class=blue>Def </span>: A subset is called _simply connected_ if it is path-connected and any loop in can be contracted to a point.
- In $\mathbb{R^n}$, an open subset that is path connected if it is *connected*.
- In $\mathbb{R^n}$, we can show that an open subset is *simply connected* iff it is path connected.

Ex. 
1. $S=S_1\cap S_2$, where $S_1=\{(x,y)\mid x^2+y^2\leq 1\}$, and $S_2=\{(x,y)\mid x^2+(y-a)^2\leq 1\}$, is path connected for $a\in [-2,2]$, but not even connected for other values of $a$ in $\mathbb{R}$
2. 

<span class=orange>The </span>: Let $\mathbf{F}:D\rightarrow\mathbb{R^3}$ be a continuous vector field on a connected open region $D$ in $\mathbb{R^3}$. If the line integral of $\mathbf{F}$ is independent of path in $D$, then $\mathbf{F}$ is a conservative vector field in $D$. 

<span class=orange>The </span>: For n=3, if $$\mathbf{F}(x,y,z)=F_1(x,y,z)\mathbf{i}+F_2(x,y,z)\mathbf{j}+F_3(x,y,z)\mathbf{k}$$ is a conservative vector field, where $F_1, F_2, F_3$ have continuous first-order partial derivatives on an *open and simply connected* region $D$ in $\mathbb{R^3}$, then
$$
\frac{\partial F_1}{\partial y}=\frac{\partial F_2}{\partial x},\quad \frac{\partial F_2}{\partial z}=\frac{\partial F_3}{\partial y},\quad \frac{\partial F_3}{\partial x}=\frac{\partial F_1}{\partial z},\quad
$$
*NOTE* : The converse is partially true under some additional hypothesis on D.

#pending

---
##### How to find a potential function f such that $\mathbf{F}=\nabla f$ ?
Ex. Let $$\mathbf{F}(x,y)=(3+2xy)\mathbf{i}+(x^2-3y^2)\mathbf{j}$$, in $\mathbb{R^2}$ is conservative.

We observe that $\mathbb{R^2}$ is open and simply connected, and $\mathbf{F}:\mathbb{R^2}\rightarrow\mathbb{R^2}$ is continuously differentiable.
$$
\begin{aligned}
\frac{\partial f(x,y)}{\partial x}&=(3+2xy) \\
f(x,y)&=\int_0^x{(3+2xy).dx} \space + c(y)=3x+x^2y+c(y) \\\\
\frac{\partial f(x,y)}{\partial y}=x^2 + c'(y) &= x^2-3y^2 \\
\implies c(y)&=\lambda-y^3 \\\\\\
\implies f(x,y)&=3x+x^2y-y^3+\lambda
\end{aligned}
$$

---
### Jordan Curve theorem
<span class=orange>The </span>: if $\mathbf{c}:[a,b]\rightarrow\mathbb{R^2}$ is a simple closed path, then it divides the space into 2 parts, an interior(bounded) and an exterior(unbounded), such that any path from an interior point and an exterior point must intersect $\mathbf{c}([a,b])$. 

For orienting the boundary curve, we define $\implies$
<span class=blue>Def</span> : The positive orientation of a curve $C$ in $\mathbb{R^2}$ is given by the vector field $$\mathbf{k\times n}_{out}$$
, although the derivative of the parametrised curve may point in either direction, depending upon the parametrisation.

##### Example : What if there is a hole ?
Let $D=\{(x,y)\in\mathbb{R^2}\mid {a^2\leq x^2+y^2\leq b^2}\}$.
So the boundary $\partial D$ is $C_1 \cup C_2$, where $C_1=\{(x,y)\in\mathbb{R^2}\mid x^2+y^2=b^2\}$ and $C_2=\{(x,y)\in\mathbb{R^2}\mid x^2+y^2=a^2\}$.

The problem here is that $\mathbf{n}_{out}$ is radially outward for $C_1$, while it is radially inward for $C_2$.
Thus, for positive orientation, $C_1$ should be anti-clockwise, while $C_2$ should be clockwise.

---
### Green's Theorem
Let $D$ be a bounded region in $\mathbb{R^2}$.
Let $D$ have a positively oriented boundary $\partial D$, which consists of a *finite* number of *non-intersecting* *simple closed* piece-wise *continuously differentiable* curves.

Let $H$ be an open set in $\mathbb{R^2}$, such that $(D\cap\partial D)\subset H$.

Let $\mathbf{F}=F_1\mathbf{i}+F_2\mathbf{j}$,
where $F_1:H\rightarrow\mathbb{R}$ and $F_2:H\rightarrow\mathbb{R}$ be $C^1$ diffeomorphic functions.

Then
$$
\int_{\partial D}{\mathbf{F}.d\mathbf{r}}=\int_{\partial D}{F_1.dx+F_2.dy}=\int\int_D{\bigg(\frac{\partial F_2}{\partial x}-\frac{\partial F_1}{\partial y}\bigg).dx.dy}
$$

---
