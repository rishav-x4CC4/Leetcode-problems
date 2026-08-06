# Day 51 - LeetCode 3310: Remove Methods From Project

## Problem Link
https://leetcode.com/problems/remove-methods-from-project/

## Difficulty
**Medium**

---

## Problem Statement

You are maintaining a project containing `n` methods numbered from `0` to `n - 1`.

A known bug exists in method `k`. Any method that is directly or indirectly invoked by `k` is considered **suspicious**.

A group of suspicious methods can only be removed if **no non-suspicious method invokes any suspicious method**.

Return the list of remaining methods after removing all suspicious methods. If removal is impossible, return all methods.

---

## Approach

1. Build a directed graph from the invocation list.
2. Perform **DFS** starting from method `k` to mark all suspicious methods.
3. Traverse every invocation:
   - If a non-suspicious method calls a suspicious method, removal is impossible.
   - Return every method.
4. Otherwise, return only the non-suspicious methods.

---

## Algorithm

1. Construct adjacency list.
2. DFS from `k`.
3. Mark every reachable node as suspicious.
4. Check every edge:
   - If an edge exists from a safe method to a suspicious method, return all methods.
5. Otherwise, return all safe methods.

---

## Complexity Analysis

- **Time Complexity:** `O(n + m)`
  - `n` = number of methods
  - `m` = number of invocations

- **Space Complexity:** `O(n + m)`

---

## Concepts Used

- Graph
- DFS
- Adjacency List
- Reachability
- Graph Traversal

---

## Solution

```cpp
class Solution {
public:
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
        vector<vector<int>> adj(n);

        for (auto &e : invocations)
            adj[e[0]].push_back(e[1]);

        vector<bool> suspicious(n, false);

        function<void(int)> dfs = [&](int u) {
            suspicious[u] = true;
            for (int v : adj[u]) {
                if (!suspicious[v])
                    dfs(v);
            }
        };

        dfs(k);

        for (auto &e : invocations) {
            int u = e[0], v = e[1];
            if (!suspicious[u] && suspicious[v]) {
                vector<int> ans;
                for (int i = 0; i < n; i++)
                    ans.push_back(i);
                return ans;
            }
        }

        vector<int> ans;
        for (int i = 0; i < n; i++) {
            if (!suspicious[i])
                ans.push_back(i);
        }

        return ans;
    }
};
```

---

## Key Takeaways

- DFS efficiently identifies all reachable suspicious methods.
- Checking incoming edges from safe nodes determines whether removal is valid.
- Graph traversal problems often require combining reachability with additional validation.

---

**Day 51 / 100** ✅