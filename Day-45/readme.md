# Day 45 - Minimum Number of Pushes to Type Word I

## Problem Statement

You are given a string `word` consisting of **distinct lowercase English letters**.

Telephone keypads have keys numbered **2 to 9**, and the letters can be remapped to these keys. Each key can contain any number of letters, but every letter must belong to exactly one key.

Typing a letter requires pressing its assigned key based on its position on that key:

- 1st letter on a key → 1 push
- 2nd letter → 2 pushes
- 3rd letter → 3 pushes
- and so on.

Return the **minimum number of pushes** required to type the given word after optimally remapping the keys.

**LeetCode:** 3014 - Minimum Number of Pushes to Type Word I

---

## Example 1

**Input**
```
word = "abcde"
```

**Output**
```
5
```

---

## Example 2

**Input**
```
word = "xycdefghij"
```

**Output**
```
12
```

---

## Approach (Greedy)

There are **8 available keys (2–9)**.

To minimize the total number of pushes:

- Put the first **8 letters** in the first position of each key (1 push each).
- Put the next **8 letters** in the second position (2 pushes each).
- Continue similarly.

Since all letters are distinct, only the number of characters matters.

For the `i-th` character:

```
pushes = (i / 8) + 1
```

---

## Algorithm

1. Find the length of the word.
2. Initialize the answer to `0`.
3. Traverse every character.
4. Add `(i / 8) + 1` to the answer.
5. Return the total pushes.

---

## C++ Solution

```cpp
#include <iostream>
#include <string>

using namespace std;

int minimumPushes(string word) {
    int n = word.length();
    int pushes = 0;

    for (int i = 0; i < n; i++) {
        pushes += (i / 8) + 1;
    }

    return pushes;
}

int main() {
    string word;
    cin >> word;

    cout << minimumPushes(word);

    return 0;
}
```

---

## Time Complexity

```
O(n)
```

where `n` is the length of the word.

---

## Space Complexity

```
O(1)
```

Only a few variables are used.

---

## Key Concepts

- Greedy Algorithm
- Strings
- Simulation
- Mathematics

---

## Learning Outcome

- Learned how Greedy algorithms minimize the total number of operations.
- Understood how assigning the most accessible positions first leads to the optimal solution.
- Practiced solving an optimization problem using simple mathematical observations.