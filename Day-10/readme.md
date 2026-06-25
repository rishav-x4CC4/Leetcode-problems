# Day 10 - Palindrome Number

**LeetCode 9 | Easy**

📅 Date: 25 June 2026

---

## Problem Statement

Given an integer `x`, return `true` if `x` is a palindrome, and `false` otherwise.

A palindrome number reads the same forward and backward.

---

## Example 1

### Input

```text
x = 121
```

### Output

```text
true
```

### Explanation

`121` reads the same from left to right and right to left.

---

## Example 2

### Input

```text
x = -121
```

### Output

```text
false
```

### Explanation

From left to right, it reads `-121`, but from right to left it becomes `121-`, so it is not a palindrome.

---

## Example 3

### Input

```text
x = 10
```

### Output

```text
false
```

### Explanation

Reversed number is `01`, which is not equal to `10`.

---

## Intuition

To check whether a number is a palindrome:

* Reverse the digits of the number
* Compare the reversed number with the original number

If both are equal, the number is a palindrome.

Negative numbers can never be palindromes because of the `-` sign.

---

## Approach

1. If `x < 0`, return `false`
2. Store the original number in a variable
3. Reverse the digits of the number using modulo and division
4. Compare the reversed number with the original number
5. Return the result

---

## Algorithm

```text
If x < 0:
    return false

Store original = x
Initialize reversed = 0

While x > 0:
    digit = x % 10
    reversed = reversed * 10 + digit
    x = x / 10

Return (original == reversed)
```

---

## C++ Solution

```cpp
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

        int original = x;
        long long reversed = 0;

        while (x > 0) {
            int digit = x % 10;
            reversed = reversed * 10 + digit;
            x /= 10;
        }

        return original == reversed;
    }
};
```

---

## Dry Run

### Input

```text
x = 121
```

| Step | x   | digit | reversed |
| ---- | --- | ----- | -------- |
| 1    | 121 | 1     | 1        |
| 2    | 12  | 2     | 12       |
| 3    | 1   | 1     | 121      |

Final comparison:

```text
original = 121
reversed = 121
```

So the answer is:

```text
true
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
* Reversing numbers using arithmetic operations
* Comparing original and reversed values
* Handling negative numbers as a special case

---

## Tags

`Math`

---

## Progress

| Day | Problem                | Difficulty |
| --- | ---------------------- | ---------- |
| 10  | Palindrome Number (#9) | Easy       |

**Problems Solved:** 1 ✅
