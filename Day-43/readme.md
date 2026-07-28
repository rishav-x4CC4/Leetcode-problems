# Day 43 - Valid Perfect Square

## Problem Statement

Given a positive integer `num`, return `true` if `num` is a perfect square or `false` otherwise.

A **perfect square** is an integer that is the square of another integer.

You **must not** use any built-in library function such as `sqrt()`.

**LeetCode:** 367 - Valid Perfect Square

---

## Example 1

**Input**
```
num = 16
```

**Output**
```
true
```

**Explanation**

Since `4 × 4 = 16`, the number is a perfect square.

---

## Example 2

**Input**
```
num = 14
```

**Output**
```
false
```

**Explanation**

There is no integer whose square equals `14`.

---

## Approach (Binary Search)

Since the square root of a number lies between `1` and `num`, Binary Search can efficiently determine whether an integer square root exists.

1. Initialize `low = 1` and `high = num`.
2. Compute the middle value.
3. Calculate `mid × mid`.
4. If it equals `num`, return `true`.
5. If it is less than `num`, search the right half.
6. Otherwise, search the left half.
7. If no exact square is found, return `false`.

Using `long long` prevents integer overflow while computing `mid × mid`.

---

## Algorithm

1. Handle the special case when `num == 1`.
2. Set `low = 1` and `high = num`.
3. While `low <= high`:
   - Compute `mid`.
   - Calculate `mid × mid`.
   - If equal to `num`, return `true`.
   - If smaller, move `low` to `mid + 1`.
   - Otherwise move `high` to `mid - 1`.
4. Return `false` if no perfect square exists.

---

## C++ Solution

```cpp
#include <iostream>

using namespace std;

bool isPerfectSquare(int num) {
    if (num == 1)
        return true;

    long long low = 1;
    long long high = num;

    while (low <= high) {
        long long mid = low + (high - low) / 2;
        long long square = mid * mid;

        if (square == num)
            return true;
        else if (square < num)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return false;
}

int main() {
    int num;
    cin >> num;

    if (isPerfectSquare(num))
        cout << "true";
    else
        cout << "false";

    return 0;
}
```

---

## Time Complexity

```
O(log n)
```

Binary Search reduces the search space by half in every iteration.

---

## Space Complexity

```
O(1)
```

Only constant extra space is used.

---

## Key Concepts

- Binary Search
- Searching
- Math
- Integer Overflow
- Divide and Conquer

---

## Learning Outcome

- Learned how Binary Search can determine whether a number is a perfect square without using `sqrt()`.
- Understood the importance of using `long long` to avoid overflow when squaring large numbers.
- Practiced applying Binary Search to mathematical problems with logarithmic time complexity.