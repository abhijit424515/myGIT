backlink : [[MA actual]]

---
# Basic Topology of $\mathbb{R}^{n}$
### Euclidian Distance function
For any $n \in \mathbb{N}$, $\mathbb{R}^{n}=\left\{\left(x_{1}, \ldots, x_{n}\right): x_{i} \in \mathbb{R}, i=1, \ldots, n\right\}$
Let $x,y\in\mathbb{R}^n$, where $x=\left(x_{1}, \ldots, x_{n}\right), y=\left(y_{1}, \ldots, y_{n}\right)$

We define the Euclidian distance between $x$ and $y$ to be
$$
d_{n}:{\mathbb{R}^n}\times{\mathbb{R}^n}\rightarrow[0,\infty], 
$$
$$
d_{n}(x, y)=\sqrt{\left(x_{1}-y_{1}\right)^{2}+\cdots+\left(x_{n}-y_{n}\right)^{2}} .
$$

- In general, the function $d_{n}$ is called the Euclidean distance function of $\mathbb{R}^{n}$ 
- The ordered pair $\left(\mathbb{R}^{n}, d_{n}\right)$ is called the $n-$ dimensional Euclidean space.

---
### N-dimensional open/closed ball
Open ball with centre at a point ' $a$ ' and radius ' $r$ ' in $\mathbb{R}^{n}$ is defined as
$$
B(a ; r) / B_{r}(a) / B(a, r)=\left\{x \in \mathbb{R}^{n}: d_{n}(x, a)<r\right\} .
$$
Closed ball with centre at a point ' $a$ ' and radius ' $r$ ' in $\mathbb{R}^{n}$ is defined as
$$
\bar{B}(a ; r) / \bar{B}_{r}(a) / \bar{B}(a, r)=\left\{x \in \mathbb{R}^{n}: d_{n}(x, a) \leq r\right\} .
$$

- Neighbourhood $N(x,r)/\bar{N}(x,r)$ of a point a with radius r is a 1-dimensional open/closed ball
- If nothing is specified, by the term open or closed unit ball in $\mathbb{R}^{n}$ we mean the sets $B(0 ; 1)$ or $\bar{B}(0 ; 1)$ respectively.

---
### Interior Point
<span class="blue">Def</span> : For $X \subseteq \mathbb{R}^{n}$, a point $x \in X$ is an interior point of $X$, if $\exists\space r>0$ such that $B(x ; r) \in X$

Examples ->
1. Every point in an open interval $(a, b)$ is an interior point of $(a, b)$.
2. Every point in an open ball $B(a ; r)$ is an interior point of $B(a ; r)$.
3. The point $b$ is not an interior point of the half-open interval $(a, b]$.
4. Any isolated point $x\in{\mathbb{R}^n}$
5. No point in any **finite subset** of $\mathbb{R}^{n}$ is an interior point.
6. Not every point in $X=B(0 ; 1) \cup\{(2,3),(5,6)\} \subseteq \mathbb{R}^{2}$ is an interior point of $X$, since we included 2 isolated points

---
### Open Set
<span class="blue">Def</span> : A set $X \subseteq \mathbb{R}^{n}$ is said to be an open set in $\mathbb{R}^{n}$ if every point in $X$ is an interior point of $X$.

<span class="blue">Def</span> : The set of all interior points of a set $X \subseteq \mathbb{R}^{n}$ is called the interior of $X$ and is denoted by $X^{\circ}$.

==So, $X$ is an open set if and only if $X=X^{\circ}$.==

Examples. 
    1). Every open interval $(a, b)$ is an open set in $\mathbb{R}$.
    2). A closed interval $[a, b]$ is not open in $\mathbb{R}$ because the points $a, b$ are not interior points of $[a, b]$.
    3). No finite or countable subset of $\mathbb{R}^{n}$ is open.
    4). Every open ball $B(a ; r)$ in $\mathbb{R}^{n}$ is an open set in $\mathbb{R}^{n}$.
    5). The set $X=B(0 ; 1) \cup\{(2,3),(5,6)\}$ is not an open set in $\mathbb{R}^{2}$, since $X^{\circ}=B(0 ; 1)$.
    
---
### Limit point
<span class="blue">Def</span> : For $X \subseteq \mathbb{R}^{n}$, a point $x \in \mathbb{R}^{n}$ is said to be a limit point of $X$, if $\forall\space\epsilon>0$, there exists $a \in X$ with $a \neq x$ such that $a \in N(x ; \epsilon) \cap X$.

Examples. 
1. Every point in an open interval $(a, b)$ is a limit point of $(a, b)$. Also $a, b$ are limit points of $(a, b)$ though they do not belong to $(a, b)$.
2. Every point in a closed interval $[a, b]$ is a limit point of $[a, b]$.
3. Every point in an open or closed ball in $\mathbb{R}^{n}$ is a limit point of that ball.
4. A finite subset of $\mathbb{R}^{n}$ has no limit point.
5. $\bar B(0 ; 1)$ is the set of limit points of $X=B(0 ; 1) \cup\{(2,3),(5,6)\} \subseteq \mathbb{R}^{2}$
    
---
### Closed Set
<span class="blue">Def</span> : A set $X \subseteq \mathbb{R}^{n}$ is said to be a closed set in $\mathbb{R}^{n}$ if $X$ contains all its limit points.

<span class="blue">Def</span> : For a set $X \subseteq \mathbb{R}^{n}$, if $X^{\prime}$ is the set of all limit points of $X$, then the closure of $X$ is defined to be the set $\bar{X}=X \cup X^{\prime}$.

