backlink : [[Quantum Science]]

---
# Free Particle
Using TISE, 
$$\hat{H} \Psi=E \Psi$$
For a free particle, $\hat{V}=0$. Hence, 
$$-\frac{\hbar^2}{2m} \frac{\partial^2 \Psi}{\partial{x^2}} = E \Psi$$
Solving it gives 
$$\Psi(x) = Asin(kx) + Bcos(kx)$$
, where $k=\pm\sqrt{\frac{2mE}{\hbar^2}}$, and A,B can be complex or real.

However, it can be observed that $[\hat{p},\hat{H}]=0$
So, both operators have simultaneous eigenfunctions
Thus, 
$$
\begin{aligned}
\hat{p}\Psi&=-i\hbar.\frac{\partial \Psi}{\partial x}=\lambda\Psi \\
\lambda&=i\hbar k\frac{B\sin(kx)-A\cos(kx)}{A\sin(kx)+B\cos(kx)}
\end{aligned}
$$
Since $\lambda$ is real, we obtain $A=iB$
Hence, $\Psi(x)=B e^{ikx}$, for a free particle

Considering the time-dependence function, 
$$\Psi(x,t)=B e^{i(kx-Et/\hbar)}$$

**Note** : k being both negative and positive can also be interpreted as the same eigenvalue for any sign of k, and thus we have 2 degenerate energy levels.

### Now comes the tricky part : Normalization
To get mathematically sensible answers, we consider two ways :
1. Box normalization
	Instead of integrating from $-\infty$ to $+\infty$, we use -L to +L, and we use a value of L much larger than the scale of interest in the problem.
