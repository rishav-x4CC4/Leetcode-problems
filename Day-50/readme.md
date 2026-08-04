# Day 50 - Find Missing Elements

## Problem Statement

You are given an integer array `nums` consisting of unique integers.

Originally, the array contained every integer within a continuous range, but some integers are missing.

Return a sorted list of all missing integers between the smallest and largest values in the array.

**LeetCode:** 3731 - Find Missing Elements

---

## Example 1

**Input**

```
nums = [1,4,2,5]
```

**Output**

```
[3]
```

---

## Example 2

**Input**

```
nums = [7,8,6,9]
```

**Output**

```
[]
```

---

## Approach

Use a **Hash Set** for O(1) lookups.

- Find the minimum and maximum elements.
- Store all numbers in an unordered set.
- Traverse every integer from the minimum to the maximum.
- If a number is absent from the set, add it to the answer.

---

## Algorithm

1. Find the minimum and maximum elements.
2. Insert all elements into an unordered set.
3. Iterate from `min` to `max`.
4. If an element is not present in the set, add it to the answer.
5. Return the result.

---

## C++ Solution

```cpp
#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

vector<int> findMissingElements(vector<int>& nums) {
    int mn = *min_element(nums.begin(), nums.end());
    int mx = *max_element(nums.begin(), nums.end());

    unordered_set<int> st(nums.begin(), nums.end());

    vector<int> ans;

    for (int i = mn; i <= mx; i++) {
        if (!st.count(i))
            ans.push_back(i);
    }

    return ans;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++)
        cin >> nums[i];

    vector<int> ans = findMissingElements(nums);

    if (ans.empty()) {
        cout << "No missing elements";
    } else {
        for (int x : ans)
            cout << x << " ";
    }

    return 0;
}
```

---

## Time Complexity

```
O(n + R)
```

- `n` = size of the array
- `R` = `(maximum element - minimum element + 1)`

---

## Space Complexity

```
O(n)
```

For storing the hash set.

---

## Key Concepts

- Arrays
- Hash Set
- Range Traversal
- Searching

---

## Learning Outcome

- Learned how hash sets provide constant-time lookups.
- Practiced finding missing values in a continuous range.
- Improved understanding of combining STL algorithms with hashing.