backlink : [[MA actual]]

---
# Differentiability of Multivariable Functions
### Differentiability of a real-valued function of several variables
<span class="blue">Def</span> : Let $E \subset \mathbb{R}^{n}$, and let $\mathbf{a} \in E$. A function $f: E \longrightarrow \mathbb{R}$ is said to be differentiable at $\mathbf{a}$ if there exists a vector $\mathbf{v} \in \mathbb{R}^{n}$ such that
$$
\lim _{h \rightarrow 0} \frac{f(\mathbf{a}+\mathbf{h})-f(\mathbf{a})-\mathbf{v} \cdot \mathbf{h}}{\|\mathbf{h}\|}=0
$$
It is denoted as $f^{\prime}(\mathbf{a})=\mathbf{v}$, or $D f(\mathbf{a})=\mathbf{v}$.

---
### The Directional and Partial Derivatives
<span class="blue">Def</span> : Let $E \subseteq \mathbb{R}^{n}$. We define the **directional derivative** of $f: E \rightarrow \mathbb{R}$ at a point $\mathbf{a}$ along a unit vector $\mathbf{u}$ to be the limit
$$
D_{\mathbf{u}} f(\mathbf{a})=\lim _{t \rightarrow 0} \frac{f(\mathbf{a}+t \mathbf{u})-f(\mathbf{a})}{t}, \text { if it exists. }
$$

<span class="blue">Def</span> : Let $\mathbf{e}_{i}$ be the vector with 1 in the $i$-th coordinate and 0 elsewhere. We define the **partial derivative** of $f: E \rightarrow \mathbb{R}$ at a point $\mathbf{a}$ with respect to the $i$-th coordinate $x_{i}$ as the directional derivative of $f$ along the unit vector $\mathbf{e}_{i}$, and denote it by $f_{x_{i}}(\mathbf{a})$ or $\frac{\partial f}{\partial x_{i}}(\mathbf{a})$,
$$
f_{x_{i}}(\mathbf{a})=\frac{\partial f}{\partial x_i}(\mathbf{a})=\lim _{t \rightarrow 0} \frac{f\left(\mathbf{a}+t \mathbf{e}_{i}\right)-f(\mathbf{a})}{t} \text {, if it exists. }
$$

Note : Partial derivatives are a special case of directional derivatives.

---
### Gradient of a function
<span class="blue">Def</span> : The gradient of $f$ at $\mathbf{a}$ is defined to be the vector $\nabla f(\mathbf{a})=\left(f_{x_{i}}(\mathbf{a})\right)=\left(f_{x_{1}}(\mathbf{a}), \ldots, f_{x_{n}}(\mathbf{a})\right)$

<span class="orange">The</span> : $D_{u} f(\mathbf{a})=\nabla f(\mathbf{a}) \cdot \mathbf{u}$, if it exists.

---
<span class="orange">The</span> : If $D f(\mathbf{a})$, i.e., $f^{\prime}(\mathbf{a})$ exists, and if $\mathbf{u}$ is any unit vector, then the directional derivative along $\mathbf{u}$ exists and is given by $D_{\mathbf{u}} f(\mathbf{a})=D f(\mathbf{a}) \cdot \mathbf{u}$.

- So, if $f^{\prime}(\mathbf{a})$ exists then all the partial derivatives $f_{x_{1}}(\mathbf{a}), \ldots, f_{x_{n}}(\mathbf{a})$ (using the set of direction vectors $e_i$ for any set $x_i$)
    $$
    f^{\prime}(\mathbf{a})=\mathbf{v}=\left(v_{1}, \ldots, v_{n}\right)=\left(f_{x_{1}}(\mathbf{a}), \ldots, f_{x_{n}}(\mathbf{a})\right) .
    $$

==Caution!== Even if all the partial derivatives $\frac{\partial f}{\partial x_{j}}$ exist at a point $\mathbf{a}$, the function $f$ need not the differentiable at $\mathbf{a}$.

