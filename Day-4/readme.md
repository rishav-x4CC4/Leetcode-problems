# Day 4 - Defanging an IP Address

**LeetCode 1108 | Easy**

📅 Date: 19 June 2026

---

## Problem Statement

Given a valid IPv4 address, return a defanged version of that IP address.

A defanged IP address replaces every period `"."` with `"[.]"`.

---

## Example 1

### Input

```text
address = "1.1.1.1"
```

### Output

```text
"1[.]1[.]1[.]1"
```

---

## Example 2

### Input

```text
address = "255.100.50.0"
```

### Output

```text
"255[.]100[.]50[.]0"
```

---

## Intuition

We need to replace every occurrence of `'.'` with `"[.]"`.

By traversing the string character by character, we can build a new string and append either:

* `"[.]"` when a dot is found.
* The original character otherwise.

---

## Approach

1. Create an empty string `ans`.
2. Traverse each character in the address.
3. If the character is `'.'`, append `"[.]"`.
4. Otherwise append the character itself.
5. Return the resulting string.

---

## Algorithm

```text
Initialize ans = ""

For each character ch in address:
    If ch == '.':
        ans += "[.]"
    Else:
        ans += ch

Return ans
```

---

## C++ Solution

```cpp
class Solution {
public:
    string defangIPaddr(string address) {
        string ans = "";

        for(char ch : address) {
            if(ch == '.')
                ans += "[.]";
            else
                ans += ch;
        }

        return ans;
    }
};
```

---

## Complexity Analysis

| Metric           | Complexity |
| ---------------- | ---------- |
| Time Complexity  | O(n)       |
| Space Complexity | O(n)       |

where `n` is the length of the IP address.

---

## Key Learning

* String traversal
* Character replacement
* Building strings efficiently
* Basic string manipulation

---

## Tags

`String`

---

## Progress

| Day | Problem                         | Difficulty |
| --- | ------------------------------- | ---------- |
| 4   | Defanging an IP Address (#1108) | Easy       |

**Problems Solved:** 1 ✅
