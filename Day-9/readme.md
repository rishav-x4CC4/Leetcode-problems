# Day 9 - Roman to Integer

**LeetCode 13 | Easy**

📅 Date: 24 June 2026

---

## Problem Statement

Roman numerals are represented by seven different symbols:

| Symbol | Value |
| ------ | ----- |
| I      | 1     |
| V      | 5     |
| X      | 10    |
| L      | 50    |
| C      | 100   |
| D      | 500   |
| M      | 1000  |

Roman numerals are usually written from **largest to smallest** from left to right.
However, there are **special subtraction cases**:

* `I` before `V` or `X` → `4` or `9`
* `X` before `L` or `C` → `40` or `90`
* `C` before `D` or `M` → `400` or `900`

Given a Roman numeral string `s`, convert it to an integer.

---

## Example 1

### Input

```text
s = "III"
```

### Output

```text
3
```

---

## Example 2

### Input

```text
s = "LVIII"
```

### Output

```text
58
```

### Explanation

```text
L = 50, V = 5, III = 3
50 + 5 + 3 = 58
```

---

## Example 3

### Input

```text
s = "MCMXCIV"
```

### Output

```text
1994
```

### Explanation

```text
M = 1000
CM = 900
XC = 90
IV = 4

1000 + 900 + 90 + 4 = 1994
```

---

## Intuition

Normally, Roman numerals are added from left to right.

For example:

* `"VIII"` = `5 + 1 + 1 + 1 = 8`

But if a smaller value appears **before** a larger one, it means subtraction.

For example:

* `"IV"` = `5 - 1 = 4`
* `"IX"` = `10 - 1 = 9`

So while traversing the string:

* if current symbol is **smaller than the next symbol**, subtract it
* otherwise, add it

---

## Approach

1. Store the value of each Roman symbol in a hash map.
2. Traverse the string from left to right.
3. For each character:

   * if its value is smaller than the next character’s value → subtract it
   * otherwise → add it
4. Return the final answer.

---

## Algorithm

```text
Create a map of Roman symbols to values

Initialize ans = 0

For each index i in string s:
    If i is not the last index AND value[s[i]] < value[s[i+1]]:
        ans -= value[s[i]]
    Else:
        ans += value[s[i]]

Return ans
```

---

## C++ Solution

```cpp
class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> mp = {
            {'I', 1}, {'V', 5}, {'X', 10},
            {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
        };

        int ans = 0;

        for (int i = 0; i < s.length(); i++) {
            if (i + 1 < s.length() && mp[s[i]] < mp[s[i + 1]])
                ans -= mp[s[i]];
            else
                ans += mp[s[i]];
        }

        return ans;
    }
};
```

---

## Dry Run

### Input

```text
s = "MCMXCIV"
```

| Index | Character | Value | Next Value | Operation | Answer |
| ----- | --------- | ----- | ---------- | --------- | ------ |
| 0     | M         | 1000  | 100        | +1000     | 1000   |
| 1     | C         | 100   | 1000       | -100      | 900    |
| 2     | M         | 1000  | 10         | +1000     | 1900   |
| 3     | X         | 10    | 100        | -10       | 1890   |
| 4     | C         | 100   | 1          | +100      | 1990   |
| 5     | I         | 1     | 5          | -1        | 1989   |
| 6     | V         | 5     | —          | +5        | 1994   |

Final answer = **1994**

---

## Complexity Analysis

| Metric           | Complexity |
| ---------------- | ---------- |
| Time Complexity  | O(n)       |
| Space Complexity | O(1)       |

where `n` is the length of the Roman numeral string.

---

## Key Learning

* Hash map based symbol lookup
* Roman numeral subtraction logic
* Greedy left-to-right parsing
* Handling adjacent-character conditions

---

## Tags

`String` `Hash Table`

---

## Progress

| Day | Problem                | Difficulty |
| --- | ---------------------- | ---------- |
| 9   | Roman to Integer (#13) | Easy       |

**Problems Solved:** 1 ✅
