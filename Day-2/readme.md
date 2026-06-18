# Day 2 - Concatenation of Array

**LeetCode 1929 | Easy**

📅 Date: 17 June 2026

---

## Problem Statement

Given an integer array `nums` of length `n`, create an array `ans` of length `2n` where:

* `ans[i] = nums[i]`
* `ans[i + n] = nums[i]`

for `0 <= i < n`.

Return the array `ans`.

---

## Example 1

### Input

```text
nums = [1,2,1]
```

### Output

```text
[1,2,1,1,2,1]
```

### Explanation

The array `ans` is formed by concatenating `nums` with itself.

---

## Intuition

The problem directly asks us to create a new array containing two copies of the original array.

Instead of manually traversing the array twice, we can leverage STL's `insert()` function to append all elements of `nums` to another vector.

---

## Approach

1. Create a copy of `nums` named `ans`.
2. Insert all elements of `nums` at the end of `ans`.
3. Return `ans`.

---

## Algorithm

```text
Create ans = nums

Insert nums at the end of ans

Return ans
```

---

## C++ Solution

```cpp
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans = nums;
        ans.insert(ans.end(), nums.begin(), nums.end());
        return ans;
    }
};
```

---

## Complexity Analysis

| Metric           | Complexity |
| ---------------- | ---------- |
| Time Complexity  | O(n)       |
| Space Complexity | O(n)       |

---

## Key Learning

* Vector copying in C++
* STL `insert()` function
* Array manipulation
* Efficient use of Standard Template Library (STL)

---

## Tags

`Array` `Simulation` `STL`

---

## Progress

| Day | Problem                        | Difficulty |
| --- | ------------------------------ | ---------- |
| 2   | Concatenation of Array (#1929) | Easy       |

**Problems Solved:** 1 ✅
