backlink : [[MA actual]]

## Double Integrals
### Partition of rectangles
A **partition** P of a rectangle $R=[a,b]\times[c,d]$ is the Cartersian product of partitions $P_1$ of $[a,b]$ and $P_2$ of $[c,d]$.

Let 
$$P_1=\{x_0,x_1,x_2,...x_m\}, \text{with}\space a=x_0<x_1<x_2<...x_m=b \\
P_2=\{y_0,y_1,y_2,...y_n\}, \text{with}\space c=y_0<y_1<y_2<...y_m=d$$

and P be defined as
$$P=\{(x_i,y_j)\mid i\in \{0,1,...m\}, j\in \{0,1,...n\} \}$$

The points of P divide the rectangle R into $nm$ non-overlapping sub-rectangles denoted by
$$
R_{i j}:=\left[x_{i}, x_{i+1}\right] \times\left[y_{j}, y_{j+1}\right], \quad \forall i=0, \cdots m-1, \quad j=1, \cdots, n-1 . \\
\Delta_{i j}:=\left(x_{i+1}-x_{i}\right) \times\left(y_{j+1}-y_{j}\right)$$

$R=\cup_{i, j} R_{i j}$.

---
The **norm** of the partition P is defined as
$\|P\|:=\max \left\{\left(x_{i+1}-x_{i}\right),\left(y_{j+1}-y_{j}\right) \mid i=0, \cdots, m-1, \quad j=0, \cdots, n-1\right\} .$

**Question** : Why do we not define the norm by
$\max \left\{\left(x_{i+1}-x_{i}\right) \times\left(y_{j+1}-y_{j}\right) \mid i=0, \cdots, m-1, \quad j=0, \cdots, n-1\right\} ?$ #question 

---
### Darboux Integral
Let $f: R \rightarrow \mathbb{R}$ be a bounded function where $R$ is a rectangle. 

Let $m(f)=\inf \{f(x, y) \mid(x, y) \in R\},$ and $M(f)=\sup \{f(x, y) \mid(x, y) \in R\} .$ 

For all $i=0,1, \cdots, m-1, \quad j=0,1, \cdots, n-1$, let 
$$
m_{i j}(f):=\inf \left\{f(x, y) \mid(x, y) \in R_{i j}\right\} \hspace{4em}
M_{i j}(f):=\sup \left\{f(x, y) \mid(x, y) \in R_{i j}\right\} .
$$
And let Lower and Upper Double sum respectively be 
$$L(f, P):=\sum_{i=0}^{m-1} \sum_{j=0}^{n-1} m_{i j}(f) \Delta_{i j} \hspace{4em}
U(f, P):=\sum_{i=0}^{m-1} \sum_{j=0}^{n-1} M_{i j}(f) \Delta_{i j}$$

Note that for any partition $P$ of $R$
$$
m(f)(b-a)(d-c) \leq L(f, P) \leq U(f, P) \leq M(f)(b-a)(d-c).
$$

The Lower and Upper Darboux integral respectively is, 
$$L(f):=\sup \{L(f, P) \mid P \text{ is any partition of } R\} \\
U(f):=\inf \{U(f, P) \mid P \text{ is any partition of } R\}$$

---
#### Darboux's definition:
A bounded function $f: R \rightarrow \mathbb{R}$ is said to be Darboux integrable if $L(f)=U(f)$.  
In terms of $\epsilon-\delta$, we say $f$ is integrable *iff* $\forall\space\epsilon>0,\exists P_{\epsilon}$ of $R$ such that
$$
\left|U\left(f, P_{\epsilon}\right)-L\left(f, P_{\epsilon}\right)\right|<\epsilon .
$$
It is denoted by
$$
\iint_{R} f, \text { or } \iint_{R} f(x, y) d A, \text { or } \iint_{R} f(x, y) d x d y .
$$

---
### Riemann Integral
Let $P$ be any partition of a rectangle
$R=[a, b] \times[c, d]$. We define a tagged partition $(P, t)$ where
$$
t=\left\{t_{i j} \mid t_{i j} \in R_{i j}, \quad i=0,1, \ldots m-1, \quad j=0,1, \ldots n-1\right\} .
$$

