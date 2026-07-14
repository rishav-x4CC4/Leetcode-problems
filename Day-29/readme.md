# Day 29 - String Matching & Dynamic Programming

📅 Date: **14 July 2026**

Today I solved **2 LeetCode problems**.

---

# Problems

## 1. LeetCode 28 - Find the Index of the First Occurrence in a String

**Difficulty:** 🟢 Easy

### Approach

- Solved using the **Knuth-Morris-Pratt (KMP)** Algorithm.
- Constructed the LPS array.
- Used LPS to efficiently skip unnecessary comparisons.

**Time Complexity:** O(n + m)

**Space Complexity:** O(m)

---

## 2. LeetCode 152 - Maximum Product Subarray

**Difficulty:** 🟡 Medium

### Approach

- Maintain both the **maximum** and **minimum** product ending at each position.
- Swap max/min whenever a negative number appears.
- Update the global maximum throughout traversal.

**Time Complexity:** O(n)

**Space Complexity:** O(1)

---

# Problems Solved Today

| Problem | Difficulty |
|----------|------------|
| Find the Index of the First Occurrence in a String (#28) | 🟢 Easy |
| Maximum Product Subarray (#152) | 🟡 Medium |

---

# Key Learnings

- KMP Algorithm
- Longest Prefix Suffix (LPS)
- Pattern Matching
- Dynamic Programming
- Handling Negative Products
- Optimized State Tracking

---

## Progress

**Problems solved today:** **2** ✅