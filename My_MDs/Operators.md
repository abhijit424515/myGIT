# Operators
### Commonly used operators
$\hat{X} = x$
$\hat{p} = -i\hbar \frac{\partial}{\partial x}$
$\hat{E} = -i\hbar \frac{\partial}{\partial t}$

---
An **operator** $\hat{T}$ is represented by a matrix, which acts on a wavefunction as
$$
\hat{T}|\alpha\rangle =\left(\begin{array}{cccc}
t_{11} & t_{12} & \cdots & t_{1 n} \\
t_{21} & t_{22} & \cdots & t_{2 n} \\
\vdots & \vdots & & \vdots \\
t_{n 1} & t_{n 2} & \cdots & t_{n n}
\end{array}\right)\left(\begin{array}{c}
C_{1} \\
C_{2} \\
\vdots \\
C_{n}
\end{array}\right)
$$

### Identity Operator
The operator $\mathbb{I}$, where $\mathbb{I}|\Psi\rangle = |\Psi\rangle$, is called the identity operator 

### Unitary Operators
An operator $\hat{U}$ is said to be a **unitary operator** if $\hat{U} \hat{U}^{*} = \mathbb{I}$

### Linear Operators
An operator $\hat{O}$ is said to be a **linear operator** if
$$
\hat{O}(\Psi_1 + \Psi_2) = \hat{O}(\Psi_1) + \hat{O}(\Psi_2)
$$

- ==All the operators in Quantum Mechanics, which represent physical observables, are linear operators.== 

We will use matrix notation to represent vectors.   

### Commutativity
If $\langle \Psi_1 \mid \Psi_2 \rangle = \langle \Psi_2 \mid \Psi_1 \rangle$, then $\Psi_1$ and $\Psi_2$ are said to be commutative.

## Commutator
We define the commutator of $\hat{A}$ and $\hat{B}$ as,
$$
[\hat{A}, \hat{B}] = (\hat{A}\hat{B} - \hat{B}\hat{A})
$$

- It can be shown that $[\hat{X}, \hat{P}] = i\hbar I$, using which we can derive the Heisenburg's Uncertainity Relation
- ==Two commuting operators have simultaneous eigenfunctions.==
    Proof ->
    If $\hat{A}$ and $\hat{B}$ commute and $\Psi$ is an eigenfunction of $\hat{A}$ and $\hat{B}$ with eigenvalues a and b respectively, then
    $$
    \hat{B}\hat{A}\Psi = b\hat{A}\Psi
    $$
    Thus $\hat{A}\Psi$ is an eigenfunction of $\hat{B}$ with eigenvalue b, which means that when $\hat{A}$ operates on $\Psi$, it cannot change $\Psi$. At most, $\hat{A}$ operating on $\Psi$ can produce a constant times $\Psi$.

---