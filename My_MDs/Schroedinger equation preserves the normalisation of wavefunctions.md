# Schroedinger equation preserves the normalisation of wavefunctions
We need to find ->
$$
\frac{d}{d t} \int_{-\infty}^{+\infty}|\Psi(x, t)|^{2} d x=\int_{-\infty}^{+\infty} \frac{\partial}{\partial t}|\Psi(x, t)|^{2} d x
$$
$$
\frac{\partial}{\partial t}|\Psi|^{2}=\frac{\partial}{\partial t}\left(\Psi^{*} \Psi\right)=\Psi^{*} \frac{\partial \Psi}{\partial t}+\frac{\partial \Psi^{*}}{\partial t} \Psi
$$
Using the Schrödinger equation,
$$
\frac{\partial \Psi}{\partial t}=\frac{i \hbar}{2 m} \frac{\partial^{2} \Psi}{\partial x^{2}}-\frac{i}{\hbar} V \Psi
$$
and using it's conjugate equation also,
$$
\frac{\partial \Psi^{*}}{\partial t}=-\frac{i \hbar}{2 m} \frac{\partial^{2} \psi^{*}}{\partial x^{2}}+\frac{i}{\hbar} V \Psi^{*}
$$
we get ->
$$
\frac{\partial}{\partial t}|\Psi|^{2}=\frac{i h}{2 m}\left(\Psi^{*} \frac{\partial^{2} \Psi}{\partial x^{2}}-\frac{\partial^{2} \Psi^{*}}{\partial x^{2}} \Psi\right)=\frac{\partial}{\partial x}\left[\frac{i h}{2 m}\left(\Psi^{*} \frac{\partial \Psi}{\partial x}-\frac{\partial \Psi^{*}}{\partial x} \Psi\right)\right]
$$
The integral at the beginning can now be evaluated as ->
$$
\frac{d}{d t} \int_{-\infty}^{+\infty}|\Psi(x, t)|^{2} d x=\left.\frac{i \hbar}{2 m}\left(\Psi^{*} \frac{\partial \Psi}{\partial x}-\frac{\partial \Psi^{*}}{\partial x} \Psi\right)\right|_{-\infty} ^{+\infty}
$$
But $\Psi(x, t)$ must go to zero as $x$ goes to $(\pm)$ infinity-otherwise the wave function would not be normalizable. 
Thus,
$$
\frac{d}{d t} \int_{-\infty}^{+\infty}|\Psi(x, t)|^{2} d x=0
$$
and so the integral is independent of time.

==This implies that if $\Psi$ is normalized at $t=0$ it stays normalized for all future time.==