<span class="purple">Example -></span>
Consider the function
$$
f(x, y)= \begin{cases}\frac{y^{3}}{x^{2}+y^{2}}, & (x, y) \neq(0,0) \\ 0, & (x, y)=(0,0)\end{cases}
$$
Then $f$ is continuous at $(0,0)$, and $f_{x}(0,0)=0, f_{y}(0,0)=1$. If $f$ were differentiable at $(0,0)$, then the derivative at $(0,0)$ would be the vector $\mathbf{v}=(0,1)$. The dot product of $\mathbf{v}$ and the vector $(x, y)$ is $y$. Consider the function
$$
\phi(x, y)=\frac{f(x, y)-f(0,0)-y}{\sqrt{x^{2}+y^{2}}}=\frac{-x^{2} y}{\left(x^{2}+y^{2}\right)^{3 / 2}} .
$$
This does not have a limit at $(0,0)$, as $\phi(t, 2 t)=-2 / 5^{3 / 2}$, but $\phi(t, t)=-1 / 2^{3 / 2}$.

---
### Derivative in matrix form

Let $f: U \subseteq \mathbb{R}^{2} \rightarrow \mathbb{R}$ be differentiable at $\left[\begin{array}{l}a \\ b\end{array}\right] \in U$. Then there exists a $(1 \times 2)$-matrix $A$ such that
$$
\lim _{(h, k) \rightarrow(0,0)} \frac{\left|f(a+h, b+k)-f(a, b)-A\left[\begin{array}{l}
h \\
k
\end{array}\right]\right|}{\sqrt{h^{2}+k^{2}}}=0 .
$$
In particular, for $k=0$, we get
$$
\lim _{h \rightarrow 0} \frac{\left|f(a+h, b)-f(a, b)-A\left[\begin{array}{l}
h \\
0
\end{array}\right]\right|}{|h|}=0
$$

Hence
$$
\lim _{h \rightarrow 0} \frac{f(a+h, b)-f(a, b)}{h}=A\left[\begin{array}{l}
1 \\
0
\end{array}\right]
$$
Therefore, the first entry of the $(1 \times 2)$-matrix $A$ is $f_{x}(a, b)$.
Similarly, we can show that the second entry of $A$ is $f_{y}(a, b)$.
Thus, if $f: U \subseteq \mathbb{R}^{2} \rightarrow \mathbb{R}$ is differentiable at $\left[\begin{array}{l}a \\ b\end{array}\right] \in U$ then
$$
D f(a, b)=\left[f_{x}(a, b), f_{y}(a, b)\right]=\nabla f(a, b) .
$$
This can be easily extended to the general case.

If a function $f: U \subseteq \mathbb{R}^{n} \rightarrow \mathbb{R}^{m}, f\left(x_{1}, \ldots, x_{n}\right)=\left(f_{1}, \ldots, f_{m}\right)$, is differentiable at $\mathbf{a} \in U$ then the defivative $D f(\mathbf{a})$ is the $(m \times n)$-matrix
$$
\left(\begin{array}{cccc}
\frac{\partial f_{1}}{\partial x_{1}}(\mathbf{a}) & \frac{\partial f_{1}}{\partial x_{2}}(\mathbf{a}) & \cdots & \frac{\partial f_{1}}{\partial x_{n}}(\mathbf{a}) \\
\frac{\partial f_{2}}{\partial x_{1}}(\mathbf{a}) & \frac{\partial f_{2}}{\partial x_{2}}(\mathbf{a}) & \cdots & \frac{\partial f_{2}}{\partial x_{n}}(\mathbf{a}) \\
\vdots & \vdots & \ddots & \vdots \\
\frac{\partial f_{m}}{\partial x_{1}}(\mathbf{a}) & \frac{\partial f_{m}}{\partial x_{2}}(\mathbf{a}) & \cdots & \frac{\partial f_{m}}{\partial x_{n}}(\mathbf{a})
\end{array}\right)
$$

---
Let us see an example.
Consider $f: \mathbb{R} \rightarrow \mathbb{R}^{2}, f(x)=\left(x^{3}, x^{2}\right)$. If $f$ is differentiable at $a \in \mathbb{R}$, we must have that the $(2 \times 1)$-matrix $D f(a)$ is $\left[\begin{array}{c}3 a^{2} \\ 2 a\end{array}\right]$.

So, we now have a candidate for the derivative and we only have to check if it satisfies the definition, that is, we only need to check that
$$
\lim _{x \rightarrow a}\left(\frac{1}{|x-a|}\left\|\left[\begin{array}{l}
x^{3} \\
x^{2}
\end{array}\right]-\left[\begin{array}{l}
a^{3} \\
a^{2}
\end{array}\right]-\left[\begin{array}{c}
3 a^{2} \\
2 a
\end{array}\right](x-a)\right\|_{2}\right)=0 .
$$
Since this happens, we get that $f$ is differentiable at $a$.
To summarise, to determine whether a function is differentiable at $\mathbf{a}$, we compute the matrix $\left(\frac{\partial f_{i}}{\partial x_{j}}\right)$, and verify if this matrix satisfies the definition of differentiability.

