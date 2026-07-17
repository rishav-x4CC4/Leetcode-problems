# Day 32 - 100 Days of DSA Challenge

## 📅 Date
**17 July 2026**

## 📌 Problems Solved

### 1. LeetCode 15 - 3Sum
- **Difficulty:** 🟡 Medium
- **Topic(s):** Arrays, Sorting, Two Pointers
- **Link:** https://leetcode.com/problems/3sum/

### Problem Statement
Given an integer array `nums`, return all the unique triplets `[nums[i], nums[j], nums[k]]` such that:

- `i != j`
- `i != k`
- `j != k`
- `nums[i] + nums[j] + nums[k] == 0`

The solution must not contain duplicate triplets.

---

## 💡 Approach

- Sort the array.
- Fix one element.
- Use two pointers (`left` and `right`) to find the remaining two numbers.
- Skip duplicate values to avoid repeated triplets.

---

## ⏱️ Complexity

- **Time:** `O(n²)`
- **Space:** `O(1)` (excluding output vector)

---

## ✅ Key Learnings

- Sorting simplifies duplicate handling.
- Two pointers efficiently solve pair-based search problems.
- Careful duplicate skipping is crucial in interview questions.