# Day 21 - Single Number & Intersection of Two Arrays II

📅 Date: **06 July 2026**

Today I solved **2 LeetCode problems**.

---

# Problem 1

## LeetCode 136 - Single Number

**Difficulty:** Easy

### Problem Statement

Given a non-empty array of integers, every element appears twice except for one. Find that single element.

The solution should run in linear time and use constant extra space.

### Approach

- Initialize an answer variable to `0`.
- Traverse the array.
- XOR every element with the answer.
- Duplicate numbers cancel each other, leaving only the unique number.

### Complexity

- Time : **O(n)**
- Space : **O(1)**

---

# Problem 2

## LeetCode 350 - Intersection of Two Arrays II

**Difficulty:** Easy

### Problem Statement

Given two integer arrays, return their intersection.

Each element should appear as many times as it appears in both arrays.

### Approach

- Maintain a boolean array to keep track of already matched elements in the second array.
- Compare every element of the first array with the second array.
- If a match is found and the element has not been used before:
  - Add it to the answer.
  - Mark it as used.
  - Break the inner loop.

### Complexity

- Time : **O(n × m)**
- Space : **O(m)**

---

# Problems Solved Today

| Problem | Difficulty |
|----------|------------|
| Single Number (#136) | 🟢 Easy |
| Intersection of Two Arrays II (#350) | 🟢 Easy |

---

# Key Learnings

- XOR Operation
- Bit Manipulation
- Nested Loops
- Array Traversal
- Boolean Visited Array

---

## Progress

**Problems solved today:** **2** ✅