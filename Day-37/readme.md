# Day 37 - 3Sum Closest

## Problem
**LeetCode 16 - 3Sum Closest**

**Link:** https://leetcode.com/problems/3sum-closest/

---

## Difficulty
🟡 Medium

---

## Problem Statement

Given an integer array `nums` of length `n` and an integer `target`, find three integers in `nums` such that the sum is closest to `target`.

Return the sum of the three integers.

---

## Approach

1. Sort the array.
2. Iterate through the array, fixing one element at a time.
3. Use two pointers (`left` and `right`) to find the best pair.
4. Calculate the current sum.
5. If the current sum is closer to the target than the previous best, update the answer.
6. Move:
   - `left++` if the sum is smaller than the target.
   - `right--` if the sum is greater than the target.
7. If the sum equals the target, return it immediately since it is the closest possible answer.

---

## Algorithm

- Sort the array.
- Initialize the closest sum using the first three elements.
- For every index `i`:
  - Set `left = i + 1` and `right = n - 1`.
  - While `left < right`:
    - Compute the current sum.
    - Update the closest sum if needed.
    - Move the pointers based on comparison with the target.
- Return the closest sum.

---

## Time Complexity

**O(n²)**

- Sorting takes **O(n log n)**.
- The two-pointer traversal for each element takes **O(n)**.
- Overall complexity is **O(n²)**.

---

## Space Complexity

**O(1)**

Only constant extra space is used (excluding the sorting implementation).

---

## Concepts Used

- Arrays
- Sorting
- Two Pointers
- Greedy
- Optimization

---

## Learning Outcome

This problem demonstrates how sorting combined with the Two Pointer technique reduces the brute-force solution from **O(n³)** to **O(n²)** while efficiently finding the closest possible sum.