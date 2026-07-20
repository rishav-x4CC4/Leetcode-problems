# Day 35 - 100 Days of DSA Challenge

## 📅 Date
**20 July 2026**

## 📌 Problem Solved

### 1. LeetCode 23 - Merge k Sorted Lists
- **Difficulty:** 🔴 Hard
- **Topic(s):** Linked List, Heap (Priority Queue), Divide & Conquer
- **Link:** https://leetcode.com/problems/merge-k-sorted-lists/

---

## 💡 Problem Statement

You are given an array of `k` sorted linked lists. Merge all the linked lists into one sorted linked list and return it.

---

## 💡 Approach

- Push the head of every non-empty linked list into a min-heap.
- Repeatedly extract the smallest node.
- Append it to the answer list.
- If the extracted node has a next node, push it into the heap.
- Continue until the heap becomes empty.

---

## ⏱️ Complexity

- **Time:** `O(N log K)`
- **Space:** `O(K)`

Where:
- `N` = Total number of nodes
- `K` = Number of linked lists

---

## ✅ Key Learnings

- Learned how to merge multiple sorted lists efficiently.
- Understood the use of **Priority Queue (Min Heap)** with linked lists.
- Improved understanding of Heap-based optimization.