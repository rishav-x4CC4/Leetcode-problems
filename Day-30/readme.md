# Day 30 - GCD of Odd and Even Sums & Reverse Integer

## Problems Solved

### 1. LeetCode 3658 - GCD of Odd and Even Sums
- **Difficulty:** Easy
- **Topics:** Mathematics, Number Theory, GCD

#### Approach
- Sum of first `n` odd numbers = `n²`
- Sum of first `n` even numbers = `n(n+1)`
- Therefore,

  GCD(n², n(n+1))
  = n × GCD(n, n+1)
  = n

Hence, the answer is simply **n**.

**Time Complexity:** `O(1)`

**Space Complexity:** `O(1)`

---

### 2. LeetCode 7 - Reverse Integer
- **Difficulty:** Medium
- **Topics:** Mathematics, Integer Manipulation, Overflow Handling

#### Approach
- Reverse the number digit by digit.
- Before multiplying by 10, check if overflow would occur.
- If reversing exceeds the 32-bit signed integer range, return `0`.

**Time Complexity:** `O(log₁₀ n)`

**Space Complexity:** `O(1)`

---

## Files

- `solution1.cpp` → GCD of Odd and Even Sums
- `solution2.cpp` → Reverse Integer