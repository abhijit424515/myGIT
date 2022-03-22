# Time-Dependent Schroedinger Equation
Early quantum ideas were very loosely connected. Furthur development in Quantum Physics connected the dots.

**Heisenberg** developed the first version of quantum mechanics based on the concept of non-commuting observables. He presented these quantities using **matrices** and obtained the energy levels of hydrogen atom (the same problem solved by Bohr earlier).

Later, **Schroedinger** independently developed a differential equation obeyed by a curious object called ψ. Using this equation, he also solved the problem of hydrogen atom and got the correct energy levels.

Initially there was a lot of confusion as to why two different and unrelated techniques work equally well. In a year or so, Schroedinger showed the mathematical equivalence of his **wave mechanics** and Heisenberg’s **matrix mechanics**.

deBroglie said that a matter particle should have a wavelength. But what is ”waving” is never mentioned. Whereas in all the classical waves, there is a physical, observable quantity that is varying with both space and time. 

Schroedinger also had no idea of what it is. He called it a wave function and represented it by the Greek letter $\Psi(x, t)$. He derived the **Schroedinger equations**, which could describe change of $\Psi(x,t)$with time, and which could also explain Planck hypothesis, Einstein’s photon hypothesis and deBroglie hypothesis. His hydrogen atom differs from Bohr atom in some important details but they both have the feature that angular momentum is quantized.

### Derivation
Let one of the component wave representing a free particle be given by $\Psi(x,t) = A e^{i(kx-\omega t)}$
, where $k = p/\hbar$, and $\omega = E/\hbar$
$$\frac{\partial{\Psi}}{\partial{t}} = -i\omega \Psi \qquad \text{and} \qquad \frac{\partial^2{\Psi}}{\partial{x^2}} = -k^2 \Psi$$
It can be observed that 
$$i\hbar \frac{\partial{\Psi}}{\partial{t}} = -\frac{\hbar^2}{2m} \frac{\partial^2{\Psi}}{\partial{x^2}}$$
This is the Schroedinger equation for a free particle.

---
It can also be observed that 
$$-i\hbar \frac{\partial \Psi}{\partial x} = p \Psi$$
and 
$$-i\hbar \frac{\partial \Psi}{\partial t} = E \Psi$$

Hence, we define operators 
$\hat{p} = -i\hbar \frac{\partial}{\partial x}$
$\hat{E} = -i\hbar \frac{\partial}{\partial t}$

---
We know that a finite wave packet is a superposition of an infinite number of waves of different wave numbers and wave speeds. Let us consider such a superposition
$$
\psi(x, t)=\int A(k) e^{i(k x-\omega(k) t)} d k .
$$
Substituting this in Schroedinger equation for a free particle, we get
$$
\int[\hbar \omega(k)] A(k) e^{i(k x-\omega(k) t)} d k=\int\left[\frac{\hbar^{2} k^{2}}{2 m}\right] A(k) e^{i(k x-\omega(k) t)} d k .
$$
This can be re-written as
$$
\int\left[\hbar \omega(k)-\frac{\hbar^{2} k^{2}}{2 m}\right] A(k) e^{i(k x-\omega(k) t)} d k=0 .
$$
It can be shown that the LHS is zero only if the quantity in the square brackets is zero. That is, if
$$
\hbar \omega(k)=\frac{\hbar^{2} k^{2}}{2 m} .
$$
Thus, if we construct a wave packet such that each component wave of this packet satisfies the free particle energy-momentum relation, then the wave packet satisfies free particle Schroedinger equation.

This concept can be extended to particles moving under the influence of a force also. We will assume that the force is such that it can be written as $F=-d V(x) / d x$. Then the energy of the particle is given by
$$
E=\frac{p^{2}}{2 m}+V(x)
$$
and the corresponding **Schroedinger equation** is
$$
i \hbar \frac{\partial \psi(x, t)}{\partial t}=-\frac{\hbar^{2}}{2 m} \frac{\partial^{2} \psi(x, t)}{\partial x^{2}}+V(x) \psi(x, t) .
$$

---