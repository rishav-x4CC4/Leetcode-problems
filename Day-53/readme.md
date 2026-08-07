# Day 53 - LeetCode 70: Climbing Stairs

## Problem Link
https://leetcode.com/problems/climbing-stairs/

## Difficulty
**Easy**

---

## Problem Statement

You are climbing a staircase with `n` steps.

Each time you can climb either **1 step** or **2 steps**.

Return the number of distinct ways to reach the top.

---

## Approach

This problem follows a **Fibonacci pattern**:

- To reach step `n`, you can come from:
  - step `n-1`
  - step `n-2`

So,

```
dp[n] = dp[n-1] + dp[n-2]
```

---

## Algorithm

1. If `n <= 2`, return `n`
2. Initialize:
   - `prev2 = 1`
   - `prev1 = 2`
3. Loop from `3 → n`:
   - `curr = prev1 + prev2`
4. Return `prev1`

---

## Complexity Analysis

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

---

## Concepts Used

- Dynamic Programming
- Fibonacci Pattern
- Iteration
- Space Optimization

---

## Solution

```cpp
class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) return n;

        int prev2 = 1, prev1 = 2;

        for (int i = 3; i <= n; i++) {
            int curr = prev1 + prev2;
            prev2 = prev1;
            prev1 = curr;
        }

        return prev1;
    }
};
```

---

## Key Takeaways

- Many DP problems reduce to Fibonacci patterns.
- Space optimization (using variables instead of arrays) is important.
- Recognizing recurrence relations is key in DSA.

---

**Day 53 / 100** ✅