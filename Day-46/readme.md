# Day 46 - Letter Combinations of a Phone Number

## Problem Statement

Given a string containing digits from **2-9**, return all possible letter combinations that the number could represent.

The mapping is the same as a traditional telephone keypad.

**LeetCode:** 17 - Letter Combinations of a Phone Number

---

## Example 1

**Input**

```
digits = "23"
```

**Output**

```
["ad","ae","af","bd","be","bf","cd","ce","cf"]
```

---

## Example 2

**Input**

```
digits = ""
```

**Output**

```
[]
```

---

## Example 3

**Input**

```
digits = "2"
```

**Output**

```
["a","b","c"]
```

---

## Approach

Use **Backtracking (DFS)**.

- Store the keypad mapping.
- Start from the first digit.
- For every possible letter of the current digit:
  - Add it to the current string.
  - Recur for the next digit.
- When all digits are processed, store the generated combination.

---

## Algorithm

1. Create a keypad mapping for digits `2` to `9`.
2. If the input is empty, return an empty vector.
3. Use recursion to generate every possible combination.
4. Add completed combinations to the answer.
5. Return the final vector.

---

## C++ Solution

```cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> ans;
vector<string> keypad = {
    "", "", "abc", "def", "ghi", "jkl",
    "mno", "pqrs", "tuv", "wxyz"
};

void solve(string &digits, int index, string current) {
    if (index == digits.size()) {
        ans.push_back(current);
        return;
    }

    string letters = keypad[digits[index] - '0'];

    for (char ch : letters) {
        solve(digits, index + 1, current + ch);
    }
}

vector<string> letterCombinations(string digits) {
    ans.clear();

    if (digits.empty())
        return ans;

    solve(digits, 0, "");

    return ans;
}

int main() {
    string digits;
    cin >> digits;

    vector<string> result = letterCombinations(digits);

    for (string s : result)
        cout << s << " ";

    return 0;
}
```

---

## Time Complexity

```
O(4^n × n)
```

- `n` = number of digits.
- Each digit has at most 4 possible letters (`7` and `9`).

---

## Space Complexity

```
O(4^n × n)
```

- Recursive call stack: **O(n)**
- Output stores all generated combinations.

---

## Key Concepts

- Backtracking
- Recursion
- DFS
- Strings
- Telephone Keypad Mapping

---

## Learning Outcome

- Learned how to generate all possible combinations using recursion.
- Understood the Backtracking pattern of choosing, exploring, and undoing choices.
- Practiced solving exponential search-space problems efficiently.