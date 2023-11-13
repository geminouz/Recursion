# recursion
Recursion is a top-down approach to problem-solving, based on the assumption that many problems can be solved through decomposition in simpler, indipendent problems of the same nature.
Every recursive step imply a reduction by:

	- a constant value, not necessarily the same for all the sub-problems;
	- a constant factor, generally the same for all the sub-problems;
	- a variable quantity, generally difficult to estimate.

# complexity analysis
Generally speaking, there are 2 types of recursive algorithms:

- Divide and conquer:
		$T(n) = D(n) + a \cdot T(\frac{n}{b}) + C(n) \\ T(1) = 1$
	 
- Reduce and conquer:
 		$T(n) = D(n) + $
