# Day 40 - Search Insert Position

## Problem Statement

Given a sorted array of distinct integers `nums` and a target value `target`, return the index if the target is found. If not, return the index where it would be inserted in order.

You must write an algorithm with **O(log n)** runtime complexity.

**LeetCode:** 35 - Search Insert Position

---

## Example 1

**Input**
```
nums = [1,3,5,6], target = 5
```

**Output**
```
2
```

---

## Example 2

**Input**
```
nums = [1,3,5,6], target = 2
```

**Output**
```
1
```

---

## Example 3

**Input**
```
nums = [1,3,5,6], target = 7
```

**Output**
```
4
```

---

## Approach (Binary Search)

Since the array is already sorted, Binary Search can efficiently locate the target or determine its correct insertion position.

1. Initialize two pointers:
   - `low = 0`
   - `high = n - 1`
2. Calculate the middle index.
3. If the middle element equals the target, return its index.
4. If the target is greater, search the right half.
5. Otherwise, search the left half.
6. When the loop ends, `low` represents the correct insertion position.

---

## Algorithm

1. Set `low = 0` and `high = n - 1`.
2. While `low <= high`:
   - Compute `mid`.
   - If `nums[mid] == target`, return `mid`.
   - If `nums[mid] < target`, move `low` to `mid + 1`.
   - Otherwise, move `high` to `mid - 1`.
3. Return `low`.

---

## C++ Solution

```cpp
#include <iostream>
#include <vector>

using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int low = 0;
    int high = nums.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target)
            return mid;
        else if (nums[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return low;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int target;
    cin >> target;

    cout << searchInsert(nums, target);

    return 0;
}
```

---

## Time Complexity

```
O(log n)
```

Binary Search halves the search space in every iteration.

---

## Space Complexity

```
O(1)
```

Only a constant amount of extra space is used.

---

## Key Concepts

- Arrays
- Binary Search
- Searching
- Divide and Conquer
- Sorted Arrays

---

## Learning Outcome

- Learned how Binary Search can be used to find both an element and its insertion position.
- Understood why returning `low` after the search gives the correct insertion index.
- Practiced implementing an optimal `O(log n)` searching algorithm.