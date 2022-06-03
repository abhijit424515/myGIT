backlink : [[Quantum Science]]

## Wave functions
Considering de Broglie's hypothesis, and the subsequent experimental observations which imply the dual nature of matter, we can't consider Newton's laws for finding out the state of particles on the quantum scale. 
Hence, considering another approach, we can "assign" a wave function $\Psi$ to any particle. 
Then, we can use the Schrodinger equation, 
$$
\left[-\frac{\hbar^{2}}{2 m} \nabla^{2}+V\right] \Psi=i \hbar \frac{\partial \Psi}{\partial t}
$$
which governs the state of particles on the quantum scale.
(Derived later)
### What does $\Psi$ actually mean? Also, how can a wave function, which is spread out in space, represent a particle, which is localised?
Born's statistical representation says that $|\Psi(x,t)|^2$ represents the probability of finding a particle at a point x at time t.
This also implies that $\int_{-\infty}^{+\infty}|\Psi(x, t)|^{2} dx = 1$

Hence, this interpretation also introduces an **indeterminancy** about the particle's state, which is an inherent nature of the particle and not bound by experimental finesse. 

Rather, it can be said that **finding** out the state of a particle alters it's wave function, and so **compels** the particle to assume a definite state, and otherwise the state of the particle **does not** have any specific value.

However, for an accurate measurement, we need to take multiple readings of the state of the particle. So if in the first measurement the particle was "observed" to be in a state X, then the first measurement collapsed the wave function elsewhere, while peaks it at the state X. This way, the first measurement creates a statistical weight to the observed value, and so the subsequent measurements will be biased accordingly. 

### Constraints on $\Psi$
 The constraints on energy eigenfunctions are :
1. The probability of finding the particle in the region $x ± dx/2$ has to be unique, which means $\Psi(x)$ has to be single valued.
2. Since $E$ is finite, TDSE implies that the second derivative $\frac{\partial^2{\Psi(x)}}{\partial{x^2}}$ is finite for all x. This implies that the first derivative $\frac{\partial{\Psi(x)}}{\partial{x}}$ also must exist. This, in turn, means that $\Psi(x)$ must be continuous and differentiable.
3. The wave function must be finite for all x and must vanish as $x → ±∞$.
4. The integral $\int_{-\infty}^{+\infty}{|\Psi(x)|^2 dx}$ must be finite, OR the wave function should be normalizable.

### Normalisation of $\Psi$
As we know that for any wavefunction $\Psi(x,t)$ representing a particle, $\int_{-\infty}^{+\infty}|\Psi(x, t)|^{2} dx = 1$.
However, is it necessary that every solution of the Schroedinger equation representing a particle will satisfy the above equation ?
Well, if $\Psi(x,t)$ satisfies the Schroedinger equation, then $A\Psi(x,t)$ also satisfies it, A being some complex constant. We can choose an appropriate value of A so that it can satisfy the above equation. This is known as **normalisation of $\Psi$**.

However, will it always work out ?
There can be several possibillities ==>
1. The integral is infinite -> No value of A can satisfy the above equation
2. The integral is 0 -> No value of A can satisfy the above equation
3. The integral is finite -> We can choose an A to satisfy the above equation

We can thus conclude that wavefunctions that follow the first 2 possiblities are non-normalisable, and so CANNOT represent particles.

**Wait!** How do we know that once a wave function is normalised, it will stay normalised as time goes on and $\Psi$ evolves ?
We cannot make A = A(t), since A was taken to be a constant, and can be used in Schroedinger only if A is a constant.

However, luckily the [[Schroedinger equation preserves the normalisation of wavefunctions]]

#questions

### Expectation value
In a general measurement, we know that in the first measurement, the wave function is altered, and thus creates a bias for subsequent measurements. 
In contrast to this, we define the expectation value of any quantity as the average of measurements on an ensemble of identically-prepared systems. 

To find the expectation value,
1. We identify a suitable operator $\mathcal{O}$ which corresponds to the physical observable.
2. We calculate the expectation value of the physical observable by calculating
    $$
    \langle\mathcal{O}(t)\rangle=\int_{-\infty}^{\infty} \psi^{*}(x, t) \mathcal{O} \psi(x, t) d x .
    $$

---
Let us consider the expectation value $<x>$ of x.
$$
<x> = \int_{-\infty}^{+\infty}{x|\Psi(x,t)|^2dx}
$$

Now, the expectation value of velocity $<v>$ of v (which is not the same as velocity of the particle) is,
$$
\frac{d\langle x\rangle}{d t}=\int x \frac{\partial}{\partial t}|\Psi|^{2} d x=\frac{i \hbar}{2 m} \int x \frac{\partial}{\partial x}\left(\Psi^{*} \frac{\partial \Psi}{\partial x}-\frac{\partial \Psi^{*}}{\partial x} \Psi\right) d x
$$
This expression can be simplified using integration-by-parts
$$
\frac{d\langle x\rangle}{d t}=-\frac{i \hbar}{2 m} \int\left(\Psi^{*} \frac{\partial \Psi}{\partial x}-\frac{\partial \Psi^{*}}{\partial x} \Psi\right) d x
$$
(I used the fact that $\partial x / \partial x=1$, and threw away the boundary term, on the ground that $\Psi$ goes to zero at ( $\pm$ ) infinity.) Performing another integration-by-parts, on the second term, we conclude:
$$
\frac{d\langle x\rangle}{d t}=-\frac{i \hbar}{m} \int \Psi^{*} \frac{\partial \Psi}{\partial x} d x .
$$

Although not proved here, it will suffice to postulate that the expectation value of the velocity is equal to the derivative of the expectation value of position.

It is customary to work with momentum instead, so $\frac{d\langle x\rangle}{d t}=-{i \hbar} \int \Psi^{*}{\frac{\partial \Psi}{\partial x} dx}$

Rewriting $<x>$ and $<p>$ in another way, i.e. 
$$
<x> = \int{\Psi^{*}[x]\Psi dx}
$$
$$
<p> = \int{\Psi^{*}[-i\hbar(\partial{}/\partial{x})]\Psi dx}
$$

On analogous terms, we say that $\hat{x}$ (operator x) represents position of the particle, while $\hat{p}$ (operator p) represents the momentum.
Hence, $\hat{x}\Psi = x\Psi$, and $\hat{p}\Psi = -i\hbar(\partial{\Psi}/\partial{x})$

Ex. Let T denote the kinetic energy of the particle, given by $T = p^2/2m$
$$
<T> = -\frac{\hbar^2}{2m} \int{\Psi^{*} \frac{\partial^2{\Psi}}{\partial{x^2}} dx}
$$

#questions 

---