---
### Differentiability implies continuity
<span class="orange">The</span> : If $f: U \subseteq \mathbb{R}^{n} \rightarrow \mathbb{R}^{m}$ is differentiable at a then it is continuous at $\mathbf{a}$.

---
### Differentiability theorems
Let $U \subseteq \mathbb{R}^{n}$ be open and let $f, g: U \rightarrow \mathbb{R}^{m}$ be differentiable at $\mathbf{a} \in U$, then
- for any constant $c$, the map $c f$ is differentiable at $\mathbf{a}$,
    $$
    D(c f)(\mathbf{a})=c D f(\mathbf{a})
    $$
- $f \pm g$ are differentiable at $\mathbf{a}$,
$$
D(f \pm g)(\mathbf{a})=D f(\mathbf{a}) \pm D g(\mathbf{a})
$$
- if ==$m=1$==, then $h(\mathbf{x})=f(\mathbf{x}) g(\mathbf{x})$ is differentiable at $\mathbf{a}$ and
    $$
    D h(\mathbf{a})=f(\mathbf{a}) D g(\mathbf{a})+g(\mathbf{a}) D f(\mathbf{a})
    $$

- if ==$m=1$== and $g$ is never zero on $U$, then $h(\mathbf{x})=f(\mathbf{x}) / g(\mathbf{x})$ is differentiable at a and
$$
D h(\mathbf{a})=\frac{g(\mathbf{a}) D f(\mathbf{a})-f(\mathbf{a}) D g(\mathbf{a})}{g(\mathbf{a})^{2}}
$$
- if $f(U) \subseteq V$ and $h: V \subseteq \mathbb{R}^{m} \rightarrow \mathbb{R}^{k}$ is such that $h$ is differentiable at $f(\mathbf{a})$ then $h \circ f$ is differentiable at $\mathbf{a}$ and
$$
D(h \circ f)(\mathbf{a})=D h(f(\mathbf{a})) D f(\mathbf{a})
$$
Thus, the chain rule in multi-variable case corresponds to product of matrices.

---
A special case of chain rule
Let $I$ be an open interval in $\mathbb{R}$ and let $x, y: I \rightarrow \mathbb{R}$ be differentiable functions, then the pair $(x(t), y(t))$ defines a function from $I$ to $\mathbb{R}^{2}$.
If, further, we have a differentiable function $f: \mathbb{R}^{2} \rightarrow \mathbb{R}$, we can study the derivative of the map $z(t):=f(x(t), y(t))$ by chain rule:
$$
\frac{d z}{d t}=\frac{\partial z}{\partial x} \frac{d x}{d t}+\frac{\partial z}{\partial y} \frac{d y}{d t} .
$$
For a function $w(t)=f(x(t), y(t), z(t))$, this formula is
$$
\frac{d w}{d t}=\frac{\partial w}{\partial x} \frac{d x}{d t}+\frac{\partial w}{\partial y} \frac{d y}{d t}+\frac{\partial w}{\partial z} \frac{d z}{d t} .
$$

---
### Continuously Differentiable functions
A function $f: U \subseteq \mathbb{R}^{n} \rightarrow \mathbb{R}^{m}$ is called continuously differentiable if $D f(\mathbf{a})$ exists for all $\mathbf{a} \in U$ and if $D f$ is a continuous map from $U \subseteq \mathbb{R}^{n}$ to $\mathbb{R}^{m n}$.
Theorem
A function $f: U \subseteq \mathbb{R}^{n} \rightarrow \mathbb{R}^{m}$ is continuously differentiable in some open set containing $\mathbf{a}$ if and only if all partial derivative of $f$ at a are continuous.
Note that existence of partial derivatives does not guarantee their continuity.

