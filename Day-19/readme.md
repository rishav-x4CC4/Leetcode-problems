# Day 19 - Fibonacci Number & Power of Two

📅 Date: **05 July 2026**

Today I solved **2 LeetCode problems**.

---

# Problem 1

## LeetCode 509 - Fibonacci Number

**Difficulty:** Easy

### Problem Statement

The Fibonacci numbers form a sequence such that

```
F(0)=0
F(1)=1

F(n)=F(n−1)+F(n−2)
```

Return `F(n)`.

### Approach

- Handle base cases.
- Use iterative DP with two variables.
- Avoid recursion to achieve O(1) space.

### Complexity

- Time : **O(n)**
- Space : **O(1)**

---

# Problem 2

## LeetCode 231 - Power of Two

**Difficulty:** Easy

### Problem Statement

Given an integer `n`, return true if it is a power of two.

### Approach

A power of two has exactly **one set bit**.

Use

```
n & (n-1)
```

If the result is zero and `n > 0`, then it is a power of two.

### Complexity

- Time : **O(1)**
- Space : **O(1)**

---

# Problems Solved Today

| Problem | Difficulty |
|----------|------------|
| Fibonacci Number (#509) | 🟢 Easy |
| Power of Two (#231) | 🟢 Easy |

---

# Key Learnings

- Dynamic Programming
- Iterative DP
- Bit Manipulation
- Bitwise Operators

---

## Progress

**Problems solved today:** **2** ✅