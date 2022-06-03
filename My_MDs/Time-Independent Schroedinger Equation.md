backlink : [[Schroedinger Equation]] [[Stationary states]]

# Time-Independent Schroedinger Equation
Schroedinger equation =>
$$
i\hbar\frac{\partial{\psi(x,t)}}{\partial{t}} = -\frac{\hbar^2}{2m} \frac{\partial^2(\psi(x,t))}{\partial{x^2}} + V(x)\psi(x,t)
$$

**Unique Solution Theorem**
    A given differential equation with specific initial conditions has a unique solution. If we find a solution to time dependent Schroedinger equation by some guess work and show that it satisfies the differential equation and the initial conditions, then it is the solution.
    
### Derivation of TISE    
We assume the wavefunction to be seperable, that is
$$\psi(x,t) = \phi(x) T(t)$$

This implies 
$$
i \hbar \frac{1}{T(t)} \frac{d T(t)}{d t}=\frac{1}{\phi(x)}\left[-\frac{\hbar^{2}}{2 m} \frac{d^{2} \phi(x)}{d x^{2}}+V(x) \phi(x)\right] \text {. }
$$
The left-hand side is purely a function of $t$ and the right-hand side is purely a function of $x$. Both sides are equal to a constant say $E$. 

So, the time dependent Schroedinger equation splits into two ordinary differential equations
$$
\begin{aligned}
i \hbar \frac{1}{T(t)} \frac{d T(t)}{d t} &=E \\
\frac{1}{\phi(x)}\left[-\frac{h^{2}}{2 m} \frac{d^{2} \phi(x)}{d x^{2}}+V(x) \phi(x)\right] &=E .
\end{aligned}
$$
We re-write them as
$$
\begin{aligned}
i \hbar \frac{d T(t)}{d t} &=E T(t) \\
\left[-\frac{\hbar^{2}}{2 m} \frac{d^{2}}{d x^{2}}+V(x)\right] \phi(x) &=E \phi(x) .
\end{aligned}
$$

---
Solving for $T(t)$ using the first equation gives 
$$T(t) = T(0) e^{-iEt/\hbar}$$

---
Given our definition that $\hat{p}=-i \hbar d / d x$, we see that the second equation can be written as
$$
[\frac{\hat{p}^{2}}{2 m}+V(x)] \phi(x) =E \phi(x)
$$
Thus, we can define operators
$$
\hat{V} = V(x) \qquad \text{and} \qquad \hat{H} = \frac{\hat{p}^{2}}{2 m}+\hat{V}
$$
Thus
$$
\hat{H} \phi(x) =E \phi(x) .
$$
The differential equation in $x$ is called **Time independent Schroedinger equation**. 

---
## Energy Eigenfunctions
Let's calculate $<\hat{H}>$
Since $\hat{H} \phi(x) =E \phi(x)$, therefore $<\hat{H}> = E$

Since observables are represented by operators, and $\hat{H} = \frac{\hat{p}^2}{2m} + \hat{V}$, we can conclude that the constant E is the total energy of the system.

Since, $<\hat{H}^2> = E^2$, 
$$\Delta{H}^2 = <\hat{H}^2> - <\hat{H}>^2 = 0$$, we can say that every measurement of the energy yields exactly the same value of energy $E$.

Thus, the solutions of the TISE are states of definite/fixed energy.
We say the operator $\hat{H}$ has an energy eigenfunction $\phi$ with it's energy eigenvalue $E$.

This means that if a particle is in an energy eigenstate at t=0, is undisturbed, then it remains in the same energy eigenstate at all times. This is the reason why energy eigenstates are called [[Stationary states]].

---
### Few Questions :

1.  **If <Ĥ> remains constant over time, is Ψ(x,t) a stationary state?**
    No, stationary states are eigenstates of <Ĥ>. So they have definite values of energy. Here, we see that <Ĥ> remains constant, but Ψ(x,t) is not an eigenstate of <Ĥ>.
2. **If the answer to (a) is no, then why does <Ĥ> remain constant over time ?**
    That’s just stating the statement of conservation of energy in the language of QM.