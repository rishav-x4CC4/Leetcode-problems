# Day 42 - Sqrt(x)

## Problem Statement

Given a non-negative integer `x`, return the square root of `x` rounded down to the nearest integer.

The returned integer should be non-negative as well.

You **must not** use any built-in exponent function or operator.

**LeetCode:** 69 - Sqrt(x)

---

## Example 1

**Input**
```
x = 4
```

**Output**
```
2
```

---

## Example 2

**Input**
```
x = 8
```

**Output**
```
2
```

**Explanation**

The square root of `8` is `2.82842...`, and since we round it down, the answer is `2`.

---

## Approach (Binary Search)

Since the square root lies between `1` and `x`, we can use Binary Search.

1. Initialize `low = 1` and `high = x`.
2. Find the middle element.
3. Compute `mid × mid`.
4. If it equals `x`, return `mid`.
5. If it is smaller than `x`, store `mid` as a possible answer and search the right half.
6. Otherwise search the left half.
7. Return the last stored answer.

Using `long long` prevents integer overflow when computing `mid × mid`.

---

## Algorithm

1. Handle the cases where `x` is `0` or `1`.
2. Set `low = 1`, `high = x`, and `ans = 0`.
3. While `low <= high`:
   - Compute `mid`.
   - Calculate `mid × mid`.
   - If equal to `x`, return `mid`.
   - If less than `x`, update `ans` and move right.
   - Otherwise move left.
4. Return `ans`.

---

## C++ Solution

```cpp
#include <iostream>

using namespace std;

int mySqrt(int x) {
    if (x == 0 || x == 1)
        return x;

    int low = 1;
    int high = x;
    int ans = 0;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        long long square = 1LL * mid * mid;

        if (square == x)
            return mid;
        else if (square < x) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return ans;
}

int main() {
    int x;
    cin >> x;

    cout << mySqrt(x);

    return 0;
}
```

---

## Time Complexity

```
O(log x)
```

Binary Search halves the search space in every iteration.

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
- Integer Overflow
- Math
- Divide and Conquer

---

## Learning Outcome

- Learned how Binary Search can be applied to mathematical problems.
- Understood why `long long` is necessary to avoid overflow when computing `mid × mid`.
- Practiced finding the floor value of a square root in logarithmic time without using built-in functions.