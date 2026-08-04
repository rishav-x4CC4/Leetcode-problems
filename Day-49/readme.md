# Day 49 - Longest Substring Without Repeating Characters

## Problem Statement

Given a string `s`, find the length of the longest substring without repeating characters.

**LeetCode:** 3 - Longest Substring Without Repeating Characters

---

## Example 1

**Input**

```
s = "abcabcbb"
```

**Output**

```
3
```

**Explanation**

The answer is `"abc"` with length **3**.

---

## Example 2

**Input**

```
s = "bbbbb"
```

**Output**

```
1
```

---

## Example 3

**Input**

```
s = "pwwkew"
```

**Output**

```
3
```

The answer is `"wke"`.

---

## Approach

Use the **Sliding Window** technique.

- Maintain a window containing unique characters.
- Store the last occurrence of every character.
- If a duplicate appears inside the current window, move the left pointer.
- Update the maximum window size throughout the traversal.

---

## Algorithm

1. Create an array storing the last occurrence of each character.
2. Initialize two pointers (`left` and `right`).
3. Traverse the string using `right`.
4. If the current character already exists inside the window, move `left`.
5. Update the last occurrence of the character.
6. Update the maximum window length.
7. Return the answer.

---

## C++ Solution

```cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int lengthOfLongestSubstring(string s) {
    vector<int> lastIndex(256, -1);

    int left = 0;
    int ans = 0;

    for (int right = 0; right < s.size(); right++) {
        if (lastIndex[s[right]] >= left)
            left = lastIndex[s[right]] + 1;

        lastIndex[s[right]] = right;
        ans = max(ans, right - left + 1);
    }

    return ans;
}

int main() {
    string s;
    cin >> s;

    cout << lengthOfLongestSubstring(s);

    return 0;
}
```

---

## Time Complexity

```
O(n)
```

Each character is processed at most once.

---

## Space Complexity

```
O(1)
```

A fixed-size array of 256 characters is used.

---

## Key Concepts

- Sliding Window
- Two Pointers
- Hashing
- Strings

---

## Learning Outcome

- Learned how the Sliding Window technique optimizes substring problems.
- Practiced tracking the last occurrence of characters.
- Understood how to maintain a valid window in linear time.