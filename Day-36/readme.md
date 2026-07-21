# Day 36 - 4Sum

## Problem
LeetCode 18 - 4Sum

## Approach
- Sort the array.
- Fix the first two elements using nested loops.
- Use the two-pointer technique to find the remaining two elements.
- Skip duplicate values to avoid repeated quadruplets.

## Algorithm
1. Sort the array.
2. Iterate through the first element.
3. Iterate through the second element.
4. Use two pointers (`left`, `right`) to search for the remaining pair.
5. Store valid quadruplets and skip duplicates.

## Time Complexity
O(n³)

## Space Complexity
O(1) (excluding output)

## Topics
- Arrays
- Sorting
- Two Pointers