---
### Increment lemma in multivariable case and a sufficient condition for differerntiability
Theorem (Increment lemma)
Let $f: U \subseteq \mathbb{R}^{2} \rightarrow \mathbb{R}$ have partial derivatives $f_{x}, f_{y}$ at every point of $U$ and let $f_{x}, f_{y}$ be continuous at $(a, b) \in U$. Then there exist two functions $f_{1}, f_{2}$ such that
$f\left(a+h_{1}, b+h_{2}\right)-f(a, b)=f_{x}(a, b) h_{1}+f_{y}(a, b) h_{2}+h_{1} f_{1}(x, y)+h_{2} f_{2}(x, y)$, where both $f_{1}(x, y), f_{2}(x, y) \rightarrow 0$ as $\left\|\left(h_{1}, h_{2}\right)\right\| \rightarrow 0 .$

The next theorem presents a sufficient condition for differentiability of multivariable functions.

Theorem
If $f: \mathbb{R}^{2} \rightarrow \mathbb{R}$ is a function such that $f_{x}(a, b)$ and $f_{y}(a, b)$ exist on some $U$ containing $(a, b)$, and if one of them is continuous at $(a, b)$ then $f$ is differentiable at $(a, b)$.

### Higher order partial derivatives
Consider $f: U \subseteq \mathbb{R}^{2} \rightarrow \mathbb{R}, U$ being open and let $(a, b) \in U .$ If $f_{x}$ exists on $U$, we get a new function $f_{x}: U \rightarrow \mathbb{R}$, and we can ask if its partial derivatives exist.
These, if they exist, will be denoted by $\left(f_{x}\right)_{x}$ and $\left(f_{x}\right)_{y}$ or by $f_{x x}$ and $f_{x y}$ by $\frac{\partial^{2} f}{\partial x^{2}}$ and $\frac{\partial^{2} f}{\partial y \partial x}$. Therefore, $\frac{\partial^{2} f}{\partial x^{2}}=\frac{\partial}{\partial x}\left(\frac{\partial f}{\partial x}\right)$ and $\frac{\partial^{2} f}{\partial x \partial y}=\frac{\partial}{\partial x}\left(\frac{\partial f}{\partial y}\right)$.
Similarly, we have $\left(f_{y}\right)_{x}$ and $\left(f_{y}\right)_{y}$ or $f_{y x}$ and $f_{y y}$ or $\frac{\partial^{2} f}{\partial x \partial y}$ and $\frac{\partial^{2} f}{\partial y^{2}}$.
Do we always have $\left(f_{x}\right)_{y}=\left(f_{y}\right)_{x} ?$
Theorem (Mixed partials theorem)
Let $f: U \subseteq \mathbb{R}^{2} \rightarrow \mathbb{R}, U$ being an open set, be a function and $(a, b) \in U$. Assume that $f_{x}, f_{y}$ exist on $U$. If one of the the partial derivatives $f_{x y}, f_{y x}$ exists on $U$ and is continuous at $(a, b)$, then the other also exists at $(a, b)$ and $f_{x y}(a, b)=f_{y x}(a, b)$.

