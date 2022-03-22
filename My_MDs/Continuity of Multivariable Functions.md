backlink : [[Multivariable Functions]]

# Continuity of Multivariable Functions
<span class="blue">Def</span> : Let $D \subseteq \mathbb{R}^n$, and let $\mathbf{a} \in D$. A function $f: D \rightarrow \mathbb{R}$ is said to be continuous at point $\mathbf{a}$, if $\forall\epsilon>0, \exists\delta>0$ such that 
$$f(B(x ; \delta) \cap D) \subseteq(f(a)-\epsilon, f(a)+\epsilon)$$

- $f$ is said to be continuous on $D$, if $f$ is continuous at every a $\in D$.

### Sequential criterion
A function $f$ is continuous at $\mathbf{a}$ if and only if for every sequence $\left\{\mathbf{x}_{n}\right\}$ converging to $\mathbf{a}$, the sequence $\left\{f\left(\mathbf{x}_{n}\right)\right\}$ converges to $f(\mathbf{a})$.

### Continuity theorems (for multivariable functions)
Let $D \subseteq \mathbb{R}^{n}$ and let $f, g: D \rightarrow \mathbb{R}$ be continuous functions.
- $f \pm g$ is continuous on $D$,
- $f.g$ is continuous on $D$,
- $f / g$ is continuous on $D-\{x: g(x)=0\}$,
- If $h: \mathbb{R} \rightarrow \mathbb{R}$ is continuous, then so are $h \circ f$ and $h \circ g$.

---
<span class="blue">Def</span> : Let $D \subseteq \mathbb{R}^{n}$ and let $f: D \longrightarrow \mathbb{R}^{m}$ be a function. Then $f=\left(f_{1}, f_{2}, \ldots, f_{m}\right)$ is said to be continuous at a point $\bar{a} \in D$ if the component functions $f_{1}, f_{2}, \ldots, f_{m}$ are all continuous at $\bar{a}$. Note that, here $f_{1}, \ldots, f_{m}$ are all real-valued functions defined on $D$.

---
Examples
- $f: \mathbb{R}^{4} \rightarrow \mathbb{R}$ defined by $f(x, y, z, w)=\sin \left(x y+z-\cos \left(w z^{2}\right)\right)$ is continuous.
- $f: \mathbb{R}^{2} \rightarrow \mathbb{R}$ defined by
$$
f(x, y)=\frac{x y}{x^{4}+y^{2}}
$$
is continuous on $\mathbb{R}^{2}-\{(0,0)\}$. It is not continuous at $(0,0)$, no matter how we define it at $(0,0)$.
- Is the function $f: \mathbb{R}^{2} \rightarrow \mathbb{R}$, defined by
$$
f(x, y)=\left\{\begin{array}{cl}
\frac{x y}{\sqrt{x^{12}+y^{6}}} & (x, y) \neq(0,0) \\
0 & (x, y)=(0,0)
\end{array}\right.
$$
continuous at $(0,0)$ ?

---
### Boundedness of multivariable functions
<span class="blue">Def</span> : A set $X \subseteq \mathbb{R}^{n}$ is said to be bounded, if there exists $M>0$ such that $\|\bar{x}\| \leq M$ for all $\bar{x} \in X$, that is, if the set $X$ is contained in a closed ball $B(\overline{0} ; M)$ centered at the origin $\overline{0}$.

---
### Continuity and Boundedness of multivariable functions
<span class="orange">The</span> : Let $D \subset \mathbb{R}^{n}$ be compact and let $f: D \longrightarrow \mathbb{R}^{m}$ be a continuous function. Then $f(D)$ is compact.
- Continuous image of a compact set is compact, that is, continuity preserves compactness.

---