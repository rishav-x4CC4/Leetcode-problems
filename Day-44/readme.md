# Day 44 - Pascal's Triangle

## Problem Statement

Given an integer `numRows`, return the first `numRows` of Pascal's Triangle.

In Pascal's Triangle, each number is the sum of the two numbers directly above it.

**LeetCode:** 118 - Pascal's Triangle

---

## Example 1

**Input**
```
numRows = 5
```

**Output**
```
[
 [1],
 [1,1],
 [1,2,1],
 [1,3,3,1],
 [1,4,6,4,1]
]
```

---

## Example 2

**Input**
```
numRows = 1
```

**Output**
```
[
 [1]
]
```

---

## Approach

Each row starts and ends with `1`.

For every middle element:

```
currentRow[j] = previousRow[j - 1] + previousRow[j]
```

Build the triangle row by row until `numRows` rows are generated.

---

## Algorithm

1. Create an empty 2D vector.
2. Iterate from `0` to `numRows - 1`.
3. Create a row of size `i + 1` filled with `1`.
4. Fill the middle elements using the previous row.
5. Store the row.
6. Return the completed triangle.

---

## C++ Solution

```cpp
#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> generate(int numRows) {
    vector<vector<int>> triangle;

    for (int i = 0; i < numRows; i++) {
        vector<int> row(i + 1, 1);

        for (int j = 1; j < i; j++) {
            row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }

        triangle.push_back(row);
    }

    return triangle;
}

int main() {
    int numRows;
    cin >> numRows;

    vector<vector<int>> result = generate(numRows);

    for (const auto &row : result) {
        for (int num : row)
            cout << num << " ";
        cout << endl;
    }

    return 0;
}
```

---

## Time Complexity

```
O(n²)
```

where `n` is the number of rows.

---

## Space Complexity

```
O(n²)
```

The triangle itself stores

```
1 + 2 + 3 + ... + n
```

elements.

---

## Key Concepts

- Arrays
- 2D Vectors
- Dynamic Programming
- Simulation
- Mathematics

---

## Learning Outcome

- Learned how Pascal's Triangle is generated using values from the previous row.
- Practiced constructing 2D vectors efficiently.
- Understood a classic Dynamic Programming pattern where each state depends on previously computed values.