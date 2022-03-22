## Integrals over any bounded region in $\mathbb{R}^{2}$
<span class="orange">Theorem</span>
Let $D$ be any bounded subset (not necessarily rectangle) of $\mathbb{R}^{2}$. 
Then there exists a rectangle $R$ in $\mathbb{R}^{2}$ containing $D$, i.e., $D \subset R$.

<span class="green">Proof</span>
Indeed, since $D$ is a bounded subset of $R^{2}$, there exists $a>0$ such that any $(x, y) \in D$ satisfies $x^{2}+y^{2}<a^{2}$, i.e,
$D \subset B_{a}=\left\{(x, y) \mid x^{2}+y^{2} \leq a^{2}\right\} .$ But $B_{a} \subset[-a, a] \times[-a, a]$, so the rectangle $R:=[-a, a] \times[-a, a]$ contains $D$.

---
<span class="blue">Definition</span>
Let $f: D \rightarrow \mathbb{R}$ be a function. We extend $f$ from $D$ to $\mathbb{R}$ by defining $f^*$ ->
$$
f^{*}(x, y):=\left\{\begin{array}{ll}
f(x, y), & (x, y) \in D, \\
0, & (x, y) \notin D .
\end{array} .\right.
$$
The function $f: D \rightarrow \mathbb{R}$ is said to be integrable on bounded $D \subset \mathbb{R}^{2}$, if $f^{*}$ is integrable on $R$ and the integral of $f$ on $D$ is defined by
$$
\iint_{D} f(x, y) d x d y:=\iint_{R} f^{*}(x, y) d x d y
$$

---
#### Extending to 3D
If $f \geq 0$ on $D \subset \mathbb{R}^{2}$ and $f$ is integrable on $D$, then the double integral of $f$ on $D$ is the volume of the solid that lies above $D$ in the $x-y$ plane and below the graph of the surface $z=f(x, y)$ for all $(x, y) \in D$.

![|400](https://i.imgur.com/oBMp7UQ.png)

---
### Properties of Integrals over bounded sets in $\mathbb{R}^{2}$
Let $D$ be a bounded subset of $\mathbb{R}^{2}$. Let $f: D \rightarrow \mathbb{R}$ be an integrable function.
The algebraic properties for integrals on any bounded set $D$ in $\mathbb{R}^{2}$ hold similarly to those of the case of integrals on rectangle.

<span class=orange>Domain additivity property</span> 
Let $D \subseteq \mathbb{R}^{2}$ be a bounded set. Let $D_{1}, D_{2} \subseteq D$ such that $D=D_{1} \cup D_{2}$, and $D_{1} \cap D_{2}$ has content zero.
Let $f: D \rightarrow \mathbb{R}^{2}$ be a bounded function. If $f$ is integrable over $D_{1}$ and $D_{2}$, then $f$ is integrable on $D$ and
$$
\iint_{D} f=\iint_{D_{1}} f+\iint_{D_{2}} f .
$$

---
### Existence of Integrals over bounded sets in $\mathbb{R^2}$
<span class=blue>Boundary of a subset</span> 
Let $D \subseteq \mathbb{R}^{2}$ be a bounded set. A point $x \in \mathbb{R}^{2}$ is in the boundary of $D$ if there is a sequence $\left\{x_{n}\right\}_{n}$ in $D$ and a sequence $\left\{y_{n}\right\}_{n}$ in $\mathbb{R}^{2}-D$, such that $\left\{x_{n}\right\}_{n} \rightarrow x,\left\{y_{n}\right\}_{n} \rightarrow x$. The set of boundary points of $D$ is denoted by $\partial D$.

<span class=green>Examples</span>
1. $D=\left\{(x, y) \mid x^{2}+y^{2} \leq r^{2}\right\}$. The boundary of $D$, $\partial D=\left\{(x, y) \mid x^{2}+y^{2}=r^{2}\right\} .$
2. $R=[a, b] \times[c, d]$. The boundary of rectangle $R$, $\partial R=\left\{(a, y) \in \mathbb{R}^{2} \mid c \leq y \leq d\right\} \cup\left\{(b, y) \in \mathbb{R}^{2} \mid c \leq y \leq d\right\} \cup\{(x, c) \in$ $\left.\mathbb{R}^{2} \mid a \leq x \leq b\right\} \cup\left\{(x, d) \in \mathbb{R}^{2} \mid a \leq x \leq b\right\} .$
3. Let $S=\{(x, y) \mid x, y \in \mathbb{Q}\}$. Then $\partial S=\mathbb{R}^{2}$.

---
Suppose $D$ is a bounded subset contained in a rectangle $R$, and $f: D \rightarrow \mathbb{R}$ is a bounded continuous function extended to $f^{*}: R \rightarrow \mathbb{R}$ by defining $f^{*}=0$ on the complement of $D$. Then all the discontinuities of $f^{*}$ lie on the boundary $\partial D$.

<span class=green>Example</span> ->
Let $D=\left\{(x, y) \in \mathbb{R}^{2} \mid x^{2}+y^{2} \leq 1\right\}$. Let $f(x, y)=x^{2}+y^{2}$ on disk D. 
Extend the function $f$ to $f^{*}$ on the rectangle $R=[-2,2] \times[-2,2]$.
The points of discontinuity of $f^{*}$ lie on the the boundary of $D$ i.e., $\left\{(x, y) \in \mathbb{R}^{2} \mid x^{2}+y^{2}=1\right\} .$

---
<span class=yellow>Convention</span>
A path $\gamma$ in $\mathbb{R}^{2}$ (or $\mathbb{R}^{3}$ ) will mean a continuous function $\gamma:[a, b] \rightarrow \mathbb{R}^{2}$ (or $\mathbb{R}^{3}$ ) for $a, b \in \mathbb{R}$. 
It is said to be closed if $\gamma(a)=\gamma(b)$.
By a curve $\gamma$ we mean the image of a path $\gamma$ in $\mathbb{R}^{2}$ (or $\mathbb{R}^{3}$ ). 
	A "good" curve is always of measure zero (hence content zero).

<span class=orange>Theorem</span>
Let $D \subset \mathbb{R}^{2}$ be a bounded set whose boundary $\partial D$ is given by the finitely many continous closed curves then any bounded and continuous function $f: D \rightarrow \mathbb{R}$ is integrable over $D$.



### Calculating Integrals over bounded sets
#### Type-1
Let $h_1,h_2:[a,b]\rightarrow\mathbb{R}$ be 2 continuous functions, with $h_1(x)\leq h_2(x) \forall x\in[a,b]$.
Consider the set of points $D_1=\{(x,y) \mid a\leq x\leq b$ and $h_1(x)\leq y \leq h_2(x)$. 

Let $f:D\rightarrow\mathbb{R}$ be a continuous function
Let $D\subset X=[\alpha,\beta]\times[\gamma, \delta]$, and $f^*$ be a corresponding function defined by extending $f$ by zero. 

#### Type-2
Exactly same as Type-1, just the variables x,y are reversed

