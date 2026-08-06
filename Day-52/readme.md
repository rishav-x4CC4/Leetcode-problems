# Day 52 - LeetCode 3345: Smallest Divisible Digit Product I

## Problem Link
https://leetcode.com/problems/smallest-divisible-digit-product-i/

## Difficulty
**Easy**

---

## Problem Statement

Given two integers `n` and `t`, find the smallest integer greater than or equal to `n` such that the product of its digits is divisible by `t`.

Return that smallest integer.

---

## Approach

1. Start checking from `n`.
2. Compute the product of digits of the current number.
3. If the product is divisible by `t`, return the number.
4. Otherwise increment the number and continue searching.

Since the constraints are small, a brute-force search is sufficient.

---

## Algorithm

1. Initialize the current number as `n`.
2. Calculate the product of its digits.
3. Check if `product % t == 0`.
4. If true, return the current number.
5. Otherwise increment the number and repeat.

---

## Complexity Analysis

- **Time Complexity:** `O(k × d)`
  - `k` = numbers checked
  - `d` = number of digits

- **Space Complexity:** `O(1)`

---

## Concepts Used

- Brute Force
- Math
- Digit Manipulation
- Simulation

---

## Solution

```cpp
class Solution {
public:
    int digitProduct(int x) {
        if (x == 0) return 0;

        int product = 1;

        while (x > 0) {
            product *= (x % 10);
            x /= 10;
        }

        return product;
    }

    int smallestNumber(int n, int t) {
        while (true) {
            if (digitProduct(n) % t == 0)
                return n;
            n++;
        }
    }
};
```

---

## Key Takeaways

- Brute-force is acceptable when constraints are small.
- Separating digit-product computation into its own function improves readability.
- Digit manipulation problems are often solved using modulo (`%`) and division (`/`) operations.

---

**Day 52 / 100** ✅
```