# Day 47 - Zigzag Conversion

## Problem Statement

The string `"PAYPALISHIRING"` is written in a zigzag pattern on a given number of rows.

After writing the characters in a zigzag pattern, read the rows one by one to obtain the converted string.

Return the converted string.

**LeetCode:** 6 - Zigzag Conversion

---

## Example 1

**Input**

```
s = "PAYPALISHIRING"
numRows = 3
```

**Output**

```
"PAHNAPLSIIGYIR"
```

---

## Example 2

**Input**

```
s = "PAYPALISHIRING"
numRows = 4
```

**Output**

```
"PINALSIGYAHRPI"
```

---

## Approach

Simulate the zigzag traversal.

- Create one string for each row.
- Traverse the input string character by character.
- Move downward until the last row.
- Then move upward until the first row.
- Finally concatenate all rows.

---

## Algorithm

1. Handle the edge case when `numRows == 1`.
2. Create `numRows` strings.
3. Traverse every character.
4. Append it to the current row.
5. Reverse direction at the first and last rows.
6. Concatenate all rows.
7. Return the answer.

---

## C++ Solution

```cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;

string convert(string s, int numRows) {
    if (numRows == 1 || numRows >= s.length())
        return s;

    vector<string> rows(numRows);

    int currRow = 0;
    bool goingDown = false;

    for (char c : s) {
        rows[currRow] += c;

        if (currRow == 0 || currRow == numRows - 1)
            goingDown = !goingDown;

        currRow += goingDown ? 1 : -1;
    }

    string ans;

    for (string row : rows)
        ans += row;

    return ans;
}

int main() {
    string s;
    int numRows;

    cin >> s >> numRows;

    cout << convert(s, numRows);

    return 0;
}
```

---

## Time Complexity

```
O(n)
```

where `n` is the length of the string.

---

## Space Complexity

```
O(n)
```

Additional space is used to store the rows.

---

## Key Concepts

- Strings
- Simulation
- Zigzag Traversal
- Arrays

---

## Learning Outcome

- Learned how to simulate a zigzag traversal efficiently.
- Practiced using multiple strings to represent rows.
- Improved understanding of direction-based traversal and simulation problems.