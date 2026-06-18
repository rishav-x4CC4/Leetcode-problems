# Day 3 - Score of a String

**LeetCode 3110 | Easy**

📅 Date: 18 June 2026

---

## Problem Statement

Given a string `s`, the score of a string is defined as the sum of the absolute differences between the ASCII values of adjacent characters.

Return the score of `s`.

---

## Example 1

### Input

```text
s = "hello"
```

### Output

```text
13
```

### Explanation

```text
'h' = 104
'e' = 101
'l' = 108
'l' = 108
'o' = 111

|104 - 101| + |101 - 108| + |108 - 108| + |108 - 111|
= 3 + 7 + 0 + 3
= 13
```

---

## Intuition

The problem asks us to compare every character with its next adjacent character.

For each pair:

* Find the ASCII difference.
* Take its absolute value.
* Add it to the total score.

A single traversal of the string is sufficient.

---

## Approach

1. Initialize `score = 0`.

2. Traverse the string from index `0` to `n - 2`.

3. Compute:

   ```cpp
   abs(s[i] - s[i + 1])
   ```

4. Add the result to `score`.

5. Return the final score.

---

## Algorithm

```text
score = 0

for each index i from 0 to n-2:
    score += abs(s[i] - s[i+1])

return score
```

---

## C++ Solution

```cpp
class Solution {
public:
    int scoreOfString(string s) {
        int score = 0;

        for (int i = 0; i < s.length() - 1; i++) {
            score += abs(s[i] - s[i + 1]);
        }

        return score;
    }
};
```

---

## Complexity Analysis

| Metric           | Complexity |
| ---------------- | ---------- |
| Time Complexity  | O(n)       |
| Space Complexity | O(1)       |

where `n` is the length of the string.

---

## Key Learning

* ASCII value manipulation
* String traversal
* Absolute difference calculation
* Linear-time processing

---

## Tags

`String` `Simulation` `Math`

---

## Progress

| Day | Problem                   | Difficulty |
| --- | ------------------------- | ---------- |
| 3   | Score of a String (#3110) | Easy       |

**Problems Solved:** 1 ✅
