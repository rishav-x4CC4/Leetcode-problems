# Day 12 - Merge Two Sorted Lists

**LeetCode 21 | Easy**

📅 Date: 27 June 2026

---

## Problem Statement

You are given the heads of two sorted linked lists `list1` and `list2`.

Merge the two lists into one **sorted linked list** by splicing together the nodes of the first two lists.

Return the head of the merged linked list.

---

## Example 1

### Input

```text
list1 = [1,2,4]
list2 = [1,3,4]
```

### Output

```text
[1,1,2,3,4,4]
```

---

## Example 2

### Input

```text
list1 = []
list2 = []
```

### Output

```text
[]
```

---

## Example 3

### Input

```text
list1 = []
list2 = [0]
```

### Output

```text
[0]
```

---

## Intuition

Since both linked lists are already sorted, we can compare the current nodes of both lists and always choose the **smaller value**.

Using a **dummy node** makes handling the head of the merged list much simpler.

---

## Approach

1. Create a dummy node.
2. Maintain a pointer `tail` pointing to the last node of the merged list.
3. Compare the current nodes of both lists.
4. Attach the smaller node to `tail`.
5. Move the corresponding pointer forward.
6. After one list ends, attach the remaining nodes of the other list.
7. Return `dummy->next`.

---

## Algorithm

```text
Create a dummy node
tail = dummy

While list1 and list2 are not NULL:
    If list1->val <= list2->val:
        tail->next = list1
        list1 = list1->next
    Else:
        tail->next = list2
        list2 = list2->next

    tail = tail->next

If list1 is not NULL:
    tail->next = list1

If list2 is not NULL:
    tail->next = list2

Return dummy->next
```

---

## C++ Solution

```cpp
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy;
        ListNode* tail = &dummy;

        while (list1 && list2) {
            if (list1->val <= list2->val) {
                tail->next = list1;
                list1 = list1->next;
            } else {
                tail->next = list2;
                list2 = list2->next;
            }

            tail = tail->next;
        }

        if (list1)
            tail->next = list1;
        else
            tail->next = list2;

        return dummy.next;
    }
};
```

---

## Dry Run

### Input

```text
list1 = 1 → 2 → 4
list2 = 1 → 3 → 4
```

| Step | Chosen Node | Merged List           |
| ---- | ----------- | --------------------- |
| 1    | 1 (list1)   | 1                     |
| 2    | 1 (list2)   | 1 → 1                 |
| 3    | 2           | 1 → 1 → 2             |
| 4    | 3           | 1 → 1 → 2 → 3         |
| 5    | 4 (list1)   | 1 → 1 → 2 → 3 → 4     |
| 6    | 4 (list2)   | 1 → 1 → 2 → 3 → 4 → 4 |

Final Answer:

```text
1 → 1 → 2 → 3 → 4 → 4
```

---

## Complexity Analysis

| Metric           | Complexity   |
| ---------------- | ------------ |
| Time Complexity  | **O(n + m)** |
| Space Complexity | **O(1)**     |

where `n` and `m` are the lengths of the two linked lists.

---

## Key Learning

* Linked List traversal
* Dummy node technique
* Two-pointer approach
* In-place linked list merging

---

## Tags

`Linked List` `Recursion` `Two Pointers`

---

## Progress

| Day | Problem                      | Difficulty |
| --- | ---------------------------- | ---------- |
| 12  | Merge Two Sorted Lists (#21) | Easy       |

**Problems Solved:** 1 ✅
