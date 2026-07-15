# Day 30 - GCD of Odd and Even Sums

## Problem
**LeetCode 3658 - GCD of Odd and Even Sums**

### Difficulty
Easy

---

## Approach

The sum of the first **n odd numbers** is:

sumOdd = n²

The sum of the first **n even numbers** is:

sumEven = n(n + 1)

Therefore,

GCD(sumOdd, sumEven)
= GCD(n², n(n+1))
= n × GCD(n, n+1)
= n × 1
= n

Hence, the answer is simply **n**.

---

## Time Complexity

O(1)

## Space Complexity

O(1)

---

## Concepts Used

- Mathematics
- Number Theory
- Greatest Common Divisor (GCD)
- Observation