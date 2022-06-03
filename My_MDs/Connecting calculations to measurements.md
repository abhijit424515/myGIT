# Connecting calculations to measurements
Consider the wavefunction equation, 
$$
\Psi(x) = \sum_n{C_n \phi_n(x) e^{-i E_n t/\hbar}}
$$

Since the eigenvalues of a quantum mechanical operator correspond to measurable quantities, the eigenvalues must be real.
It can be shown that [[any hermitian operator has a set of orthogonal eigenfunctions with real eigenvalues]].

In any measurement of the energy, the wave function will collapse to any one of these eigenvalues. To find out the probability of each eigenvalue, let's first consider the total probability.
$$\int_{-\infty}^{+\infty}{\Psi^{*}(x) \Psi(x) dx} = \sum_m \sum_n C_p^* C_q \langle \phi_p \mid \phi_q \rangle$$
$$= \sum_n |C_n|^2 = 1$$

In the above sum, each term $|C_n|^2$ gives the probability of finding the particle in the energy eigenstate $\phi_n(x)$.

Also, the expectation value of energy can be calculated as,
$$\langle\hat{H}\rangle = \langle \Psi^* \mid \hat{H} \mid \Psi \rangle = \sum_n E_n |C_n|^2$$

