# Day 38 - Contains Duplicate

## Problem Statement

Given an integer array `nums`, return `true` if any value appears **at least twice** in the array, and return `false` if every element is distinct.

**LeetCode:** 217 - Contains Duplicate

---

## Example 1

**Input**
```
nums = [1,2,3,1]
```

**Output**
```
true
```

---

## Example 2

**Input**
```
nums = [1,2,3,4]
```

**Output**
```
false
```

---

## Example 3

**Input**
```
nums = [1,1,1,3,3,4,3,2,4,2]
```

**Output**
```
true
```

---

## Approach (Sorting)

1. Sort the array.
2. Traverse the sorted array.
3. If any adjacent elements are equal, return `true`.
4. If no duplicates are found, return `false`.

---

## Algorithm

1. Sort the array in ascending order.
2. Iterate from index `1` to `n-1`.
3. Compare the current element with the previous element.
4. If both are equal, return `true`.
5. Otherwise, continue traversing.
6. Return `false` after the loop.

---

## C++ Solution

```cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool containsDuplicate(vector<int>& nums) {
    sort(nums.begin(), nums.end());

    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] == nums[i - 1])
            return true;
    }

    return false;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    if (containsDuplicate(nums))
        cout << "true";
    else
        cout << "false";

    return 0;
}
```

---

## Time Complexity

- Sorting: **O(n log n)**
- Traversal: **O(n)**

Overall:

```
O(n log n)
```

---

## Space Complexity

```
O(1)
```

(Excluding the space used by the sorting algorithm.)

---

## Key Concepts

- Arrays
- Sorting
- Linear Traversal
- Duplicate Detection

---

## Learning Outcome

- Learned how sorting can simplify duplicate detection.
- Understood why adjacent elements become equal after sorting if duplicates exist.
- Compared the sorting approach with the brute-force solution.