Let $t_{i j}=\left(x_{i j}^{*}, y_{i j}^{*}\right)$.

The Riemann sum of $f$ associate to $(P, t)$ is defined by
$$
S(f, P, t)=\sum_{i=0}^{m-1} \sum_{j=0}^{n-1} f\left(t_{i j}\right) \Delta_{i j} \text { where, } \Delta_{i j}=\left(x_{i+1}-x_{i}\right)\left(y_{j+1}-y_{j}\right)
$$

#### Riemann's Definition
A bounded function $f: R \rightarrow \mathbb{R}$ is said to be Riemann integrable if $\exists S\in\mathbb{R}$ such that $\forall\space\epsilon>0, \exists\delta>0$ such that
$$
|S(f, P, t)-S|<\epsilon,
$$
for every tagged partition $(P, t)$ satisfying $\|P\|<\delta$.
- $S$ is the value of Riemann integral of $f$.

<span class="yellow">Basically, in Darboux sum, for each interval we took 2 rectangles involving the extreme values of the function, while in Riemann sum, we used a single rectangle with functional value at a point in each interval.</span>

---
**Examples**
1. The bivariate Dirichlet function over $[0,1] \times[0,1]$ is defined as follows.
	$$
	f(x, y):= \begin{cases}1 & \text { if both } x \text { and } y \text { are rational numbers, } \\ 0 & \text { otherwise. }\end{cases}
	$$
	This is not integrable over $[0,1] \times[0,1]$. Indeed, given any partition $P$, $L(f, P)=0$ and $U(f, P)=1$.
2. Let $f:[a,b]\rightarrow\mathbb{R}$ be a function, that is bounded and continuous at all but finitely many points of $[a,b]$. Then f is Riemann integrable on $[a,b]$.

---
<span class="orange">Theorem</span> : 
Let $R \subseteq \mathbb{R}^{2}$ be any rectangle and let $f: R \rightarrow \mathbb{R}$ be bounded. 
Then $f$ is Darboux integrable over $R$ **iff** it is Riemann integrable over $R$. 
	In this case, we simply say that $f: R \rightarrow \mathbb{R}$ is integrable on $R$.

<span class="orange">Theorem</span> :
Every continuous function $f: R \rightarrow \mathbb{R}$ is integrable.

---
### Regular partitions
For ease of calculation, we use regular partitions.

Here, we take $x_{0}=a$ and $y_{0}=c$, and for $i=0,1, \cdots, n-1, \quad j=0,1, \cdots, n-1$,
$$
x_{i+1}=x_{i}+\frac{b-a}{n}, \quad y_{j+1}=y_{j}+\frac{d-c}{n} .
$$

We take $t=\left\{t_{i j} \in R_{i j} \mid i, j \in\{0,1, \cdots, n-1\}\right\}$ any arbitrary tag. 
To check the integrability of a function $f$, it is enough to consider a sequence of regular partitions $P_{n}$ of $R$. #question

<span class="orange">Theorem</span> :
A bounded function $f: R \rightarrow \mathbb{R}$ is Riemann integrable if and only if the Riemann sum
$$
S\left(f, P_{n}, t\right)=\sum_{i=0}^{n-1} \sum_{j=0}^{n-1} f\left(t_{i j}\right) \Delta_{i j},
$$
tends to the same limit $S \in \mathbb{R}$ as $n \rightarrow \infty$, for any choice of tag $t$.

---
**Examples**
1. The function $f(x, y)=x^{2}+y^{2}$ is continuous on $R=[0,1] \times[0,1]$, hence integrable over $R$.
    Choose regular partition with subrectangles $[i / n,(i+1) / n] \times[j / n,(j+1) / n]$ and tag $t=\left\{\left(\frac{i}{n}, \frac{j}{n}\right) \mid i=0, \ldots n-1, j=0, \ldots, n-1\right\}$, so that the Riemann sum
    $$
    S\left(f, P_{n}, t\right)=\left(\sum_{i=0}^{n-1} \sum_{j=0}^{n-1}\left(\frac{i}{n}\right)^{2}+\left(\frac{j}{n}\right)^{2}\right) \frac{1}{n^{2}}=2/3 .
    $$

