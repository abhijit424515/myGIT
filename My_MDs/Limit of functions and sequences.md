backlink : [[MA actual]]

---
# Limit of functions and sequences
<span class="yellow">Limit of a sequence</span> 

<span class="blue">Def</span> : A sequence $a_{n}$ converges to a limit $L$, if $\forall \epsilon>0, \exists\space n_0\in\mathbb{N}$, such that
$$
|a_{n}-L|< \epsilon
$$
whenever $n>n_0$.
-  Also denoted as $\lim _{n \rightarrow \infty} a_{n}=1$
- Hence,  $\left\{a_{n}\right\}_{n=1}^{\infty}$ converges, and so is convergent.
- A sequence that does not converge is said to diverge, or is divergent.


---
<span class="orange">The002</span> : If $a_n$ and $b_n$ are convergent sequences such that $a_n \leq b_n\space, \forall n \in \mathbb N$, then $$\lim _{n \rightarrow \infty} a_{n} \leq \lim _{n \rightarrow \infty} b_{n}$$
<span class="orange">The003</span> : Suppose $\left\{a_{n}\right\},\left\{b_{n}\right\},\left\{c_{n}\right\}$ be sequences of real numbers satisfying $a_{n} \leq b_{n} \leq c_{n}$ for all $n \in \mathbb{N}$. If $\left\{a_{n}\right\}$ and $\left\{c_{n}\right\}$ converge and $\lim _{n \rightarrow \infty} a_{n}=\lim _{n \rightarrow \infty} c_{n}=l$, then $\left\{b_{n}\right\}$ also converges and $\lim _{n \rightarrow \infty} b_{n}=1$. **(sandwich theorem)**

<span class="yellow">Formulae for limits of sequences -></span>
If $\left\{a_{n}\right\}$ and $\left\{b_{n}\right\}$ are two convergent sequences of real numbers, then
1. $\lim _{n \rightarrow \infty}\left(a_{n} \pm b_{n}\right)=\lim _{n \rightarrow \infty} a_{n} \pm \lim _{n \rightarrow \infty} b_{n}$.
2. $\lim _{n \rightarrow \infty}\left(a_{n} b_{n}\right)=\lim _{n \rightarrow \infty} a_{n} \cdot \lim _{n \rightarrow \infty} b_{n}$.
3. $\lim _{n \rightarrow \infty}\left(a_{n} / b_{n}\right)=\lim _{n \rightarrow \infty} a_{n} / \lim _{n \rightarrow \infty} b_{n}$, provided $b_{n} \neq 0$ for all $n$ and $\lim _{n \rightarrow \infty} b_{n} \neq 0$.
4. Order theorem: If for some $n_{0} \in \mathbb{N}, a_{n} \leq b_{n}, \forall n>n_{0}$, then $\lim a_{n} \leq \lim b_{n}$.

---
### <span class="yellow">Cauchy Sequences</span>

A sequence $\left\{a_{n}\right\}$ is called a Cauchy sequence if for every $\epsilon>0$ there exists $N$ such that $\left|a_{n}-a_{m}\right|<\epsilon \quad \forall m, n \geq N$.

<span class="orange">The004</span> : Every convergent sequence of real numbers is a Cauchy sequence.
<span class="orange">The005</span> : Every Cauchy sequence in $\mathbb{R}$ is convergent.
<span class="orange">The006</span> : A sequence of real numbers is Cauchy if and only if it is convergent.

- A convergent sequence of rational numbers is always a Cauchy sequence but a Cauchy sequence of rational numbers may not converge in $\mathbb{Q}$. 
- The set of real numbers is nothing but the collection of limits of all Cauchy sequences of rational numbers.

<span class="yellow">Limit of a function</span>

<span class="blue">Def</span> : Let $L \in \mathbb{R}$, $c \in(a, b)$, and let $f:(a, b) \backslash\{c\} \rightarrow \mathbb{R}$ be a function. 
The limit of $f$ at $c$ is $L$, if $\forall\epsilon>0, \exists\delta>0$ such that
$$
0<|x-c|<\delta \implies |f(x)-L|<\epsilon
$$
- Denoted as $\lim _{x \rightarrow c} f(x)=L$.

<span class="orange">[[The007]]</span> : If $lim_{x\rightarrow c} f(x)$ exists, then it's value is unique

<span class="yellow">Limit theorems</span>

<span class="orange">The008</span> : Let $f$ and $g$ be defined in a punctured interval containing $c$. Then ->
- $\lim _{x \rightarrow c} f(x) \pm g(x)=\left(\lim _{x \rightarrow c} f(x)\right) \pm\left(\lim _{x \rightarrow c} g(x)\right) .$
- $\lim _{x \rightarrow c} f(x) \cdot g(x)=\left(\lim _{x \rightarrow c} f(x)\right) \cdot\left(\lim _{x \rightarrow c} g(x)\right)$.
- If $\lim _{x \rightarrow c} g(x) \neq 0$, then $\lim _{x \rightarrow c} \frac{f(x)}{g(x)}=\frac{\lim _{x \rightarrow c} f(x)}{\lim _{x \rightarrow c} g(x)} .$

