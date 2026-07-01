# Day 16 - Longest Common Prefix

**LeetCode 14 | Easy**

📅 Date: 01 July 2026

---

## Problem Statement

Write a function to find the **longest common prefix** string amongst an array of strings.

If there is no common prefix, return an empty string `""`.

---

## Example 1

### Input

```text
strs = ["flower","flow","flight"]
```

### Output

```text
"fl"
```

---

## Example 2

### Input

```text
strs = ["dog","racecar","car"]
```

### Output

```text
""
```

### Explanation

There is no common prefix among the input strings.

---

# Intuition

The first string can act as the initial prefix.

Compare this prefix with every other string.

Whenever characters don't match, shorten the prefix until they do.

Eventually, the remaining prefix is the longest common prefix.

---

# Approach

1. Initialize the first string as the prefix.
2. Compare it with every remaining string.
3. While the current string doesn't start with the prefix:
   - Remove the last character from the prefix.
4. If the prefix becomes empty, return `""`.
5. Return the final prefix.

---

# Algorithm

```text
prefix = strs[0]

For every string in strs:
    While string does not begin with prefix:
        Remove last character from prefix

    If prefix becomes empty:
        Return ""

Return prefix
```

---

# C++ Solution

```cpp
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];

        for (int i = 1; i < strs.size(); i++) {
            while (strs[i].find(prefix) != 0) {
                prefix.pop_back();

                if (prefix.empty())
                    return "";
            }
        }

        return prefix;
    }
};
```

---

# Dry Run

### Input

```text
["flower","flow","flight"]
```

Initial Prefix

```
flower
```

Compare with

```
flow
```

Prefix becomes

```
flow
flo
fl
```

Compare with

```
flight
```

Common Prefix

```
fl
```

Final Answer

```text
"fl"
```

---

# Complexity Analysis

| Metric | Complexity |
|---------|------------|
| Time Complexity | **O(n × m)** |
| Space Complexity | **O(1)** |

where

- `n` = number of strings
- `m` = length of the shortest string

---

# Key Learning

- String Traversal
- Prefix Matching
- String Manipulation

---

# Tags

`String`

---

# Progress

| Day | Problem | Difficulty |
|------|---------|------------|
| 16 | Longest Common Prefix (#14) | Easy |

**Problems Solved:** **1** ✅