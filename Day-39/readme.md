# Day 39 - Valid Parentheses

## Problem Statement

Given a string `s` containing just the characters `'('`, `')'`, `'{'`, `'}'`, `'['` and `']'`, determine if the input string is valid.

A string is considered valid if:

1. Open brackets must be closed by the same type of brackets.
2. Open brackets must be closed in the correct order.
3. Every closing bracket has a corresponding opening bracket.

**LeetCode:** 20 - Valid Parentheses

---

## Example 1

**Input**
```
s = "()"
```

**Output**
```
true
```

---

## Example 2

**Input**
```
s = "()[]{}"
```

**Output**
```
true
```

---

## Example 3

**Input**
```
s = "(]"
```

**Output**
```
false
```

---

## Example 4

**Input**
```
s = "([])"
```

**Output**
```
true
```

---

## Approach (Stack)

1. Traverse the string one character at a time.
2. Push every opening bracket onto a stack.
3. For every closing bracket:
   - If the stack is empty, return `false`.
   - Check whether the top of the stack matches the corresponding opening bracket.
   - If it doesn't match, return `false`.
   - Otherwise, pop the opening bracket.
4. After processing all characters, if the stack is empty, the parentheses are valid; otherwise, they are invalid.

---

## Algorithm

1. Create an empty stack.
2. Traverse each character of the string.
3. Push opening brackets onto the stack.
4. For closing brackets:
   - Return `false` if the stack is empty.
   - Compare the top of the stack with the matching opening bracket.
   - Pop the top if they match.
5. Return `true` if the stack is empty after traversal; otherwise return `false`.

---

## C++ Solution

```cpp
#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isValid(string s) {
    stack<char> st;

    for (char ch : s) {
        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        } else {
            if (st.empty())
                return false;

            if ((ch == ')' && st.top() != '(') ||
                (ch == '}' && st.top() != '{') ||
                (ch == ']' && st.top() != '['))
                return false;

            st.pop();
        }
    }

    return st.empty();
}

int main() {
    string s;
    cin >> s;

    if (isValid(s))
        cout << "true";
    else
        cout << "false";

    return 0;
}
```

---

## Time Complexity

```
O(n)
```

Each character is pushed and popped from the stack at most once.

---

## Space Complexity

```
O(n)
```

In the worst case, all opening brackets are stored in the stack.

---

## Key Concepts

- Stack
- Strings
- Bracket Matching
- LIFO (Last In, First Out)
- Linear Traversal

---

## Learning Outcome

- Learned how a stack efficiently handles matching symbols.
- Understood how LIFO order naturally validates nested parentheses.
- Practiced solving a classic stack-based interview problem with optimal time complexity.