<span class="orange">The009</span> : Let $f, g:(a, b) \rightarrow \mathbb{R}$ be functions such that $f(x) \leq g(x)$ for every $x \in(a, b)$. If both $\lim _{x \rightarrow c} f(x)$ and $\lim _{x \rightarrow c} g(x)$ exist, then
$$
\lim _{x \rightarrow c} f(x) \leq \lim _{x \rightarrow c} g(x)
$$ 
also known as the **Order Theorem**

<span class="orange">The010</span> : Let $f, g, h:(a, b) \rightarrow \mathbb{R}$ be functions such that $f(x) \leq g(x) \leq h(x)$ for every $x \in(a, b)$. If $\lim _{x \rightarrow c} f(x)=\lim _{x \rightarrow c} h(x)$ then $\lim _{x \rightarrow c} g(x)$ exists and and
$$
\lim _{x \rightarrow c} f(x)=\lim _{x \rightarrow c} g(x)=\lim _{x \rightarrow c} h(x)
$$
also known as the **Sandwich Theorem**

<span class="yellow">Limits at $\pm \infty$</span>

<span class="blue">Def</span> : Let $f: \mathbb{R} \rightarrow \mathbb{R}$ be a function, and let $L \in \mathbb{R}$. We say that the limit of $f$ at $\infty$ is $L$ if, given any $\epsilon>0$, there is a $G>0$ such that $|f(x)-L|<\epsilon$, whenever $x>G .$
<span class="blue">Def</span> : Let $f: \mathbb{R} \rightarrow \mathbb{R}$ be a function, and let $L \in \mathbb{R}$. We say that the limit of $f$ at $-\infty$ is $L$ if, given any $\epsilon>0$, there is a $G>0$ such that $|f(x)-L|<\epsilon$, whenever $x<-G .$

- We then write $\lim _{x \rightarrow \infty} f(x)=L$, or $\lim _{x \rightarrow-\infty} f(x)=L$, as the case may be.

<span class="yellow">Limits, left and right</span>

<span class="blue">Def</span> : Let $f:(a, b] \rightarrow \mathbb{R}$ be a function. Then a number $L \in \mathbb{R}$ is said to be left hand limit of $f$ at $b$, if $\forall\epsilon>0,\exists\delta>0$ such that
$$
0<b-x<\delta \implies|f(x)-L|<\epsilon,
$$
- We write this as $\lim _{x \rightarrow b^-} f(x)=L$.

<span class="blue">Def</span> : Let $f:[a, b) \rightarrow \mathbb{R}$ be a function. Then a number $L \in \mathbb{R}$ is said to be the right hand limit of $f$ at $a$ if $\forall \epsilon >0, \exists \delta >0$ such that
$$
0<x-a<\delta \implies |f(x)-L|<\epsilon,
$$
- We write this as $\lim _{x\rightarrow a^+} f(x) = L$

<span class="orange">The011</span> : Let $c\in(a,b)$, and let $f:(a,b)\textbackslash\{c\}\rightarrow \mathbb{R}$. Then $\lim _{x\rightarrow c}f(x)=L$ exists if and only if 
$$\lim _{x \rightarrow c+} f(x)=\lim _{x \rightarrow c-} f(x)=L$$

- A function $f:(a, b] \rightarrow \mathbb{R}$ is said to have a limit at $b$ if the left hand limit $\lim _{x \rightarrow c-} f(x)$ exists. Hence, $\lim _{x \rightarrow c} f(x)=\lim _{x \rightarrow c-} f(x)$
- A function $f:[a, b) \rightarrow \mathbb{R}$ is said to possess a limit at $a$ if the right hand $\operatorname{limit} \lim _{x \rightarrow c+} f(x)$ exists. Hence $\lim _{x \rightarrow c} f(x)=\lim _{x \rightarrow c+} f(x)$.

<span class="yellow">Limit implies boundedness</span>

<span class="orange">The012</span> : Let $f:(a, b) \backslash\{c\} \rightarrow \mathbb{R}$ be a function whose limit at $c \in[a, b]$ exists. Then ==>
- If $c \in(a, b)$ then there is some $\epsilon>0$ such that $f$ is bounded on $l_{1}:=(c-\epsilon, c+\epsilon) \backslash\{c\} \subseteq(a, b)$.
(Note that in case $f(c)$ is well defined, $f$ is bounded on the whole of $(c-\epsilon, c+\epsilon)$.)
- If $c=a$ then there is some $\epsilon>0$ such that $f$ is bounded on $l_{2}:=(a, a+\epsilon) \subseteq(a, b) .$
- If $c=b$ then there is some $\epsilon>0$ such that $f$ is bounded on $l_{3}:=(b-\epsilon, b) \subseteq(a, b) .$

<span class="yellow">Limit, of functions and that of sequences</span>
<span class="orange">The013</span> : Let $f:(a, b) \rightarrow \mathbb{R}$ be a function and $c \in(a, b)$. Then $f$ converges to $L$ at $c$ if and only if for any sequence $\left\{x_{n}\right\}$ converging to $c$, the sequence $\left\{f\left(x_{n}\right)\right\}$ converges to $L$.