# Day 18 - Integer to Roman

**LeetCode 12 | Medium**

📅 Date: 03 July 2026

---

## Problem Statement

Roman numerals are represented by seven different symbols:

| Symbol | Value |
|--------|------:|
| I | 1 |
| V | 5 |
| X | 10 |
| L | 50 |
| C | 100 |
| D | 500 |
| M | 1000 |

Given an integer, convert it to its Roman numeral representation.

---

## Example 1

### Input

```text
num = 3749
```

### Output

```text
"MMMDCCXLIX"
```

---

## Example 2

### Input

```text
num = 58
```

### Output

```text
"LVIII"
```

---

## Example 3

### Input

```text
num = 1994
```

### Output

```text
"MCMXCIV"
```

---

# Intuition

Always use the largest Roman numeral value that does not exceed the remaining number.

Subtract that value and append its corresponding Roman symbol.

Repeat until the number becomes zero.

---

# Approach

1. Store Roman numeral values in descending order.
2. Store their corresponding Roman symbols.
3. Iterate through both arrays.
4. While the current value is less than or equal to the number:
   - Append its symbol.
   - Subtract the value.
5. Return the final Roman numeral.

---

# Algorithm

```text
Create arrays:
values[]
symbols[]

For each value:
    While num >= value:
        Append symbol
        num -= value

Return answer
```

---

# C++ Solution

```cpp
class Solution {
public:
    string intToRoman(int num) {

        vector<int> values = {
            1000,900,500,400,
            100,90,50,40,
            10,9,5,4,1
        };

        vector<string> symbols = {
            "M","CM","D","CD",
            "C","XC","L","XL",
            "X","IX","V","IV","I"
        };

        string ans;

        for(int i=0;i<values.size();i++){

            while(num>=values[i]){
                ans+=symbols[i];
                num-=values[i];
            }
        }

        return ans;
    }
};
```

---

# Dry Run

### Input

```text
1994
```

```
1994

1000 -> M

994

900 -> CM

94

90 -> XC

4

4 -> IV
```

Answer

```
MCMXCIV
```

---

# Complexity Analysis

| Metric | Complexity |
|---------|------------|
| Time Complexity | **O(1)** |
| Space Complexity | **O(1)** |

---

# Key Learning

- Greedy Algorithm
- Arrays
- Simulation

---

# Tags

`Greedy` `String` `Simulation`

---

# Progress

| Day | Problem | Difficulty |
|------|---------|------------|
| 18 | Integer to Roman (#12) | Medium |

**Problems Solved:** **1** ✅