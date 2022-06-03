backlink : [[Multivariable Functions]]

# Limit of Multivariable Functions
### Limit of a function of 2 variables
<span class="orange">The</span> : Suppose $\lim _{(x, y) \rightarrow(a, b)} f(x, y)=L$. Given $p, q$, not both zero, let $g(t)=f(a+p t, b+q t)$. Then $\lim _{t \rightarrow 0} g(t)=L$.

The converse, however, is not true. Consider the following function
$$
f(x, y)= \begin{cases}\frac{y \sqrt{x^{2}+y^{2}}}{x}, & x \neq 0 \\ 0, & x=0\end{cases}
$$
Then for every $(p, q) \neq(0,0)$, the limit $\lim _{t \rightarrow 0} f(p t, q t)=0$. But the limit $\lim _{(x, y) \rightarrow(0,0)} f(x, y)$ does not exist.

Indeed, consider the sequences $x_{n}=1 / n^{2}$ and $y_{n}=1 / n$, so $\left(x_{n}, y_{n}\right) \rightarrow 0$, but $f\left(x_{n}, y_{n}\right)=\frac{\sqrt{1+n^{2}}}{n} \rightarrow 1$.

---
### Limit of Multivariable Functions
<span class="blue">Def</span> : Let $f: D \rightarrow \mathbb{R}$ be a function, where $D \subset \mathbb{R}^{n}$ be any nonempty set, and suppose $\mathbf{a} \in \mathbb{R}^{n}$ is a limit point of D. 
We say that the limit of $f$ at $\mathbf{a}$ is $L$, if $\forall\space\epsilon>0, \exists\space\delta>0$ such that
$$\mathbf{x} \in D \cap B(\mathbf{a}, \delta) \backslash\{\mathbf{a}\} \implies |f(\mathbf{x})-L|<\epsilon$$
which is same as saying that
$$
0<d_{n}(\mathbf{x}, \mathbf{a})<\delta \Rightarrow \mathbf{d}_{\mathbf{1}}(\mathbf{f}(\mathbf{x}), \mathbf{L})<\epsilon .
$$

- We denote it as $\lim _{\mathbf{x} \rightarrow \mathbf{a}} f(\mathbf{x})=L$.
- If $\mathbf{a}$ is an isolated point of $D$, then we define $\lim _{\mathbf{x} \rightarrow \mathbf{a}} f(\mathbf{x})=f(\mathbf{a})$.

### Sequential criterion
A function $f: D \subseteq \mathbb{R}^{n} \rightarrow \mathbb{R}$ is said to have limit $L$ at a point $\mathbf{a}$, if $\forall\left\{\mathbf{x}_{\mathbf{n}}\right\}$ in $D$, with $\mathbf{x}_{\mathbf{n}} \neq \mathbf{a}$ for all $n \in \mathbb{N}$, 
$$\lim_{n\rightarrow{\infty}}{\{{\mathbf{x}}_n\}}=\mathbf{a} \implies \lim_{n\rightarrow{\infty}}{f({\mathbf{x}}_n)} = L$$

---
### Limit theorems (for multivariable functions)
Let $f, g: D \subseteq \mathbb{R}^{n} \longrightarrow \mathbb{R}$ be functions and let
$$
\lim _{\mathbf{x} \rightarrow \mathbf{a}} f(\mathbf{x})=L_{1} \text { and } \lim _{\mathbf{x} \rightarrow \mathbf{a}} g(\mathbf{x})=L_{2},
$$
where $\mathbf{x}=\left(\mathbf{x}_{1}, \ldots, \mathbf{x}_{\mathbf{n}}\right)$ and $\mathbf{a}=\left(\mathbf{a}_{1}, \ldots, \mathbf{a}_{\mathbf{n}}\right) \in \mathbb{R}^{\mathbf{n}}$, then:
- $\lim _{\mathbf{x} \rightarrow \mathbf{a}} f \pm g=L_{1} \pm L_{2}$,
- $\lim _{x \rightarrow a} f g=L_{1} L_{2}$,
- if $L_{2} \neq 0$, then $\lim _{x \rightarrow a} f / g=L_{1} / L_{2}$,
- if $f(\mathbf{x}) \leq g(\mathbf{x})$ for all $\mathbf{x} \in \mathbf{D}$ then $L_{1} \leq L_{2}$,
- if $h: D \rightarrow \mathbb{R}$ is such that $f(\mathbf{x}) \leq h(\mathbf{x}) \leq g(\mathbf{x})$ and if $L_{1}=L_{2}$ then $\lim _{x \rightarrow a} h(x)$ exists and is equal to $L_{1}$.

---
