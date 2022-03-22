backlink : [[MA actual]]

---
<span class="blue">Def</span> : A function $f: \mathbb{R} \rightarrow \mathbb{R}$ which has the property that $f(x+y)=f(x)+f(y)$ and $f(\alpha x)=\alpha f(x)$ is called a linear function (or linear map). 
- All such functions are given by multiplication by a real number, that is, every linear function has the form $f(x)=\lambda x$, for some real number $\lambda$.

---
# Properties of derivative
## Other ways to define derivative
### Derivative as a linear map
We can also define the derivative of a function $f(x)$ at a point $x_0$ as linear function in the variable $h$.  
$$
f\left(x_{0}+h\right)=f\left(x_{0}\right)+f^{\prime}\left(x_{0}\right) h+o(h) h
$$
Here, $o(h)$ is the remainder function, and $o(h)$ tends to 0 as h approaches 0.

### Derivative in the form of Lipschitz continuity
If a function $f:(a, b) \rightarrow \mathbb{R}$ satisfies -> 
$$
|f(x+h)-f(x)| \leq C|h|^{\alpha}
$$
for some $\alpha$ (not necessarily greater than 1), where $C$ is a constant, then it is said to be Lipschitz continuous with exponent $\alpha$.

If f is Lipschitz continuous with exponent $\alpha>1$ for all $x, x+h \in(a, b)$, then $f$ is differentiable on $(a, b)$.

---
## Maxima and minima
### General Definition
<span class="blue">Def</span> : Let $f: X \rightarrow \mathbb{R}$ be a function and $x_{0}\in X$. Suppose there is an sub-interval $(c, d) \subset X$, such that $f\left(x_{0}\right) \geq f(x)$ (resp. $f\left(x_{0}\right) \leq f(x)) \space\forall x \in(c, d)$, then $f$ is said to have a local maximum / relative maximum (resp. local minimum / relative minimum) at $x_{0}$.

<span class="blue">Def</span> : A function $f: X \rightarrow \mathbb{R}$, where $X \subset \mathbb{R}$, is said to attain a global maximum (resp. global minimum) at a point $x_{0} \in X$ if $f(x) \leq f\left(x_{0}\right)\left(\right.$ resp. $\left.f(x) \geq f\left(x_{0}\right)\right)\space\forall x \in X$. 

### Using derivative
<span class="orange">The</span> : If $f:X→\mathbb{R}$ is differentiable, and has a local minimum/maximum at a point $x_0∈X$, then $f^\prime(x_0) = 0$.

- ==However, converse is not true.==
    For example, for $f(x)=x^{3}, f^{\prime}(0)=0$, but $x=0$ is neither a minimum nor a maximum in any $(-\epsilon, \epsilon)$.

---
## Application based theorems
### Rolle's Theorem
<span class="orange">The</span> : If $f:[a, b] \rightarrow \mathbb{R}$ is a continuous function which is differentiable in $(a, b)$, and $f(a)=f(b)$, then  $\exists x_{0}\in(a, b)$ such that $f^{\prime}\left(x_{0}\right)=0$.

### The Mean Value Theorem
<span class="orange">The</span> : If $f:[a, b] \rightarrow \mathbb{R}$ is a continuous function which is differentiable in $(a, b)$, then  $\exists x_{0}$ in $(a, b)$ such that
$$
\frac{f(b)-f(a)}{b-a}=f^{\prime}\left(x_{0}\right) .
$$

---
### Darboux's Theorem
<span class="orange">The</span> : Let $f:(a, b) \rightarrow \mathbb{R}$ be a differentiable function. If $c, d \in(a, b)$ with $c<d$, then $\forall u$ between $f^{\prime}(c)$ and $f^{\prime}(d)$, $\exists x\in[c, d]$ such that $f^{\prime}(x)=u$.

### Continuity of the first derivative
We have just seen that the derivative satisfies the Derboux theorem. 
However, Derboux theorem is different from IVP since the derivative may not be continuous.
So, can we find a function which is differentiable but for which the derivative is not continuous?

Here is the standard example:
$$
f(x)= \begin{cases}x^{2} \sin \frac{1}{x}, & \text { if } x \neq 0 \\ 0 & \text { if } x=0\end{cases}
$$
This function will be differentiable at 0 but its derivative will not be continuous at that point. This shows that $f^{\prime}(0)=0$. On the other hand, if we use the product rule when $x \neq 0$ we get
$$
f^{\prime}(x)=2 x \sin \frac{1}{x}-\cos \frac{1}{x},
$$
which does not go to 0 as $x \rightarrow 0$.

