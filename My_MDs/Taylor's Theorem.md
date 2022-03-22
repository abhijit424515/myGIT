backlink : [[Properties of derivative]]

---
# Taylor's theorem
### Taylor's polynomials
Given a function $f(x)$ which is $n$ times differentiable at some point $x_{0}$ in an interval $I$, we can associate to it a family of polynomials $P_{0}(x), P_{1}(x), \ldots P_{n}(x)$ called the Taylor polynomials of degrees $0,1, \ldots n$ at $x_{0}$ as follows.
Let $P_{0}(x)=f\left(x_{0}\right)$,
$$
\begin{gathered}
P_{1}(x)=f\left(x_{0}\right)+f^{(1)}\left(x_{0}\right)\left(x-x_{0}\right) \\
P_{2}(x)=f\left(x_{0}\right)+f^{(1)}\left(x_{0}\right)\left(x-x_{0}\right)+\frac{f^{(2)}\left(x_{0}\right)}{2 !}\left(x-x_{0}\right)^{2}
\end{gathered}
$$
We can continue in this way to define
$$
P_{n}(x)=f\left(x_{0}\right)+f^{(1)}\left(x_{0}\right)\left(x-x_{0}\right)+\frac{f^{(2)}\left(x_{0}\right)}{2 !}\left(x-x_{0}\right)^{2}+\ldots+\frac{f^{(n)}\left(x_{0}\right)}{n !}\left(x-x_{0}\right)^{n} .
$$

### Taylor's theorem
For any differentiable function $f\in C^{k}(I)$, we know that $\frac{f(x)-f(x_0)-f^{\prime}(c_1)(x-x_0)}{x-x_0} = O_1(h)$, where $x,x_0\in I, x<x_0, c_1\in(x,x_0)$, and $O_1(h)$ is the remainder function which tends to $0$ as $x$ approaches $x_0$.

Consider $g(t) = f(x) - f(t) - (x-t)f^{\prime}(t)$
Now, let $$

#pending 