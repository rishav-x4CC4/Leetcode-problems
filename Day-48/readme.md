# Day 48 - Add Two Numbers

## Problem Statement

You are given two non-empty linked lists representing two non-negative integers.

The digits are stored in reverse order, and each node contains a single digit.

Add the two numbers and return the sum as a linked list.

**LeetCode:** 2 - Add Two Numbers

---

## Example 1

**Input**

```
l1 = [2,4,3]
l2 = [5,6,4]
```

**Output**

```
[7,0,8]
```

Explanation:

```
342 + 465 = 807
```

---

## Example 2

**Input**

```
l1 = [0]
l2 = [0]
```

**Output**

```
[0]
```

---

## Example 3

**Input**

```
l1 = [9,9,9,9,9,9,9]
l2 = [9,9,9,9]
```

**Output**

```
[8,9,9,9,0,0,0,1]
```

---

## Approach

Traverse both linked lists simultaneously.

- Add corresponding digits along with the carry.
- Create a new node containing `sum % 10`.
- Update the carry as `sum / 10`.
- Continue until both lists and the carry are exhausted.

A dummy node simplifies handling the head of the result list.

---

## Algorithm

1. Create a dummy node.
2. Initialize `carry = 0`.
3. While either list has nodes or carry exists:
   - Compute the current sum.
   - Update carry.
   - Create a new node with `sum % 10`.
4. Return `dummy->next`.

---

## C++ Solution

```cpp
#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) {
        val = x;
        next = nullptr;
    }
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* dummy = new ListNode(0);
    ListNode* curr = dummy;

    int carry = 0;

    while (l1 != nullptr || l2 != nullptr || carry) {
        int sum = carry;

        if (l1) {
            sum += l1->val;
            l1 = l1->next;
        }

        if (l2) {
            sum += l2->val;
            l2 = l2->next;
        }

        carry = sum / 10;
        curr->next = new ListNode(sum % 10);
        curr = curr->next;
    }

    return dummy->next;
}
```

---

## Time Complexity

```
O(max(n, m))
```

where `n` and `m` are the lengths of the two linked lists.

---

## Space Complexity

```
O(max(n, m))
```

The output linked list stores the resulting number.

---

## Key Concepts

- Linked List
- Simulation
- Carry Propagation
- Dummy Node

---

## Learning Outcome

- Practiced addition on linked lists.
- Learned how dummy nodes simplify linked list construction.
- Understood carry handling while traversing multiple linked lists.