Example ->
The following example show that $f_{x y}$ and $f_{y x}$ may not be equal at a point $(a, b) .$ Consider $f(x, y)=\left\{\begin{array}{cc}x y \frac{x^{2}-y^{2}}{x^{2}+y^{2}} & (x, y) \neq(0,0) \\ 0 & (x, y)=(0,0)\end{array}\right.$
Verify that
$$
f_{x}(0, y)=-y, f_{y}(x, 0)=x
$$
and hence
$$
f_{x y}(0,0)=-1 \neq 1=f_{y x}(0,0)
$$

### Gradient
We recall that the gradient of a function $f: U \subseteq \mathbb{R}^{2} \rightarrow \mathbb{R}$, if it exists, is the matrix
$$
\nabla f(a, b)=\left(\frac{\partial f}{\partial x}(a, b), \frac{\partial f}{\partial y}(a, b)\right)
$$
In terms of the co-ordinate vectors, we write it as
$$
\nabla f(a, b)=\frac{\partial f}{\partial x}(a, b) \mathbf{i}+\frac{\partial f}{\partial y}(a, b) \mathbf{j}
$$
If our function is defined on an open subset of $\mathbb{R}^{3}$, then the gradient is
$$
\begin{gathered}
\nabla f(a, b, c)=\left(\frac{\partial f}{\partial x}(a, b, c), \frac{\partial f}{\partial y}(a, b, c), \frac{\partial f}{\partial z}(a, b, c)\right) \\
\nabla f(a, b, c)=\frac{\partial f}{\partial x}(a, b, c) \mathbf{i}+\frac{\partial f}{\partial y}(a, b, c) \mathbf{j}+\frac{\partial f}{\partial z}(a, b, c) \mathbf{k} .
\end{gathered}
$$

---
### Local extrema
The definition of local extrema in the higher dimensional case is similar to that of one variable case.
Let $f: U \subseteq \mathbb{R}^{2} \rightarrow \mathbb{R}$ be a function and let $(a, b) \in U$.
(1) $(a, b)$ is a local minimum of $f$ if there is some $r>0$ such that $f(a, b) \leq f(x, y)$ for all $(x, y)$ in the $r$-ball around $(a, b)$.
(2) $(a, b)$ is a local maximum of $f$ if there is some $r>0$ such that $f(a, b) \geq f(x, y)$ for all $(x, y)$ in the $r$-ball around $(a, b)$.
Theorem (Necessary condition for local extrema)
If $f$ has a local extrema at $(a, b)$ and if $\nabla f(a, b)$ exists then $\nabla f(a, b)=(0,0)$.
More generally, if $(a, b)$ is a local extrema and $D_{\mathbf{u}} f(a, b)$ exists then $D_{u} f(a, b)=0$

Examples ->
1. The function $f(x, y)=x^{2}+y^{2}$ has a local minimum at $(0,0), g(x, y)=-f(x, y)$ has a local maximum at $(0,0)$. The converse of the above theorem may not be true.
2. The function $h(x, y)=x y$. Note that $\nabla f(0,0)$ exists and is equal to $(0,0)$ but $f$ has neither local minimum nor local maximum at $(0,0)$.

---
### Saddle point
Definition. Let $f: U \subseteq \mathbb{R}^{2} \rightarrow \mathbb{R}$ be a function and $(a, b) \in U$. If
(1) $\nabla f(a, b)$ exists and is equal to $(0,0)$, and
(2) $(a, b)$ is not a local extremum for $f$,
then the point $(a, b)$ is called a saddle point of $f$.

![](https://i.imgur.com/emrfYIJ.png)


---
### Critical points
Definition
Let $E \subseteq \mathbb{R}^{2}$ and let $f: E \rightarrow \mathbb{R}$. A point $\left(x_{0}, y_{0}\right) \in E$ is called a critical
point of $f$ if $\left(x_{0}, y_{0}\right)$ is an interior point of $E$ such that either $\nabla f\left(x_{0}, y_{0}\right)$
does not exist or $\nabla f\left(x_{0}, y_{0}\right)$ exists and is equal to $(0,0)$.

Remark. A local extrema or a saddle point is necessarily a critical point
provided they are interior points.

Examples. 1 ). Consider $f(x, y)=x$ sin $y$. Classify all critical points. The
critical points are $(0, n \pi)$.
2). Consider the function $f(x, y)=x^{2}+y^{2}-2 x+6$. For this function,
the critical point is $(1,0)$.
3). What are the critical points of the function $f:(0,1) \times(0,1) \rightarrow \mathbb{R}$ by
$f(x, y)=1$ if $x, y \in \mathbb{Q}$ and $f(x, y)=0$ if $x, y \in \mathbb{R} \backslash \mathbb{Q}$ ?

---
### Second derivative test for maxima/minima
Theorem
Let $z=f(x, y)$ have continuous partial derivatives up to second order and suppose that $(a, b)$ is a critical point of $f$. Consider
$$
D=\operatorname{det}\left[\begin{array}{ll}
\frac{\partial^{2} f}{\partial x^{2}}(a, b) & \frac{\partial^{2} f}{\partial x \partial y}(a, b) \\
\frac{\partial^{2} f}{\partial y \partial x}(a, b) & \frac{\partial^{2} f}{\partial y^{2}}(a, b)
\end{array}\right]
$$
- If $D>0$ and $\frac{\partial^{2} f}{\partial x^{2}}(a, b)>0$ then $(a, b)$ is a local minimum,
- If $D>0$ and $\frac{\partial^{2} f}{\partial x^{2}}(a, b)<0$ then $(a, b)$ is a local maximum,
- If $D<0$ then $(a, b)$ is a saddle point.
If $D=0$, then the test does not provide any information.

