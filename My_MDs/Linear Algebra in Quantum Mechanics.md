backlink : [[Quantum Science]]

# Linear Algebra in Quantum Mechanics
Quantum theory is based on two constructs: wave functions and operators. 
The state of a system is represented by its wave function $\Psi$, while observables are represented by operators $\hat{X}$. 
Mathematically, wave functions satisfy the defining conditions for abstract vectors, and operators act on them as linear transformations. 
So the natural language of quantum mechanics is **linear algebra**.

## Definitions and Notations
### Observables
An **observable** is a physical quantity that can be measured.

### Wavefunctions in the Vector form
Since any wave function $\Psi(x)$ can be represented as a linear combination of it's **energy eigenfunctions** as $\Psi(x) = \sum_n{C_n \phi_n(x)}e^{-i E_n t / \hbar}$, ($E_n$ being the respective energy eigenvalue), in the vector form we can denote it as,
$$
|\Psi\rangle=\left(\begin{array}{c}
C_{1} \\
C_{2} \\
\vdots \\
C_{n}
\end{array}\right)
$$

---
### Hilbert Space
The **Hilbert space** is the vector space of all square-integrable functions $f(x)$ such that $\int_{a}^{b}|f(x)|^{2} d x<\infty \text {, }$. 
In general, the vector space is too big for our purposes, so we can restrict our quantum mechanical calculations to the Hilbert space. Wave functions satisfy the conditions for their use in the Hilbert space (due to Born's statistical interpretation).

### Inner product 
The **inner product** $\langle\Psi_1\mid\Psi_2\rangle$ of two wave functions $\Psi_1$ and $\Psi_2$ is defined as
$$
\langle\Psi_1 \mid \Psi_2\rangle = C_{1}^{*} D_{1}+C_{2}^{*} D_{2}+\cdots+C_{n}^{*} D_{n} = \int_{-\infty}^{+\infty}{\Psi_1^{*} \Psi_2 dx}
$$
, where $C_i$ and $D_i$ are the coefficients of the i-th energy eigenfunctions of $\Psi_1$ and $\Psi_2$ respectively.

If $\Psi_1$ and $\Psi_2$ are both in Hilbert space, we can use the Cauchy-Schwarz integral inequality to say that the inner product is guaranteed to exist.
$$
\left|\int_{a}^{b} \Psi_1^{*}(x) \Psi_2(x) d x\right| \leq \sqrt{\int_{a}^{b}|\Psi_1(x)|^{2} d x \int_{a}^{b}|\Psi_2(x)|^{2} d x} .
$$

- $\langle \Psi_2 \mid \Psi_1 \rangle=\langle \Psi_1 \mid \Psi_2\rangle^{*}$
- $\langle \Psi_1 \mid \Psi_1 \rangle = \int_{-\infty}^{+\infty}{|\Psi_1(x)|^2 dx}$

### Normalisation and Orthogonality
A wavefunction $\Psi$ is said to be **normalised** if $\langle \Psi \mid \Psi \rangle=1$.
Two wavefunctions $\Psi_1$ and $\Psi_2$ are said to be **orthogonal** if $\langle \Psi_1 \mid \Psi_2 \rangle=0$.

A **set** of wavefunctions $\Psi = \{\Psi_n\}$ is **orthonormal** if the wavefunctions are normalised, and are mutually orthogonal.
- For an orthonormal set of wavefunctions, the coefficients are given by Fourier's trick
$$
C_n = \langle \Psi_n \mid \Psi \rangle
$$

---
### Hermitian operators
For any observable $Q(x,p)$, $\langle{Q}\rangle = \langle \Psi \mid \hat{Q} \Psi \rangle$, where $\hat{Q}$ represents the respective operator for the observable. 
Since $Q$ is real, $\langle{Q}\rangle$ = $\langle{Q}\rangle^{*}$

Hence, for any wave function $\Psi$, all operators representing **observables** have a very special property that 
$$
\langle \Psi_1 \mid \hat{Q} \Psi_2 \rangle = \langle \hat{Q}\Psi_1 \mid \Psi_2 \rangle
$$

- We call such operators **hermitian operators**.
- **Observables** are represented by **hermitian operators**.

==A Hermitian **matrix** is a complex square matrix that is equal to its own **conjugate transpose**.==

### Hermitian conjugate
The hermitian conjugate/adjoint of an operator $\hat{Q}$ is the operator $\hat{Q}^{\dagger}$, such that for all $f$ and $g$,  
$$
\langle f \mid \hat{Q} g\rangle = \langle\hat{Q}^{\dagger} f \mid g \rangle
$$

- Hence, a **hermitian operator** $\hat{Z} = \hat{Z^{\dagger}}$

#questions