---
## Monotonicity
Theorem 6. Let $f:[a, b] \rightarrow \mathbb{R}$ be continuous on $[a, b]$ and differentiable on $(a, b)$.
If $f^{\prime}(x)=0$ for all $x \in(a, b)$ then $f$ is a constant function.
$f$ is increasing if and only if $f^{\prime}(x) \geq 0$ for all $x \in(a, b)$.
$f$ is decreasing if and only if $f^{\prime}(x) \leq 0$ for all $x \in(a, b)$.

- Use of strong inequality in the above theorems implies strictly increasing/decreasing

---
### Critical Points
<span class="blue">Def</span> : For $f:X\rightarrow \mathbb{R}$ being a differentiable function, any point $x_0\in{X}$, where either $f^\prime(x_0)=0$ or it does not exist, is referred to as a critical point. 

### Stationary Points
<span class="blue">Def</span> : For $f:X\rightarrow \mathbb{R}$ being a differentiable function, any point $x_0\in{X}$, where $f^\prime(x_0)=0$, is referred to as a stationary point.

### Maxima and Minima for derivable functions
<span class="orange">The</span> : Let $f:[a, b] \rightarrow \mathbb{R}$ be continuous and let $c \in(a, b)$. Assume that $f$ is differentiable on $(a, c) \cup(c, b)$.
- If the sign of $f^{\prime}$ changes from positive to negative at $c$, then $f$ has a local maximum at $c$.
- If the sign of $f^{\prime}$ changes from negative to positive at $c$, then $f$ has a local minimum at $c$.
- If the sign of $f^{\prime}$ does not change at $c$, then $f$ does not have a local extremum at $c$.

---
## Concavity and Convexity
<span class="blue">Def</span> : A function $f: I \rightarrow \mathbb{R}$, where $I\subseteq\mathbb{R}$, is said to be concave (or sometimes concave downwards) if
$$
f\left(t x_{1}+(1-t) x_{2}\right) \geq t f\left(x_{1}\right)+(1-t) f\left(x_{2}\right)
$$
$\forall x_{1}, x_{2}\in I$, and $t \in[0,1]$. 

<span class="blue">Def</span> : A function $f: I \rightarrow \mathbb{R}$, where $I\subseteq\mathbb{R}$, is said to be convex (or sometimes convex upwards) if
$$
f\left(t x_{1}+(1-t) x_{2}\right) \leq t f\left(x_{1}\right)+(1-t) f\left(x_{2}\right)
$$
$\forall x_{1}, x_{2}\in I$, and $t \in[0,1]$. 

- By replacing the $\geq$ and $\leq$ signs above by strict inequalities we can define strictly concave and strictly convex functions.

### Properties of Convex functions
1. Convex functions are continuous.
2. Every convex function is Lipschitz continuous.
3. A differentiable function is convex if and only if its derivative is monotonically increasing.
4. If a function is differentiable and convex, then it is continuously differentiable. (A function is said to be continuously differentiable if it is differentiable and its derivative is continuous.)

### Point of Inflection
==needs editing==
<span class="blue">Def</span> : A point of inflection $x_{0}$ for a function $f$ is a point where the function changes its behavior from concave to convex (or vice-versa). At such a point, if the function is twice differentiable, $f^{\prime \prime}\left(x_{0}\right)=0$, but this is only a necessary, not a sufficient condition.(Why?) If further, we also assume that the lowest order $(\geq 2)$ non-zero derivative is odd, then we get a sufficient condition.

---
## Classes of differentiable functions
The space $\mathcal{C}^{k}(I)$ will denote the space of $k$ times continuously differentiable functions on an open interval $I$, for some fixed $k \in \mathbb{N}$

The space $\mathcal{C}^{\infty}(I) = \cup_{k=1}^{\infty}\mathcal{C}^{k}(I)$ consists of smooth/infinitely differentiable functions.

We denote the $k$-th derivative of a function $f(x)$ by $f^{(k)}(x)$ and for $k=1,2$ we also use the notations $f^{\prime}$ and $f^{\prime \prime}$ respectively.

<span class="orange">The</span> : If $f^{\prime \prime}(x)>0 \space\forall{x} \in(a, b)$, then $f$ is convex.
<span class="orange">The</span> : If $f^{\prime \prime}(x)<0 \space\forall{x} \in(a, b)$, then $f$ is concave.

### Second Derivative Test Theorem
<span class="orange">The</span> : Consider a function $f:X\rightarrow\mathbb{R}$, which is twice differentiable at a point $x_0\in{X}$, and $f^{\prime}(x_0)=0$. 
- If $f^{\prime \prime}\left(x_{0}\right)>0$, the function has a local minimum at $x_{0}$.
- If $f^{\prime \prime}\left(x_{0}\right)<0$, the function has a local maximum at $x_{0}$.
- If $f^{\prime \prime}\left(x_{0}\right)=0$, no conclusion can be drawn.

---
[[Taylor's Theorem]]