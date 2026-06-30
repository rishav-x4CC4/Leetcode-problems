# Day 15 - Length of Last Word

**LeetCode 58 | Easy**

📅 Date: 30 June 2026

---

## Problem Statement

Given a string `s` consisting of words and spaces, return the **length of the last word** in the string.

A **word** is defined as a maximal substring consisting of non-space characters only.

---

## Example 1

### Input

```text
s = "Hello World"
```

### Output

```text
5
```

---

## Example 2

### Input

```text
s = "   fly me   to   the moon  "
```

### Output

```text
4
```

---

## Example 3

### Input

```text
s = "luffy is still joyboy"
```

### Output

```text
6
```

---

# Intuition

The last word may be followed by multiple spaces.

So,

- Ignore all trailing spaces.
- Count characters until the next space is encountered.

Since only one traversal from the end is needed, this is the most efficient approach.

---

# Approach

1. Start from the last character.
2. Skip all trailing spaces.
3. Count characters until a space or beginning of the string is reached.
4. Return the count.

---

# Algorithm

```text
i = last index of string

while i >= 0 and s[i] is space
    i--

count = 0

while i >= 0 and s[i] is not space
    count++
    i--

return count
```

---

# C++ Solution

```cpp
class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.length() - 1;

        while (i >= 0 && s[i] == ' ')
            i--;

        int count = 0;

        while (i >= 0 && s[i] != ' ') {
            count++;
            i--;
        }

        return count;
    }
};
```

---

# Dry Run

### Input

```text
s = "Hello World"
```

```
Start from end

d → count = 1
l → count = 2
r → count = 3
o → count = 4
W → count = 5

Encounter space → Stop

Answer = 5
```

---

# Complexity Analysis

| Metric | Complexity |
|---------|------------|
| Time Complexity | **O(n)** |
| Space Complexity | **O(1)** |

---

# Key Learning

- Reverse Traversal
- String Manipulation
- Handling Trailing Spaces

---

# Tags

`String`

---

# Progress

| Day | Problem | Difficulty |
|------|---------|------------|
| 15 | Length of Last Word (#58) | Easy |

**Problems Solved:** **1** ✅