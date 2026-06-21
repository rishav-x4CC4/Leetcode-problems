# Day 6 - Merge Sorted Array

**LeetCode 88 | Easy**

📅 Date: 21 June 2026

---

## Problem Statement

You are given two integer arrays `nums1` and `nums2`, sorted in **non-decreasing order**, and two integers `m` and `n` representing the number of valid elements in `nums1` and `nums2` respectively.

Merge `nums1` and `nums2` into a single array sorted in **non-decreasing order**.

The final sorted array should be stored inside `nums1`.

---

## Example 1

### Input

```text
nums1 = [1,2,3,0,0,0], m = 3
nums2 = [2,5,6], n = 3
```

### Output

```text
[1,2,2,3,5,6]
```

---

## Intuition

Since `nums1` already has enough space to store all elements, the best way is to fill it **from the back**.

Why from the back?

* The largest element among the current ends of `nums1` and `nums2` should go at the last free position.
* This avoids shifting elements and keeps the merge in-place.

---

## Approach

We use **three pointers**:

* `i = m - 1` → last valid element in `nums1`
* `j = n - 1` → last element in `nums2`
* `k = m + n - 1` → last position of merged array

### Steps:

1. Compare `nums1[i]` and `nums2[j]`.
2. Place the larger one at `nums1[k]`.
3. Move the corresponding pointer backward.
4. Continue until all elements of `nums2` are placed.

If elements remain in `nums1`, they are already in correct position.

---

## Algorithm

```text
Set i = m - 1
Set j = n - 1
Set k = m + n - 1

While i >= 0 and j >= 0:
    If nums1[i] > nums2[j]:
        nums1[k] = nums1[i]
        i--
    Else:
        nums1[k] = nums2[j]
        j--
    k--

While j >= 0:
    nums1[k] = nums2[j]
    j--
    k--
```

---

## C++ Solution

```cpp
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;

        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                i--;
            } else {
                nums1[k] = nums2[j];
                j--;
            }
            k--;
        }

        while (j >= 0) {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }
};
```

---

## Dry Run

### Input

```text
nums1 = [1,2,3,0,0,0], m = 3
nums2 = [2,5,6], n = 3
```

### Initial pointers

* `i = 2` → `nums1[i] = 3`
* `j = 2` → `nums2[j] = 6`
* `k = 5`

Now compare from the back:

| Step | nums1[i] | nums2[j] | Place at nums1[k] | nums1 after step |
| ---- | -------- | -------- | ----------------- | ---------------- |
| 1    | 3        | 6        | 6                 | [1,2,3,0,0,6]    |
| 2    | 3        | 5        | 5                 | [1,2,3,0,5,6]    |
| 3    | 3        | 2        | 3                 | [1,2,3,3,5,6]    |
| 4    | 2        | 2        | 2                 | [1,2,2,3,5,6]    |
| 5    | 1        | 2        | 2                 | [1,2,2,3,5,6]    |

Final answer:

```text
[1,2,2,3,5,6]
```

---

## Complexity Analysis

| Metric           | Complexity |
| ---------------- | ---------- |
| Time Complexity  | O(m + n)   |
| Space Complexity | O(1)       |

---

## Key Learning

* Two-pointer technique
* In-place merging
* Working backward to avoid overwriting elements
* Efficient sorted array merging

---

## Tags

`Array` `Two Pointers` `Sorting`

---

## Progress

| Day | Problem                  | Difficulty |
| --- | ------------------------ | ---------- |
| 6   | Merge Sorted Array (#88) | Easy       |

**Problems Solved:** 1 ✅
