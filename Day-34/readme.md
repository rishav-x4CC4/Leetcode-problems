# Day 34 - 100 Days of DSA Challenge

## 📅 Date
**19 July 2026**

## 📌 Problem Solved

### 1. LeetCode 51 - N-Queens
- **Difficulty:** 🔴 Hard
- **Topic(s):** Backtracking, Recursion, DFS
- **Link:** https://leetcode.com/problems/n-queens/

---

## 💡 Problem Statement

Given an integer `n`, return all distinct solutions to the **N-Queens** puzzle.

Each solution contains a distinct board configuration where:

- `'Q'` represents a queen.
- `'.'` represents an empty space.

No two queens can attack each other.

---

## 💡 Approach

- Place queens row by row.
- Before placing a queen, ensure:
  - No queen exists in the same column.
  - No queen exists on the left diagonal.
  - No queen exists on the right diagonal.
- Use backtracking to explore all possible valid configurations.
- Store every valid board when all queens are successfully placed.

---

## ⏱️ Complexity

- **Time:** `O(N!)`
- **Space:** `O(N²)`

---

## ✅ Key Learnings

- Backtracking explores all valid possibilities efficiently.
- Boolean arrays make conflict checking `O(1)`.
- Diagonal indexing is a common optimization for chessboard problems.