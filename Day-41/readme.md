# Day 41 - Subsets

## Problem Statement

Given an integer array `nums` of **unique** elements, return all possible subsets (the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.

**LeetCode:** 78 - Subsets

---

## Example 1

**Input**
```
nums = [1,2,3]
```

**Output**
```
[
 [],
 [1],
 [2],
 [1,2],
 [3],
 [1,3],
 [2,3],
 [1,2,3]
]
```

---

## Example 2

**Input**
```
nums = [0]
```

**Output**
```
[
 [],
 [0]
]
```

---

## Approach (Backtracking)

For every element, we have two choices:

1. Include the current element in the subset.
2. Exclude the current element.

Recursively exploring both choices generates every possible subset.

---

## Algorithm

1. Create an empty answer vector.
2. Start recursion from index `0`.
3. If the current index reaches the end of the array:
   - Store the current subset.
4. Otherwise:
   - Include the current element and recurse.
   - Remove it (backtrack).
   - Exclude the current element and recurse.
5. Return all generated subsets.

---

## C++ Solution

```cpp
#include <iostream>
#include <vector>

using namespace std;

void generateSubsets(int index, vector<int>& nums, vector<int>& current, vector<vector<int>>& ans) {
    if (index == nums.size()) {
        ans.push_back(current);
        return;
    }

    current.push_back(nums[index]);
    generateSubsets(index + 1, nums, current, ans);

    current.pop_back();
    generateSubsets(index + 1, nums, current, ans);
}

vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> ans;
    vector<int> current;

    generateSubsets(0, nums, current, ans);

    return ans;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<vector<int>> result = subsets(nums);

    for (auto subset : result) {
        cout << "[";
        for (int i = 0; i < subset.size(); i++) {
            cout << subset[i];
            if (i != subset.size() - 1)
                cout << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}
```

---

## Time Complexity

```
O(n × 2ⁿ)
```

- There are `2ⁿ` subsets.
- Copying each subset takes up to `O(n)` time.

---

## Space Complexity

```
O(n)
```

Auxiliary recursive stack space.

The output itself requires `O(n × 2ⁿ)` space.

---

## Key Concepts

- Backtracking
- Recursion
- Power Set
- Decision Tree
- Depth First Search (DFS)

---

## Learning Outcome

- Learned how every element creates two recursive choices: include or exclude.
- Understood the recursion tree for generating all possible subsets.
- Practiced implementing a classic backtracking problem frequently asked in coding interviews.