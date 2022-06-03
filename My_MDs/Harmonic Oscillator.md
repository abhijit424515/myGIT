# Harmonic Oscillator
Considering TISE, 
$$
\bigg(-\frac{\hbar^2}{2m}\frac{\partial^2}{\partial x^2} + \frac{1}{2}kx^2\bigg)\psi(x)=E\psi(x)
$$
Using $\omega^2=k/m$, 
$$
\frac{\partial^2\psi}{\partial x^2} = \frac{2m}{\hbar^2}\bigg(\frac{1}{2}m\omega^2-E \bigg)
$$
Simplest guess $\rightarrow$ Gaussian form
Let's try $\psi(x)=C_0.e^{-\alpha x^2}$
This satisfies the equation, and we obtain $\alpha=\frac{m\omega}{2\hbar}$, and $E=\frac{1}{2}\hbar\omega$

Here is the general form =>

$$
\psi_n(x)=\frac{1}{\sqrt{2^n.n!}}\bigg(\frac{m\omega}{\pi\hbar}\bigg)^{1/4}e^{-\frac{m\omega x^2}{2\hbar}}H_n\bigg(\sqrt{\frac{m\omega}{\hbar}}x\bigg)
$$
, where
$$
H_n(z)=(-1)^n e^{z^2}\frac{d^n}{dz^n}(e^{-z^2})
$$
are the Hermite polynomials. 

For the general form, we obtain =>
$$
E_n = (n+1/2)\hbar\omega
$$

![|240](https://i.imgur.com/cNskFG7.png) ![|200](https://i.imgur.com/luTtvL6.png)

---
