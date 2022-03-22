## Q1. What are Lagrangean multipliers, and why do we need them?

Say we have a function R(x,y) that needs to be maximized, while the variables are subject to a constraint function S(x,y). The Lagrangean multiplier method helps to maximize or minimize the function R(x,y) while making sure the constraint S(x,y) is satisfied.

For simple functions, it may not be needed, but for very complex functions, it is the only way to solve.

For the case of classical particles, we obtained
$$Q(\{N_i\})=\frac{N!}{\prod_i{N_i!}}\times\prod_i{(g_i)^{N_i}}$$
We need to maximise $Q$. 
Basically, we have to maximise
$$
\prod_i{\bigg(\frac{g_i^{N_i}}{N_i!}\bigg)}
$$
Using Langrangean multipliers, we obtain 
$$
N_i/g_i=e^{\alpha-\frac{E_i}{k_BT}}
$$
, where $\alpha$ is a constant

Hence, for statistical physics calculations, it is very useful.