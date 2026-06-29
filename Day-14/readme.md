# Day 14 - Best Time to Buy and Sell Stock

**LeetCode 121 | Easy**

📅 Date: 29 June 2026

---

## Problem Statement

You are given an array `prices` where `prices[i]` is the price of a stock on the `iᵗʰ` day.

You want to maximize your profit by choosing a **single day to buy** one stock and choosing a **different day in the future** to sell that stock.

Return the **maximum profit** you can achieve from this transaction.

If no profit can be made, return `0`.

---

## Example 1

### Input

```text
prices = [7,1,5,3,6,4]
```

### Output

```text
5
```

### Explanation

* Buy on Day 2 at price **1**
* Sell on Day 5 at price **6**

Profit = **6 − 1 = 5**

---

## Example 2

### Input

```text
prices = [7,6,4,3,1]
```

### Output

```text
0
```

### Explanation

Since prices only decrease, no profitable transaction is possible.

---

# Intuition

While traversing the array:

* Keep track of the **lowest price seen so far**.
* At each day, calculate the profit if we sold today.
* Update the maximum profit whenever a better profit is found.

This allows us to solve the problem in **one traversal**.

---

# Approach

1. Initialize:

   * `minPrice = prices[0]`
   * `maxProfit = 0`
2. Traverse the array starting from index `1`.
3. Update `minPrice` whenever a lower price is found.
4. Otherwise, compute:

   * `profit = prices[i] - minPrice`
5. Update `maxProfit` if the current profit is greater.
6. Return `maxProfit`.

---

# Algorithm

```text
minPrice = prices[0]
maxProfit = 0

For each price after the first:
    minPrice = min(minPrice, currentPrice)
    profit = currentPrice - minPrice
    maxProfit = max(maxProfit, profit)

Return maxProfit
```

---

# C++ Solution

```cpp
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int maxProfit = 0;

        for (int i = 1; i < prices.size(); i++) {
            minPrice = min(minPrice, prices[i]);
            maxProfit = max(maxProfit, prices[i] - minPrice);
        }

        return maxProfit;
    }
};
```

---

# Dry Run

### Input

```text
prices = [7,1,5,3,6,4]
```

| Day | Price | Minimum Price | Profit | Maximum Profit |
| --- | ----- | ------------- | ------ | -------------- |
| 1   | 7     | 7             | 0      | 0              |
| 2   | 1     | 1             | 0      | 0              |
| 3   | 5     | 1             | 4      | 4              |
| 4   | 3     | 1             | 2      | 4              |
| 5   | 6     | 1             | 5      | 5              |
| 6   | 4     | 1             | 3      | 5              |

Final Answer:

```text
5
```

---

# Complexity Analysis

| Metric           | Complexity |
| ---------------- | ---------- |
| Time Complexity  | **O(n)**   |
| Space Complexity | **O(1)**   |

---

# Key Learning

* Greedy Algorithm
* One-pass Array Traversal
* Tracking Minimum Element
* Maximizing Difference
* Space Optimization

---

# Tags

`Array` `Greedy`

---

# Progress

| Day | Problem                                | Difficulty |
| --- | -------------------------------------- | ---------- |
| 14  | Best Time to Buy and Sell Stock (#121) | Easy       |

**Problems Solved:** **1** ✅
