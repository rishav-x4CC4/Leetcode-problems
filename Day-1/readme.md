# Day 1 - Digit Frequency Score

**LeetCode 3945 | Easy**

📅 Date: 18 June 2026

---

## Problem Statement

Given an integer `n`, the score of `n` is defined as:

[
\sum (d \times freq(d))
]

where:

* `d` is a distinct digit present in `n`
* `freq(d)` is the number of times digit `d` appears in `n`

Return the score of `n`.

### Example

**Input**

```text
n = 122
```

**Output**

```text
5
```

**Explanation**

```text
Digit 1 appears once  -> 1 × 1 = 1
Digit 2 appears twice -> 2 × 2 = 4

Score = 1 + 4 = 5
```

---

## Intuition

Observe that each occurrence of a digit contributes its own value to the final score.

For example:

```text
122
= 1 + 2 + 2
= 5
```

Thus, instead of maintaining frequencies separately, we can simply extract each digit and add it to the answer.

---

## Approach

1. Handle the edge case when `n = 0`.
2. Repeatedly extract the last digit using `% 10`.
3. Add the digit to the answer.
4. Remove the last digit using `/ 10`.
5. Continue until the number becomes `0`.

---

## Algorithm

```text
Initialize ans = 0

While n > 0:
    ans += n % 10
    n /= 10

Return ans
```

---

## C++ Solution

```cpp
class Solution {
public:
    int digitFrequencyScore(int n) {
        if (n == 0) return 0;

        int ans = 0;

        while (n > 0) {
            ans += n % 10;
            n /= 10;
        }

        return ans;
    }
};
```

---

## Complexity Analysis

| Metric           | Complexity |
| ---------------- | ---------- |
| Time Complexity  | O(log₁₀ n) |
| Space Complexity | O(1)       |

---

## Key Learning

* Digit extraction using `% 10`
* Number traversal using `/ 10`
* Mathematical simplification of frequency-based problems
* Constant-space solutions

---

## Progress

| Day | Problem                       | Difficulty |
| --- | ----------------------------- | ---------- |
| 1   | Digit Frequency Score (#3945) | Easy       |

**Problems Solved:** 1 ✅