2. $f(x, y)=x y$ over the same rectangle $R=[0,1] \times[0,1]$, with the same regular partition and the same tags as before. The Riemann sum is
    $$
    S\left(f, P_{n}, t\right)=\sum_{i=0}^{n-1} \sum_{j=0}^{n-1}\left(\frac{i j}{n^{2}}\right) \frac{1}{n^{2}}=1/4 .
    $$

---
### Algebraic Properties of integrals over rectangles
Let $R:=[a, b] \times[c, d]$. Let $f$ and $g$ are integrable on $R$.
- If $f(x, y) \leq g(x, y)$ for all $(x, y) \in R$, then $\iint_{R} f \leq \iint_{R} g$.
- $|f|$ is integrable and $\left|\iint_{R} f\right| \leq \iint_{R}|f|$.
- The function $f . g$ is integrable.
- If $\frac{1}{f}$ is well defined and bounded on $R$, then $\frac{1}{f}$ is integrable on $R$.

---

### Fubini's theorem and lterated integrals
<span class="orange">Theorem</span>
Let $R:=[a, b] \times[c, d]$ and $f: R \rightarrow \mathbb{R}$ be integrable. Let $I$ denote the integral of $f$ on $R$.
1. If for each $x \in[a, b]$, the Riemann integral $\int_{c}^{d} f(x, y) d y$ exists, then the iterated integral $\int_{a}^{b}\left(\int_{c}^{d} f(x, y) d y\right) d x$ exists and is equal to $I$.
2. If for each $y \in[c, d]$, the Riemann integral $\int_{a}^{b} f(x, y) d x$ exists, then the iterated integral $\int_{c}^{d}\left(\int_{a}^{b} f(x, y) d x\right) d y$ exists and is equal to $I$.

As a consequence, if $f$ is integrable on $R$ and if both the above iterated integrals exist, then
$$
\int_{a}^{b}\left(\int_{c}^{d} f(x, y) d y\right) d x=I=\int_{c}^{d}\left(\int_{a}^{b} f(x, y) d x\right) d y .
$$

