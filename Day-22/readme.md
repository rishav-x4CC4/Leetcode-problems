# Day 22 - Remove Duplicates from Sorted Array

📅 Date: **07 July 2026**

Today I solved **1 LeetCode problem**.

---

# Problem

## LeetCode 26 - Remove Duplicates from Sorted Array

**Difficulty:** Easy

### Problem Statement

Given a sorted array `nums`, remove the duplicates **in-place** such that each unique element appears only once.

Return the number of unique elements.

---

### Approach

- If the array is empty, return `0`.
- Maintain an index `k` representing the next unique position.
- Store the current unique value.
- Traverse the array once.
- Whenever a new unique element is found:
  - Place it at index `k`.
  - Increment `k`.
- Return `k`.

---

### Complexity

- **Time:** O(n)
- **Space:** O(1)

---

# Problem Solved Today

| Problem | Difficulty |
|----------|------------|
| Remove Duplicates from Sorted Array (#26) | 🟢 Easy |

---

# Key Learnings

- Two Pointer Technique
- In-place Array Modification
- Sorted Arrays
- Array Traversal

---

## Progress

**Problems solved today:** **1** ✅