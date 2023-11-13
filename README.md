# Recursion
Recursion is a top-down approach to problem-solving, based on the assumption that many problems can be solved through decomposition in simpler, indipendent problems of the same nature.
Every recursive step imply a reduction by:

- a constant value, not necessarily the same for all the sub-problems;
- a constant factor, generally the same for all the sub-problems;
- a variable quantity, generally difficult to estimate.

# Complexity Analysis
Generally speaking, there are 2 types of recursive algorithms:
- Divide and conquer:
$$T(n) = D(n) + a \cdot T(\frac{n}{b}) + C(n)$$
$$T(1) = 1$$ 
- Reduce and conquer:
$$T(n)=D(n)+a \sum_{i=0}^{a-1} T(n-k_i)+C(n)$$
$$T(1) = 1$$

with:
- $D(n)$: division cost
- $C(n)$: ricombination cost
- $T()$: sub-problems recursive resolution cost
- $a$: #sub-problems
- $b$: constant factor
- $k$: constant value
- $a-k_i$: sub-problems dimension
