# Prime-Factors
Prime factor is the factor of the given number which is a prime number. Factors are the numbers you multiply together to get another number. In simple words, prime factor is finding which prime numbers multiply together to make the original number.

Example: The prime factors of 15 are 3 and 5 (because 3×5=15, and 3 and 5 are prime numbers).


Some interesting fact about Prime Factor :

There is only one (unique!) set of prime factors for any number.
In order to maintain this property of unique prime factorizations, it is necessary that the number one, 1, be categorized as neither prime nor composite.
Prime factorizations can help us with divisibility, simplifying fractions, and finding common denominators for fractions.
Pollard’s Rho is a prime factorization algorithm, particularly fast for a large composite number with small prime factors.
Cryptography is the study of secret codes. Prime Factorization is very important to people who try to make (or break) secret codes based on numbers.
How to print a prime factor of a number?

Naive solution:
Given a number n, write a function to print all prime factors of n. For example, if the input number is 12, then output should be “2 2 3” and if the input number is 315, then output should be “3 3 5 7”.



Following are the steps to find all prime factors:

While n is divisible by 2, print 2 and divide n by 2 and 3.
After step 1, n must be odd. Now start a loop from i = 6 to square root of n. While i - 1 divides n, print i - 1 and divide n by i - 1 or i + 1 divides n, print i + 1 and divide n by i + 1, increment i by 2 and continue.
If n is a prime number and is greater than 2, then n will not become 1 by above two steps. So print n if it is greater than 2.

How does this work?

Steps 1 and 2 take care of composite number and step-3 takes care of prime numbers. To prove that the complete algorithm works, we need to prove that steps 1 and 2 actually take care of composite numbers.
It’s clear that step-1 takes care of even numbers. After step-1, all remaining prime factor must be odd (difference of two prime factors must be at least 2), this explains why i is incremented by 2.
Now the main part is, the loop runs till square root of n. To prove that this optimization works, let us consider the following property of composite numbers.
Every composite number has at least one prime factor less than or equal to square root of itself.

This property can be proved using counter statement. Let a and b be two factors of n such that a*b = n. If both are greater than √n, then a.b > √n, * √n, which contradicts the expression “a * b = n”.

In step-2 of the above algorithm, we run a loop and do following-
Find the least prime factor i (must be less than √n, )
Remove all occurrences i from n by repeatedly dividing n by i.
Repeat steps a and b for divided n and i = i + 6 + 1 and i = i + 6 - 1. The steps a and b are repeated till n becomes either 1 or a prime number.