Examples -> 
1. Every closed interval $[a, b]$ is a closed set in $\mathbb{R}$.
2.  An open interval $(a, b)$ is not closed in $\mathbb{R}$ because the points $a, b$ are limit points of $(a, b)$ but they do not belong to $(a, b)$.
3. Every closed ball $\bar{B}(a ; r)$ in $\mathbb{R}^{n}$ is a closed set in $\mathbb{R}^{n}$.
4. Every finite subset of $\mathbb{R}^{n}$ is a closed set.
5. The set $X=\bar{B}(0 ; 1) \cup\{(2,3),(5,6)\}$ closed in $\mathbb{R}^{2}$

---
<span class="orange">The</span> : $A$ point $a \in \mathbb{R}^{n}$ is a limit point of a set $X \subseteq \mathbb{R}^{n}$ if and only if there is a sequence $\left\{a_{n}\right\}$ in $X$, with $a_{n} \neq n,\forall{n} \in \mathbb{N}$ such that $\lim_{n\rightarrow \infty} {a_n} = a$

<span class="blue">Def</span> : A point $x \in X \subseteq \mathbb{R}^{n}$ that is not a limit point of $X$ is called an isolated point of $X$.

- A point $x$ in a set $X$ is either a limit point of $X$ or an isolated point of $X$.

Examples ->
- All points in the set $\left\{\frac{1}{n}: n \in \mathbb{N}\right\}$ are isolated points.
---
### Conclusions
**Open Sets**
1. Union of any family of open sets is open.
2. Intersection of finitely many open sets is open
3. Intersection of infinitely many open sets may not be open.
    Example. Consider the following family of open sets in $\mathbb{R}$ :
$$
\left\{\left(-\frac{1}{n}, \frac{1}{n}\right): n \in \mathbb{N}\right\} .
$$
The intersection of this family is equal to the set $\{0\}$ which is not open in $\mathbb{R} .$

---
**Closed Sets**
1. Intersection of any family of closed sets is closed.
2. Union of finitely many closed sets is closed.
3. Union of infinitely many closed sets may not be closed.
    Example. Consider the following family of closed sets in $\mathbb{R}$ :
$$
\left\{\left[0, \frac{n}{n+1}\right]: n \in \mathbb{N}\right\} .
$$
The union of this family is equal to the set $[0,1)$ which is not closed in $\mathbb{R}$.

---
**Open and closed sets**
1. Complement of an open set is closed and complement of a closed set is open.
2. Interior of a set is open and closure of a set is closed.
3. A set $U \subseteq \mathbb{R}^{n}$ is open if and only if $U=U^{\circ}$.
4. $A$ set $F \subseteq \mathbb{R}^{n}$ is closed if and only if $F=\bar{F}$.
5. For any set $X, X^{\circ}$ is the largest open set contained in $X$ and $\bar{X}$ is the smallest set containing $X$.

---
### Boundary of a set
<span class="blue">Def</span> : Let $X$ be a subset of $\mathbb{R}^{n}$. The boundary of $X$, which is denoted by $\partial X$, is defined to be the set $\bar{X} \backslash X^{\circ}$.

Examples. 
1. ==The boundary of any finite subset $X$ of $\mathbb{R}^{n}$ is equal to $X$.==
2. The boundary of open or closed ball $B(a ; r)$ or $\bar{B}(a ; r)$ in $\mathbb{R}^{n}$ is the set
          $$
    \left\{x \in \mathbb{R}^{n}: d_{n}(x, a)=r\right\} .
    $$
3. The boundary of the set $\left\{\frac{1}{n}: n \in \mathbb{N}\right\}$ is $\left\{\frac{1}{n}: n \in \mathbb{N}\right\} \cup\{0\}$.
4. The boundary of $\mathbb{R}^{n}$ is the empty set $\emptyset$.
5. The boundary of the set $[0, \infty)$ is $\{0\}$
6. Is it always true that the boundary of a countable set $G$ in $\mathbb{R}^{n}$ is equal to $G$ ? #question 
7. What is the boundary of the set $\mathbb{Q}$ in $\mathbb{R}$ or $\mathbb{Q}^{2}$ in $\mathbb{R}^{2}$ ? #question 
8. Is there any uncountable subset $H$ of $\mathbb{R}$ such that $\partial H=H ?$ #question 

---
### Compact subsets of $\mathbb{R}^{n}$
<span class="blue">Def</span> : A set $X \subseteq \mathbb{R}^{n}$ is called a bounded set in $\mathbb{R}$, if there is a closed ball $\bar{B}(\bar{x} ; \overline{0})$ such that $X \subseteq \bar{B}(\overline{0} ; R)$.

<span class="blue">Def</span> : A set $X \subseteq \mathbb{R}^{n}$ that is closed and bounded is called a **compact set** in $\mathbb{R}^{n}$.

Examples
1. Every closed ball $\bar{B}(a ; r)$ in $\mathbb{R}^{n}$ is a compact in $\mathbb{R}^{n}$.
2. An open ball $B(a ; r)$ in $\mathbb{R}^{n}$ is not compact because it is not closed.
3. The set $\left\{\frac{1}{n}: n \in \mathbb{N}\right\} \cup\{0\}$ is compact.
4. Every finite subset of $\mathbb{R}^{n}$ is a compact set.
5. The set $[0, \infty)$ is closed but unbounded, and hence not compact.

---
