# Day 31 - Product of Array Except Self & Count Primes

## Problems Solved

### 1. LeetCode 238 - Product of Array Except Self

- **Difficulty:** Medium
- **Topics:** Arrays, Prefix Product, Suffix Product

### Approach

- Compute prefix product for every index.
- Compute suffix product for every index.
- For every position:
  - First element → suffix[1]
  - Last element → prefix[n-2]
  - Otherwise → prefix[i-1] × suffix[i+1]

This avoids using division while maintaining O(n) complexity.

**Time Complexity:** `O(n)`

**Space Complexity:** `O(n)`

---

### 2. LeetCode 204 - Count Primes

- **Difficulty:** Medium
- **Topics:** Mathematics, Sieve of Eratosthenes

### Approach

- Create a boolean array indicating prime numbers.
- Mark multiples of every prime as non-prime.
- Count all remaining prime numbers smaller than `n`.

**Time Complexity:** `O(n log log n)`

**Space Complexity:** `O(n)`

---

## Files

- `solution1.cpp` → Product of Array Except Self
- `solution2.cpp` → Count Primes