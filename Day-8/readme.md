# Day 8 - Divisible and Non-divisible Sums Difference

**LeetCode 2894 | Easy**

📅 Date: 23 June 2026

---

## Problem Statement

You are given two positive integers `n` and `m`.

Define:

* `num1` = sum of all integers in the range `[1, n]` that are **not divisible** by `m`
* `num2` = sum of all integers in the range `[1, n]` that are **divisible** by `m`

Return the value of:

```text
num1 - num2
```

---

## Example 1

### Input

```text
n = 10, m = 3
```

### Output

```text
19
```

### Explanation

Numbers from `1` to `10` divisible by `3` are:

```text
3, 6, 9
```

Their sum is:

```text
num2 = 3 + 6 + 9 = 18
```

Numbers not divisible by `3` are:

```text
1, 2, 4, 5, 7, 8, 10
```

Their sum is:

```text
num1 = 1 + 2 + 4 + 5 + 7 + 8 + 10 = 37
```

So the answer is:

```text
37 - 18 = 19
```

---

## Intuition

We need to split numbers from `1` to `n` into two groups:

* divisible by `m`
* not divisible by `m`

Then we calculate both sums and return their difference.

Since constraints are small enough, a simple loop works perfectly.

---

## Approach

1. Initialize `num1 = 0` and `num2 = 0`
2. Loop from `1` to `n`
3. If a number is divisible by `m`, add it to `num2`
4. Otherwise, add it to `num1`
5. Return `num1 - num2`

---

## Algorithm

```text
num1 = 0
num2 = 0

for i from 1 to n:
    if i % m == 0:
        num2 += i
    else:
        num1 += i

return num1 - num2
```

---

## C++ Solution

```cpp
class Solution {
public:
    int differenceOfSums(int n, int m) {
        int num1 = 0, num2 = 0;

        for (int i = 1; i <= n; i++) {
            if (i % m == 0)
                num2 += i;
            else
                num1 += i;
        }

        return num1 - num2;
    }
};
```

---

## Dry Run

### Input

```text
n = 10, m = 3
```

| Number | Divisible by 3? | Added to |
| ------ | --------------- | -------- |
| 1      | No              | num1     |
| 2      | No              | num1     |
| 3      | Yes             | num2     |
| 4      | No              | num1     |
| 5      | No              | num1     |
| 6      | Yes             | num2     |
| 7      | No              | num1     |
| 8      | No              | num1     |
| 9      | Yes             | num2     |
| 10     | No              | num1     |

Final values:

```text
num1 = 37
num2 = 18
answer = 19
```

---

## Complexity Analysis

| Metric           | Complexity |
| ---------------- | ---------- |
| Time Complexity  | O(n)       |
| Space Complexity | O(1)       |

---

## Key Learning

* Conditional summation
* Loop-based partitioning of numbers
* Divisibility checking using modulo
* Maintaining separate accumulators

---

## Tags

`Math` `Simulation`

---

## Progress

| Day | Problem                                             | Difficulty |
| --- | --------------------------------------------------- | ---------- |
| 8   | Divisible and Non-divisible Sums Difference (#2894) | Easy       |

**Problems Solved:** 1 ✅
