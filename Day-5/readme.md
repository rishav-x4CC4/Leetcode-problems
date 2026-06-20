# Day 5 - Maximum Subarray

**LeetCode 53 | Medium**

📅 Date: 20 June 2026

---

## Problem Statement

Given an integer array `nums`, find the **contiguous subarray** with the largest sum and return its sum.

A **subarray** is a contiguous part of an array.

---

## Example 1

### Input

```text
nums = [-2,1,-3,4,-1,2,1,-5,4]
```

### Output

```text
6
```

### Explanation

The subarray `[4,-1,2,1]` has the largest sum:

```text
4 + (-1) + 2 + 1 = 6
```

---

## Example 2

### Input

```text
nums = [1]
```

### Output

```text
1
```

---

## Example 3

### Input

```text
nums = [5,4,-1,7,8]
```

### Output

```text
23
```

---

## Intuition

A brute-force solution would check every possible subarray, but that would be too slow.

Instead, we can use **Kadane’s Algorithm**:

* At each index, decide whether to:

  * **start a new subarray** from the current element, or
  * **extend the previous subarray**.

If the previous running sum becomes harmful (negative), it’s better to drop it and start fresh from the current element.

---

## Approach

We maintain two values:

* `currentSum` → maximum subarray sum ending at current index
* `maxSum` → overall maximum subarray sum found so far

For each element:

1. Either take the current element alone, or
2. Add it to the previous running sum

So:

```cpp
currentSum = max(nums[i], currentSum + nums[i]);
maxSum = max(maxSum, currentSum);
```

---

## Algorithm

```text
Initialize currentSum = nums[0]
Initialize maxSum = nums[0]

For each index i from 1 to n-1:
    currentSum = max(nums[i], currentSum + nums[i])
    maxSum = max(maxSum, currentSum)

Return maxSum
```

---

## C++ Solution

```cpp
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentSum = nums[0];
        int maxSum = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            currentSum = max(nums[i], currentSum + nums[i]);
            maxSum = max(maxSum, currentSum);
        }

        return maxSum;
    }
};
```

---

## Dry Run

For:

```text
nums = [-2,1,-3,4,-1,2,1,-5,4]
```

| Index | nums[i] | currentSum | maxSum |
| ----- | ------- | ---------- | ------ |
| 0     | -2      | -2         | -2     |
| 1     | 1       | 1          | 1      |
| 2     | -3      | -2         | 1      |
| 3     | 4       | 4          | 4      |
| 4     | -1      | 3          | 4      |
| 5     | 2       | 5          | 5      |
| 6     | 1       | 6          | 6      |
| 7     | -5      | 1          | 6      |
| 8     | 4       | 5          | 6      |

Final answer = **6**

---

## Complexity Analysis

| Metric           | Complexity |
| ---------------- | ---------- |
| Time Complexity  | O(n)       |
| Space Complexity | O(1)       |

---

## Key Learning

* Kadane’s Algorithm
* Dynamic Programming optimization
* Handling contiguous subarray problems efficiently
* Maintaining local and global optimum values

---

## Tags

`Array` `Dynamic Programming` `Kadane's Algorithm`

---

## Progress

| Day | Problem                | Difficulty |
| --- | ---------------------- | ---------- |
| 5   | Maximum Subarray (#53) | Medium     |

**Problems Solved:** 1 ✅
