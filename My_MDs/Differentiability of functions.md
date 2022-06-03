backlink : [[MA actual]]

---
# Differentiability of functions
<span class="yellow">Differentiability of functions</span>

<span class="blue">Def</span> : Let $f:(a, b) \rightarrow \mathbb{R}$ be a function and let $c \in(a, b)$. If $\forall\epsilon>0, \exists\delta>0$ such that
$$
0<|x-c|<\delta \Rightarrow\left|\frac{f(x)-f(c)}{x-c}-L\right|<\epsilon \text {. }
$$
for some $L\in\mathbb{R}$, then $f$ is said to be differentiable at c, and it is denoted as $f^{\prime}(c)=L$.

<span class="yellow">Differentiability implies continuity</span>

<span class="orange">The</span> : If $f$ is differentiable at $c$ then it is continuous at $c$.
<span class="red">Contra+ The</span> : If a function $f$ is not continuous at a point $c$, it cannot be differentiable at $c$.

<span class="green">Functions which are continuous everywhere but differentiable nowhere =></span> 
Ex. Weierstrass functions
$$
f(x)=\sum_{n=0}^{\infty} \frac{1}{2^{n}} \cos \left(3^{n} x\right)
$$

<span class="yellow">Algebraic rules of differentiability</span>

Let $f, g:(a, b) \rightarrow \mathbb{R}$ be functions differentiable at $c \in(a, b)$. 
- Then so are $f \pm g$ and $f \cdot g$ with $(f \pm g)^{\prime}(c)=f^{\prime}(c) \pm g^{\prime}(c)$ and $(f \cdot g)^{\prime}(c)=f^{\prime}(c) g(c)+f(c) g^{\prime}(c)$.
- If $g(c) \neq 0$, then $f / g$ is differentiable at $c$ and
$$
(f / g)^{\prime}(c)=\frac{f^{\prime}(c) g(c)-f(c) g^{\prime}(c)}{g(c)^{2}}
$$

<span class="orange">The</span> : Let $f:(a, b) \rightarrow \mathbb{R}$ be a function and let $c \in(a, b)$. Then $f$ is differentiable at $c$ if and only if $\exists\space\phi:(a, b) \rightarrow \mathbb{R}, \phi$ being continuous at $c$ and satisfying
$$
f(x)-f(c)=\phi(x)(x-c)
$$
In this case, we have $\phi(c)=f^{\prime}(c)$.
It is also known as the Carathéodory Theorem.

<span class="orange">The</span> : Let $f:(a, b) \rightarrow(c, d)$ be differentiable at $s \in(a, b)$ and $g:(c, d) \rightarrow \mathbb{R}$ be differentiable at $f(s) \in(c, d)$. Then $g \circ f$ is differentiable at $m$, and $(g \circ f)^{\prime}(s)=g^{\prime}(f(s)) f^{\prime}(s)$.

<span class="yellow">Differentiability of inverse functions</span>

<span class="orange">The</span> : Let $f:(a, b) \rightarrow(c, d)$ admit an inverse $g:(c, d) \rightarrow(a, b)$. If $f$ is differentiable on $(a, b)$ and $f^{\prime}(s) \neq 0$ for $s \in(a, b)$ then $g$ is differentiable at $f(s)$ and $g^{\prime}(f(s))=\frac{1}{f^{\prime}(s)}$.

<span class="yellow">L'Hospital's rules</span>

<span class="orange">The</span> : Let $f, g:(a, b) \rightarrow \mathbb{R}$ be differentiable functions and assume that $g^{\prime}(x) \neq 0$ on $(a, b)$. 
Suppose that $\lim _{x \rightarrow c} f(x)=0=\lim _{x \rightarrow c} g(x)$ for some $c \in(a, b)$. If $\lim _{x \rightarrow c} \frac{f^{\prime}(x)}{g^{\prime}(x)}=L \in \mathbb{R}$, then $\lim _{x\rightarrow c}\frac{f(x)}{g(x)}=L$

---