---
### Note on Previous Examples
1). Consider $f(x, y)=x \sin y$. The critical points are $(0, n \pi)$. Here $D=-\cos ^{2} y<0$ and thus all critical points are saddle points.
2). Consider the function $f(x, y)=x^{2}+y^{2}-2 x+6$. Analyse the local maximum/minimum, saddle point of $f$. For this function, the critical point is $(1,0)$. Further, $D(1,0)=4>0$ and $\frac{\partial^{2} f}{\partial x^{2}}(1,0)>0$ so we get a local minimum.
3) What can you say about Example-3 above?

---
### Absolute/Global Extrema
Definition
Let $D \subseteq \mathbb{R}^{2}$ and let $f: D \rightarrow \mathbb{R}$ be a bounded function. Then
$$
M=\sup _{(x, y) \in D} f(x, y) \text { and } m=\inf _{(x, y) \in D} f(x, y)
$$
are respectively called the absolute maximum and absolute minimum of the function $f$. Absolute/Global extrema of a function is either absolute maximum or absolute minimum of the function.

Theorem
Let $D$ be a compact subset of $\mathbb{R}^{2}$ and let $f: D \rightarrow \mathbb{R}$ be a continuous function. Then $f(D)$ is compact and there are points $\left(a_{1}, b_{1}\right),\left(a_{2}, b_{2}\right) \in D$ such that
$$
f\left(a_{1}, b_{1}\right)=M=\sup _{(x, y) \in D} f(x, y), f\left(a_{2}, b_{2}\right)=m=\inf _{(x, y) \in D} f(x, y) \text {. }
$$

Theorem
Let $E$ be a compact subset of $\mathbb{R}^{2}$ and let $f: E \rightarrow \mathbb{R}$ be a continuous function. Then the absolute maximum and the absolute minimum of $f$ are attained either at a critical point of $f$ or at a boundary point of $E$.

Example ->
Let $E=[-2,2] \times[-2,2]$ and let $f: E \rightarrow \mathbb{R}$ be given by $f(x, y)=4 x y-2 x^{2}-y^{4}$. Clearly $E$ is a compact subset as it is closed and bounded. Thus the absolute extrema of $f$ exist and are attained by $f$.
Here $f_{x}(x, y)=4 y-4 x$ and $f_{y}(x, y)=4 x-4 y^{3}$. thus,
$$
\nabla f(x, y)=(0,0) \Rightarrow(x, y)=(0,0),(1,1) \text { or }(-1,-1) \text {. }
$$
Therefore, $(0,0),(1,1)$ and $(-1,-1)$ are critical points of $f$. Also, $(x, y) \in E$ is a boundary point of $E$ if and only if $x=\pm 2$ or $y=\pm 2$. The restriction of $f$ to its boundary components are the four functions from $[-2,2]$ to $\mathbb{R}$ given by $f(2, y), f(-2, y), f(x,-2), f(x, 2)$. Due to symmetry in $x$ and $y$, it suffices to consider only the first and last of them. So, let us determine the absolute maximum and absolute minimum of the functions $f(2, y)$ and $f(x, 2)$, where $x \in[-2,2]$ and $y \in[-2,2]$.

---
Example ->
Let $E=[-2,2] \times[-2,2]$ and let $f: E \rightarrow \mathbb{R}$ be given by $f(x, y)=4 x y-2 x^{2}-y^{4}$. Clearly $E$ is a compact subset as it is closed and bounded. Thus the absolute extrema of $f$ exist and are attained by $f$.
Here $f_{x}(x, y)=4 y-4 x$ and $f_{y}(x, y)=4 x-4 y^{3}$. thus,
$$
\nabla f(x, y)=(0,0) \Rightarrow(x, y)=(0,0),(1,1) \text { or }(-1,-1) \text {. }
$$
Therefore, $(0,0),(1,1)$ and $(-1,-1)$ are critical points of $f$. Also, $(x, y) \in E$ is a boundary point of $E$ if and only if $x=\pm 2$ or $y=\pm 2$. The restriction of $f$ to its boundary components are the four functions from $[-2,2]$ to $\mathbb{R}$ given by $f(2, y), f(-2, y), f(x,-2), f(x, 2)$. Due to symmetry in $x$ and $y$, it suffices to consider only the first and last of them. So, let us determine the absolute maximum and absolute minimum of the functions $f(2, y)$ and $f(x, 2)$, where $x \in[-2,2]$ and $y \in[-2,2]$.

---