# Day 13 - Two Sum

**LeetCode 1 | Easy**

📅 Date: 28 June 2026

---

## Problem Statement

Given an array of integers `nums` and an integer `target`, return the **indices** of the two numbers such that they add up to `target`.

You may assume that:

* Exactly one solution exists.
* You may not use the same element twice.
* You can return the answer in any order.

---

## Example 1

### Input

```text
nums = [2,7,11,15]
target = 9
```

### Output

```text
[0,1]
```

### Explanation

```text
nums[0] + nums[1] = 2 + 7 = 9
```

---

## Example 2

### Input

```text
nums = [3,2,4]
target = 6
```

### Output

```text
[1,2]
```

---

## Example 3

### Input

```text
nums = [3,3]
target = 6
```

### Output

```text
[0,1]
```

---

# Intuition

Instead of checking every pair of numbers (which takes **O(n²)**), we can store the numbers we have already seen in a **hash map**.

For every element:

* Calculate the required complement:

  `complement = target - nums[i]`

* If the complement already exists in the hash map, we have found the answer.

* Otherwise, store the current number and its index.

This reduces the time complexity to **O(n)**.

---

# Approach

1. Create a hash map (`unordered_map`).
2. Traverse the array.
3. Compute the complement.
4. If the complement exists in the map, return both indices.
5. Otherwise, store the current value and its index.
6. Continue until the answer is found.

---

# Algorithm

```text
Create an empty hash map

For every index i:
    complement = target - nums[i]

    If complement exists in map:
        return {map[complement], i}

    Store nums[i] with index i

Return {}
```

---

# C++ Solution

```cpp
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            if (mp.find(complement) != mp.end()) {
                return {mp[complement], i};
            }

            mp[nums[i]] = i;
        }

        return {};
    }
};
```

---

# Dry Run

### Input

```text
nums = [2,7,11,15]
target = 9
```

| i | nums[i] | Complement | Hash Map | Answer |
| - | ------- | ---------- | -------- | ------ |
| 0 | 2       | 7          | {2:0}    | —      |
| 1 | 7       | 2          | {2:0}    | Found  |

Output

```text
[0,1]
```

---

# Complexity Analysis

| Metric           | Complexity |
| ---------------- | ---------- |
| Time Complexity  | **O(n)**   |
| Space Complexity | **O(n)**   |

---

# Key Learning

* Hash Maps (`unordered_map`)
* One-pass solution
* Complement searching
* Time optimization from **O(n²)** to **O(n)**

---

# Tags

`Array` `Hash Table`

---

# Progress

| Day | Problem      | Difficulty |
| --- | ------------ | ---------- |
| 13  | Two Sum (#1) | Easy       |

**Problems Solved:** **1** ✅
