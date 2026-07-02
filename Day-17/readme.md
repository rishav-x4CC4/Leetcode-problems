# Day 17 - Median of Two Sorted Arrays

**LeetCode 4 | Hard**

📅 Date: 02 July 2026

---

## Problem Statement

Given two sorted arrays `nums1` and `nums2` of sizes `m` and `n` respectively, return the **median** of the two sorted arrays.

The overall run time complexity should be **O(log(m + n))**.

---

## Example 1

### Input

```text
nums1 = [1,3]
nums2 = [2]
```

### Output

```text
2.00000
```

### Explanation

Merged array = `[1,2,3]`

Median = **2**

---

## Example 2

### Input

```text
nums1 = [1,2]
nums2 = [3,4]
```

### Output

```text
2.50000
```

### Explanation

Merged array = `[1,2,3,4]`

Median = **(2 + 3) / 2 = 2.5**

---

# Intuition

Instead of merging the two arrays, we use **Binary Search** on the smaller array.

The goal is to partition both arrays such that:

- Left half contains exactly half of the total elements.
- Every element on the left is smaller than every element on the right.

Once this condition is satisfied, the median can be computed directly.

---

# Approach

1. Always perform binary search on the smaller array.
2. Partition both arrays.
3. Compute:
   - Left maximums
   - Right minimums
4. If partition is valid:
   - Return median.
5. Otherwise:
   - Move left or right accordingly.

---

# Algorithm

```text
Ensure nums1 is the smaller array

Binary Search on nums1

Choose partition1

partition2 = (m+n+1)/2 - partition1

If leftMax1 <= rightMin2
and leftMax2 <= rightMin1

    If total length is even
        return average of middle elements

    Else
        return maximum left element

Else

    Move binary search accordingly
```

---

# C++ Solution

```cpp
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        if (nums1.size() > nums2.size())
            return findMedianSortedArrays(nums2, nums1);

        int m = nums1.size();
        int n = nums2.size();

        int low = 0;
        int high = m;

        while (low <= high) {

            int partitionX = (low + high) / 2;
            int partitionY = (m + n + 1) / 2 - partitionX;

            int maxLeftX = (partitionX == 0) ? INT_MIN : nums1[partitionX - 1];
            int minRightX = (partitionX == m) ? INT_MAX : nums1[partitionX];

            int maxLeftY = (partitionY == 0) ? INT_MIN : nums2[partitionY - 1];
            int minRightY = (partitionY == n) ? INT_MAX : nums2[partitionY];

            if (maxLeftX <= minRightY && maxLeftY <= minRightX) {

                if ((m + n) % 2 == 0)
                    return (max(maxLeftX, maxLeftY) +
                            min(minRightX, minRightY)) / 2.0;

                return max(maxLeftX, maxLeftY);
            }

            else if (maxLeftX > minRightY)
                high = partitionX - 1;

            else
                low = partitionX + 1;
        }

        return 0.0;
    }
};
```

---

# Dry Run

### Input

```text
nums1 = [1,3]
nums2 = [2]
```

After swapping

```
nums1 = [2]
nums2 = [1,3]
```

Partition

```
Left  = [1,2]
Right = [3]
```

Median

```
2
```

---

# Complexity Analysis

| Metric | Complexity |
|---------|------------|
| Time Complexity | **O(log(min(m,n)))** |
| Space Complexity | **O(1)** |

---

# Key Learning

- Binary Search
- Partition Technique
- Divide and Conquer
- Hard Array Problems

---

# Tags

`Array` `Binary Search` `Divide and Conquer`

---

# Progress

| Day | Problem | Difficulty |
|------|---------|------------|
| 17 | Median of Two Sorted Arrays (#4) | Hard |

**Problems Solved:** **1** ✅