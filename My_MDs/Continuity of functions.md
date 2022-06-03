backlink : [[MA actual]]

---
# Continuity of functions
<span class="yellow">Continuity of functions</span>

<span class="blue">Def</span> : A function $f:(a, b) \rightarrow \mathbb{R}$ is said to be continuous at $c \in(a, b)$ if $\forall\epsilon>0,\exists \delta>0$ such that
$$
|x-c|<\delta\implies |f(x)-f(c)|<\epsilon
$$
<span class="blue">Def</span> : A function $f:(a, b) \rightarrow \mathbb{R}$ is said to be continuous at $c \in(a, b)$ if for every sequence $\left\{x_{n}\right\}$ that converges to $c$, the corresponding sequence $\left\{f\left(x_{n}\right)\right\}$ converges to $f(c)$.


<span class="blue">Def</span> : Let $f:(a, b) \rightarrow \mathbb{R}$ be a function and let $c \in(a, b)$. We say that $f$ is continuous at $c$ if $\lim _{x \rightarrow c} f(x)=f(c)$. 
- If $f:(a, b) \rightarrow \mathbb{R}$ is continuous at every $c \in(a, b)$ then we say that $f$ is continuous on $(a, b)$. 
- If $f$ is defined on $[a, b]$, then $f$ is continuous at $a$ if $\lim _{x \rightarrow a+} f(x)=f(a)$ and is continuous at $b$ if $\lim _{x \rightarrow b-} f(x)=f(b)$.

<span class="yellow">Continuity theorems</span>

- If $f, g:(a, b) \rightarrow \mathbb{R}$ are continuous functions then so are $f \pm g$ and $f \cdot g$.
- Further $f / g$ is also continuous on $(a, b)$, at all points $x \in(a, b)$ where $g(x)$ is nonzero.
- To summarise, polynomial functions are continuous on $\mathbb{R}$, whereas rational functions, $\frac{P(x)}{Q(x)}$, are continuous at all points $x$ where $Q(x) \neq 0$.

<span class="yellow">Continuity of composite functions</span>

<span class="orange">The</span> : Let $f:\left(a_{1}, b_{1}\right) \rightarrow \mathbb{R}$ and $g:\left(a_{2}, b_{2}\right) \rightarrow \mathbb{R}$ be continuous functions. Assume that $f\left(\left(a_{1}, b_{1}\right)\right) \subseteq\left(a_{2}, b_{2}\right)$. Then the composition $g \circ f:\left(a_{1}, b_{1}\right) \rightarrow \mathbb{R}$ is continuous.

---
<span class="yellow">Intermediate Value Theorem</span>

<span class="orange">The</span> : Let $f:[a,b]\rightarrow\mathbb{R}$ be a continuous function such that $f(a)\neq f(b)$. Then for any real number $m$ between $f(a) and f(b), \exists c\in(a,b)$ such that $f(c)=m$.

<span class="yellow">Continuity implies boundedness</span>

<span class="orange">The</span> : Let $f:[a,b]\rightarrow\mathbb{R}$ be a continuous function, and let $[c,d]\subseteq(a,b)$, then $f$ is bounded on $[c,d]$.

<span class="yellow">Extreme Value Theorem</span>

<span class="orange">The</span> : Let $f:[a,b]\rightarrow\mathbb{R}$ be a continuous function, and let $[c,d]\subseteq(a,b)$, then $\exists m,M\in[c,d]$ such that 
$$f(m)\leq f(x)\leq f(M), \forall x\in[c,d]$$

---
<span class="yellow">Discontinuities</span>

<span class="blue">Def</span> : A function $f:(a, b) \rightarrow \mathbb{R}$ is said to have a simple discontinuity or discontinuity of first kind at a point $c \in(a, b)$, if both $f(c+)$ and $f(c-)$ exist but $f$ is discontinuous at $c$. 
- A discontinuity of $f$ of any other type is called a discontinuity of second kind.
- There are two ways in which a function $f$ can have a simple discontinuity at a point $c$ : either $f(c+) \neq f(c-)$, (in which the value of the function at $c$ does not matter) or $f(c+)=f(c-) \neq f(c)$.