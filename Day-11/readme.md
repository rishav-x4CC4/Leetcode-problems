# Day 11 - Remove Element

**LeetCode 27 | Easy**

📅 Date: 26 June 2026

---

## Problem Statement

Given an integer array `nums` and an integer `val`, remove all occurrences of `val` **in-place**.

The order of the remaining elements may be changed.

Return the number of elements in `nums` that are **not equal** to `val`.

> The first `k` elements of `nums` should contain the elements that are not equal to `val`, where `k` is the returned value.

---

## Example 1

### Input

```text
nums = [3,2,2,3], val = 3
```

### Output

```text
k = 2
nums = [2,2,_,_]
```

---

## Example 2

### Input

```text
nums = [0,1,2,2,3,0,4,2], val = 2
```

### Output

```text
k = 5
nums = [0,1,4,0,3,_,_,_]
```

---

## Intuition

We only need to keep the elements that are **not equal** to `val`.

A pointer `k` keeps track of the next valid position.

Whenever we find an element different from `val`, we place it at index `k` and increment `k`.

This modifies the array in-place without using extra space.

---

## Approach

1. Initialize `k = 0`.
2. Traverse every element in `nums`.
3. If the current element is **not** equal to `val`:

   * Place it at `nums[k]`
   * Increment `k`
4. Return `k`.

---

## Algorithm

```text
k = 0

For each element x in nums:
    If x != val:
        nums[k] = x
        k++

Return k
```

---

## C++ Solution

```cpp
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[k] = nums[i];
                k++;
            }
        }

        return k;
    }
};
```

---

## Dry Run

### Input

```text
nums = [3,2,2,3]
val = 3
```

| i | nums[i] | Action           | k |
| - | ------- | ---------------- | - |
| 0 | 3       | Skip             | 0 |
| 1 | 2       | Store at nums[0] | 1 |
| 2 | 2       | Store at nums[1] | 2 |
| 3 | 3       | Skip             | 2 |

Final array:

```text
[2,2,_,_]
```

Return:

```text
2
```

---

## Complexity Analysis

| Metric           | Complexity |
| ---------------- | ---------- |
| Time Complexity  | **O(n)**   |
| Space Complexity | **O(1)**   |

---

## Key Learning

* Two-pointer technique
* In-place array modification
* Efficient filtering without extra memory

---

## Tags

`Array` `Two Pointers`

---

## Progress

| Day | Problem              | Difficulty |
| --- | -------------------- | ---------- |
| 11  | Remove Element (#27) | Easy       |

**Problems Solved:** 1 ✅