Here is the [[Proof of Fubini's Theorem]]

### Subtleties in Fubini's theorem - I
Here is an <span class="purple">Example</span> where both iterated integrals exist but are not equal, the function $f$ is not double integrable.
$$
R:=[0,1] \times[0,1], \quad f(x, y)= \begin{cases}\frac{\left(x^{2}-y^{2}\right)}{\left(x^{2}+y^{2}\right)^{2}}, & x \neq 0 \neq y, \\ 0, & x=0 \text { or } y=0 .\end{cases}
$$
We have
$$
\int_{0}^{1} \int_{0}^{1} f(x, y) d x d y=\int_{0}^{1} \frac{-1}{1+y^{2}} d y=\frac{-\pi}{4}
$$
and
$$
\int_{0}^{1} \int_{0}^{1} f(x, y) d y d x=\int_{0}^{1} \frac{1}{1+x^{2}} d x=\frac{\pi}{4}
$$

Hence, $f$ is not double-integrable in $R$

### Subtleties in Fubini's theorem - II
We will give examples of two functions $f, g$ with the following properties:
1. The function $g$ may be double integrable but the one dimensional integrals $\int_{c}^{d} g(x, y) d y$ may not exist.
2. Both the iterated integrals of $f$ exist and are equal, but $f$ is not double integrable.

The examples depend on [[Dyadic rationals]].

Consider the functions $f$ and $g$ on the rectangle $R=[0,1] \times[0,1]$ defined by:
1. For any integer $i \geq 0$, for any odd integer $j \in\left[0,2^{i}\right]$, for any integer $k \geq 0$, for any odd integer $\ell \in\left[0,2^{k}\right]$, define $f\left(j / 2^{i}, \ell / 2^{k}\right)=\delta_{i k}$ (here, $\delta_{i k}$ is the Kronecker delta, equal to one if $i=k$ and 0 if not) and $g\left(j / 2^{i}, \ell / 2^{k}\right)=1 / 2^{i}$; and
2. $\forall x, y \in[0,1]$, if either $x$ or $y$ is not a dyadic rational, define $f(x, y)=0$ and $g(x, y)=0$.
	$g$ is Riemann integrable on $R$ but, for any dyadic rational $x=i / 2^{j} \in[0,1]$, the Riemann integral $\int_{0}^{1} g(x, y) d y$ does not exist.
	For the function $f$, both the iterated integrals $\int_{0}^{1} \int_{0}^{1} f(x, y) d x d y$ and $\int_{0}^{1} \int_{0}^{1} f(x, y) d y d x$ exist and are equal to zero. However, $f$ is not Riemann integrable over $R$.

---
### Proposition.
Let $R$ be a rectangle in $\mathbb{R}^{2}$ and let $f: R \rightarrow \mathbb{R}$ be a continuous function. Then $f$ is integrable on $R$, and both iterated integrals of $f$ exist and are equal to the double integral of $f$ over $R$.

---
## Existence of integrals over rectangles
<span class="orange">Theorem</span>
If $f$ is bounded and monotonic in each of two variables, then $f$ is integrable on $R$.
<span class="purple">Example</span>: 
Let $f(x, y):=[x+y]$, for all $(x, y) \in R$, where $[u]$ means the greatest integer less than equal to $u$, for any $u \in \mathbb{R}$. Since $f$ is monotonic in each of two variables, $f$ is integrable on $R$.

---
<span class="yellow">Sets having MEASURE ZERO</span> : 
Let $A \subset \mathbb{R}^{n}$. We say $A$ has measure zero in $\mathbb{R}^{n}$ if for every $\epsilon>0$, there is a covering $Q_{1}, Q_{2}, \ldots$ of $A$ (means that $A\subset\sum_i^n{Q_i}$) by *countably* many rectangles such that
$$
\sum_{i=1}^{\infty} \operatorname{volume}\left(Q_{i}\right)<\epsilon \text {. }
$$
If this inequality holds, we often say that the total volume of the rectangles $Q_{1}, Q_{2}, \ldots$ is less than $\epsilon$.

<span class="yellow">Sets having CONTENT ZERO</span> : 
Let $A \subset \mathbb{R}^{n}$. We say $A$ has measure zero in $\mathbb{R}^{n}$ if for every $\epsilon>0$, there is a covering $Q_{1}, Q_{2}, \ldots$ of $A$ (means that $A\subset\sum_i^n{Q_i}$) by *finitely* many rectangles such that
$$
\sum_{i=1}^{\infty} \operatorname{volume}\left(Q_{i}\right)<\epsilon \text {. }
$$
If this inequality holds, we often say that the total volume of the rectangles $Q_{1}, Q_{2}, \ldots$ is less than $\epsilon$.

---
<span class="purple">Example</span>
1. Let $A=\{x_1,x_2,...x_n\}$, thus A has finite elements .
	Let $Q_i=(x_i-\frac{\epsilon}{4n},x_i+\frac{\epsilon}{4n})$, where $i=1,2,...n$
	$\text{volume}(Q_i)=\frac{\epsilon}{n}$, and $\sum\text{volume}(Q_i)=\frac{\epsilon}{2}<\epsilon$

2. Let $A=\mathbb{Q}$, thus $A$ is countable
	Thus, $A=\{x_k\}_{k=1}^{\infty}$
	Let $Q_i=(x_i-\frac{\epsilon}{2^{k+2}},x_i+\frac{\epsilon}{2^{k+2}})$
	$\text{volume}(Q_i)=\frac{\epsilon}{2^{k+1}}$, and $\sum\text{volume}(Q_i)=\frac{\epsilon}{2}<\epsilon$

3. Let $A=\mathbb{Q}\cap[0,1]$, thus $A$ is a subset of $\mathbb{Q}$, which has measure zero. Hence A also has measure 0. 

<span class=red>Note</span> : There is a catch here ! #question 

<span class="blue">Remark</span>
If $A$ is closed, bounded and has measure zero, then the collection $\left\{Q_{j}\right\}_{j}$ could be chosen to be finite. We say $A$ has content zero. Not all measure zero sets have content zero, for example, $[0,1] \cap \mathbb{Q}$ has measure zero but not content zero.

<span class="green">PROPERTIES</span>
- If $B \subset A$ and $A$ has measure zero in $\mathbb{R}^{n}$, then so does $B$.
- Let $A$ be the union of countable collection of sets $A_{1}, A_{2}, \ldots$. If each $A_{i}$ has measure zero in $\mathbb{R}^{n}$. In particular, every countable set has measure zero.
- If $Q$ is a rectangle in $\mathbb{R}^{n}$, then the boundary of $Q$ has measure zero in $\mathbb{R}^{n} .(Q$ has measure zero if and only if the area of $Q$ is zero.)
- Let $f:[a, b] \rightarrow \mathbb{R}$. The graph of $f$ is the subset
	$$
	\Gamma_{f}=\{(x, y): y=f(x)\}
	$$
	of $\mathbb{R}^{2} .$ If $f$ is continuous, then $\Gamma_{f}$ has measure zero in $\mathbb{R}^{2} .$

*Think about it...* 
Let $D \subset \mathbb{R}^{2}$ be a measure zero set. Suppose $0 \leq \theta<2 \pi$ and let $R_{\theta}$ be the rotation by angle $\theta$ i.e. $R_{\theta}(x, y)=(x \cos \theta-y \sin \theta, x \sin \theta+y \cos \theta)$. Is $R_{\theta}(D)$ a set of measure zero?

---
<span class="orange">Theorem</span>
Let $Q$ be a rectangle in $\mathbb{R}^{2}$, let $f: Q \rightarrow \mathbb{R}$ be a bounded function. Let $D$ be the set of points of $Q$ at which $f$ fails to be continuous. Then $f$ is integrable over $Q$ if and only if $D$ has measure zero in $\mathbb{R}^{2}$.

<span class="orange">Theorem</span>
Let $Q$ be a rectangle in $\mathbb{R}^{2}$, let $f: Q \rightarrow \mathbb{R}$ be integrable. Let $E$ be the set of points of $Q$ where $f$ is nonzero. If $E$ has measure zero, then $\iint_{Q} f=0$.

<span class="purple">Example</span>:
Let $R:=[-1,1] \times[-1,1]$,
$$
f(x, y)=\left\{\begin{array}{l}
\frac{x y}{\left(x^{2}+y^{2}\right)}, \quad(x, y) \in R, \quad(x, y) \neq(0,0), \\
0, \quad(x, y)=(0,0) .
\end{array}\right.
$$
Since $|f| \leq 1 / 2$, and $f$ is continuous on the complement of the origin, it is integrable over $R$.

<span class="purple">Example</span>: 
Let $R=[0,1] \times[0,1]$ and
$$
f(x, y)= \begin{cases}1, & 0 \leq x<y, \quad y \in[0,1] \\ 0, & y \leq x \leq 1, \quad y \in[0,1]\end{cases}
$$
The set of discontinuities of $f$ is on the diagonal line, which is of measure zero as it is the graph of the function $y=x$. Therefore $f$ is integrable over $R$.

---
### Bivariate Thomae function: 
$f:[0,1] \times[0,1] \rightarrow \mathbb{R}$ is defined by $f(x, y)=\left\{\begin{array}{ll}1, & \text { if } x=0, \quad y \in \mathbb{Q} \cap[0,1], \\ \frac{1}{q}, & x, y \in \mathbb{Q} \cap[0,1] \text { and } x=\frac{p}{q}, \\ 0, & \text { otherwise. }\end{array} p, q \in \mathbb{N}\right.$ are relatively prime,

Then $f$ is continuous at $(x, y)$ if $x$ is irrational, so the points of discontinuities is contained in the measure zero set $\mathbb{Q} \times \mathbb{R}$. This function is integrable on $R=[0,1] \times[0,1]$, and $\iint_{R} f=0$.

---
## [[Integrals over any bounded region in R2]]
