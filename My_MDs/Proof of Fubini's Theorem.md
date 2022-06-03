# Proof of Fubini's Theorem
Since $f$ is double integrable over $R$, for any given $\epsilon>0$, there exists a partition $P_{\epsilon}=\left\{\left(x_{i}, y_{j}\right) \mid i=0,1, \cdots k-1, \quad j=0, \cdots n-1\right\}$ of $R$ such that
$$
U\left(f, P_{\epsilon}\right)-L\left(f, P_{\epsilon}\right)<\epsilon .
$$
Assume for each fixed $x \in[a, b]$, the Riemann integral $\int_{c}^{d} f(x, y) d y$ exists. Define
$$
A(x):=\int_{c}^{d} f(x, y) d y, \quad \forall x \in[a, b] .
$$
**Claim** : The function $A$ is integrable over $[a, b]$. 
Note that $m(f)(d-c) \leq A(x) \leq M(f)(d-c)$ for all $x \in[a, b]$ and hence $A$ is bounded. 
Also by domain additivity, $A(x)=\sum_{j=0}^{n-1} \int_{y_{j}}^{y_{j+1}} f(x, y) d y$, for all $x \in[a, b]$.

Thus for each fixed $i \in\{0, \cdots k-1\}$, for $x \in\left[x_{i}, x_{i+1}\right]$, we obtain
$$
\sum_{j=0}^{n-1} m_{i j}(f)\left(y_{j+1}-y_{j}\right) \leq A(x) \leq \sum_{j=0}^{n-1} M_{i j}(f)\left(y_{j+1}-y_{j}\right) .
$$

Denoting $m_{i}(A):=\inf \left\{A(x) \mid x \in\left[x_{i}, x_{i+1}\right]\right\}$ and $M_{i}(A):=\sup \left\{A(x) \mid x \in\left[x_{i}, x_{i+1}\right]\right\}$, we have
$$
\sum_{j=0}^{n-1} m_{i j}(f)\left(y_{j+1}-y_{j}\right) \leq m_{i}(A) \leq M_{i}(A) \leq \sum_{j=0}^{n-1} M_{i j}(f)\left(y_{j+1}-y_{j}\right) .
$$
Multiplying by $\left(x_{i+1}-x_{i}\right)$ and summing over $i=0, \ldots, k-1$, we obtain
$$
L\left(f, P_{\epsilon}\right) \leq \sum_{i=0}^{k-1} m_{i}(A)\left(x_{i+1}-x_{i}\right) \leq \sum_{i=0}^{k-1} M_{i}(A)\left(x_{i+1}-x_{i}\right) \leq U\left(f, P_{\epsilon}\right) .
$$
and it yields that there exists a partition $P_{1}:=\left\{x_{0}, \cdots, x_{k-1}\right\}$ of $[a, b]$ such that
$$
U\left(A, P_{1}\right)-L\left(A, P_{1}\right)<\epsilon
$$
Thus the function of $A$ is integrable and
$$
\iint_{R} f d x d y=\int_{a}^{b} A(x) d x=\int_{a}^{b}\left(\int_{c}^{d} f(x, y) d y\right) d x .
$$

#pending 
![](https://i.imgur.com/praXYlm.png)