2. Delta-function normalization
	Consider the equation 
	$$
	\int_{-\infty}^{+\infty}{\psi^*(k'x)\psi(kx).dx}=\int_{-\infty}^{+\infty}{|C|^2e^{i(k-k')}.dx}=\delta(k-k')
	$$
The delta function $\delta$ is zero if $k\neq k'$, and infinite if $k=k'$.
This definition given by Dirac gave rise to consistent results in quantum mechanics.

---
## Particle in a 1D box
Consider 
$$
V(x)=\left\{\begin{array}{rr}
\infty & x<0 \\
0 & 0 \leq x \leq L \\
\infty & x>L
\end{array}\right.
$$
So, the particle is restricted in $0\leq x\leq L$
So, in this "box", $\Psi(x) = Asin(kx) + Bcos(kx)$

But the wavefunction must be normalised and continuous.
Hence, we finally obtain,
$$\Psi_n(x)=\sqrt{\frac{2}{L}}sin(\frac{n\pi x}{L}), \space\text{for }x\in[0,L]$$, where $n\in\mathbb{Z}\backslash\{0\}$
(n cannot be zero, since then the wavefunction will be zero everywhere)

Checking orthogonality of these wavefunctions, 
$$\langle \Psi_{n_1} \mid \Psi_{n_2} \rangle = 0, \text{where } n_1,n_2\in\mathbb{Z}\backslash\{0\}, n_1\neq n_2$$
We can see that this holds true for the above case.

<span class="yellow">Note</span> : It can be observed than $\Psi$ is continuous but not differentiable at $x=L$. 
<span class="yellow">Note : </span>For the points $x=0 \space\text{and}\space L,$ since the derivative does not exist, the 2nd derivative diverges (approximation of V as infinite). Still, the energy of the particle remains finite since potential energy also diverges, and cancels it out.

---
### Properties of Energy eigenstates
1. The odd states are even under the transformation $(x \rightarrow L-x)$
2. States with high values of n are practically classical states
3. Any arbitrary wavefunction can be written as a linear combination of these wavefunctions.

---
## Meaning of Eigenvalues and Eigenstates
• Suppose the particle is in the ground state of the infinite potential well.
$$ψ(x, t) = ϕ_1(x) e^{\frac{-iE_1t}{\hbar}}$$
1. I do an experiment where I measure the energy of the particle. What result do I get? 
	Since the particle is in the ground state, my measurement gives the result E1.

2. What happens to the particle, after I have made the measurement? 
	In this case, nothing. Why? 
	An energy measurement makes the wave function collapse into one of the energy eigenstates. Since the original state is an energy
	eigenstate, it remains in the same state after the energy measurement.

3. Once again I start with the particle in the ground state, but this time I measure its position and get the value x = L/2. What happens to particle after this measurement?
	The measurement changes the wave function of the particle from $ϕ_1(x)$ into a wave function which is strongly peaked at x = L/2. The mod-square of this wave function is approximately the Dirac delta function δ(x − L/2).

	<span class="yellow">Note</span> : This is possible do so because the the energy eigenfunctions form a complete set. Because of this completeness property, any arbitrary wave function, which vanishes at x = 0 and at x = L, can be written as a superposition (or linear combination) of the energy eigenfunctions. This is true not only for the infinite square well potential but for any potential.

4. Immediately after measuring the position and getting the answer x=L/2, I measure the energy of the particle. What answer do I get?
	Energy measurement can only probe the energy and it collapses the wave function into one of the energy eigenstaes.
	Before the energy measurement, the particle is in the state $\psi(x)=\sum_n{c_n \phi_n(x)}$

	For a particle with this wave function, the amplitude of finding the particle in the energy eigenstate $\phi_m(x)$ is given by
	The probability of finding it in the energy eigenstate $ϕ_m(x)$ is $|c_m|^2$.

5. In the above example, I said that my measurement gave the result x = L/2. But $ϕ_n(x = L/2) = 0$ for all even n.
	Therefore, in the superposition, the coefficients $c_n = 0$ for all even n, because for these wave functions the probability of finding the particle in the neighbourhood of L/2 is zero.

---
**Note** : Here is a calculation to show that a quantum particle behaves like a classical particle at large values of n.
Let us make a contrast between classical vs quantum dynamics of a particle in a box. 
If classical particle is moving back and forth between two impenetrable walls, one at x = 0 and one at x = L, we expect that the probability of finding the particle in any given length ℓ < L, will be ℓ/L. 
So, the probability of finding it between the two points, x = L/4 and x = 3L/4 (that is in the middle half of the box) is 1/2. 
	
But, for a quantum particle, bound in an infinite potential well, this probability is much higher. We see that
$$
\begin{aligned}
P_n &= \frac{2}{L}\int_{L/4}^{3L/4}{\sin^2{\frac{n \pi x}{L}}.dx} \\
&=\frac{1}{2} - \frac{1}{2n\pi}.[\sin(3n\pi/2)-\sin(n\pi/2)]
\end{aligned}
$$
	
---
### Transition between the quantized states
For n = odd, $\Psi$ is symmetric (POS)
For n = even, $\Psi$ is symmetric (COS)

We define $\mu = ex$, $e$ being a constant

Transition from $n_1$ to $n_2$ is possible if the **transition moment integral**,   
$$\langle \Psi_{n_1}\mid \mu\mid \Psi_{n_2}\rangle \neq 0$$
Hence, if $n_1$ is symmetric, $n_2$ must be antisymmetric, and vice-versa.
Hence, only odd to even, or even to odd transitions are allowed.

---
**Examples** :
1. ![[Pasted image 20220124195616.png|600]]
2. On increasing length of conjugated chain, the calculated value diverges from the actual value

**Note** : Although the *probability density* at a point x may be zero, the probability in a thin strip dx is non-zero.  

---
**Q**. Using eigenvalues, show that $\langle p_x\rangle = 0$
$$
\langle p_x \rangle=\frac{-2i\hbar n\pi}{L^2}\int_0^L{\sin\bigg(\frac{n\pi}{L}\bigg).\cos\bigg(\frac{n\pi}{L}\bigg).dx}=0
$$

---
### Particle in a 2D box
![[Pasted image 20220124210827.png]]

![[Pasted image 20220124210847.png]]

![[Pasted image 20220124211723.png]]

---
### Particle in a 3D box
![[Pasted image 20220124211739.png]]

---
