# Day 7 - Find Most Frequent Vowel and Consonant

**LeetCode 3541 | Easy**

📅 Date: 22 June 2026

---

## Problem Statement

You are given a string `s` consisting of lowercase English letters (`'a'` to `'z'`).

Your task is to:

* Find the vowel (`a`, `e`, `i`, `o`, `u`) with the **maximum frequency**
* Find the consonant (all other letters) with the **maximum frequency**

Return the **sum of these two frequencies**.

### Note

* If multiple vowels or consonants have the same maximum frequency, any one of them may be chosen.
* If there are no vowels or no consonants in the string, consider that frequency as `0`.

---

## Example 1

### Input

```text
s = "successes"
```

### Output

```text
6
```

### Explanation

* Vowels:

  * `u` → 1
  * `e` → 2
    Maximum vowel frequency = **2**

* Consonants:

  * `s` → 4
  * `c` → 2
    Maximum consonant frequency = **4**

So, the answer is:

```text
2 + 4 = 6
```

---

## Intuition

We need to count how many times each character appears in the string.

After that:

* among vowels, find the maximum frequency
* among consonants, find the maximum frequency

Then simply return their sum.

Since there are only 26 lowercase English letters, frequency counting is very efficient.

---

## Approach

1. Create a frequency array of size `26`.
2. Traverse the string and count the occurrences of each character.
3. Traverse all 26 letters:

   * if the letter is a vowel, update `maxVowel`
   * otherwise, update `maxConsonant`
4. Return `maxVowel + maxConsonant`.

---

## Algorithm

```text
Create freq[26] initialized with 0

For each character ch in s:
    freq[ch - 'a']++

Initialize maxVowel = 0
Initialize maxConsonant = 0

For each letter from 'a' to 'z':
    If it is a vowel:
        maxVowel = max(maxVowel, its frequency)
    Else:
        maxConsonant = max(maxConsonant, its frequency)

Return maxVowel + maxConsonant
```

---

## C++ Solution

```cpp
class Solution {
public:
    int maxFreqSum(string s) {
        vector<int> freq(26, 0);

        for (char ch : s) {
            freq[ch - 'a']++;
        }

        int maxVowel = 0, maxConsonant = 0;

        for (int i = 0; i < 26; i++) {
            char ch = 'a' + i;

            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                maxVowel = max(maxVowel, freq[i]);
            } else {
                maxConsonant = max(maxConsonant, freq[i]);
            }
        }

        return maxVowel + maxConsonant;
    }
};
```

---

## Dry Run

### Input

```text
s = "successes"
```

### Frequency count

| Character | Frequency |
| --------- | --------- |
| s         | 4         |
| u         | 1         |
| c         | 2         |
| e         | 2         |

### Maximums

* Maximum vowel frequency = `2` (`e`)
* Maximum consonant frequency = `4` (`s`)

### Final Answer

```text
2 + 4 = 6
```

---

## Complexity Analysis

| Metric           | Complexity       |
| ---------------- | ---------------- |
| Time Complexity  | O(n + 26) ≈ O(n) |
| Space Complexity | O(26) ≈ O(1)     |

where `n` is the length of the string.

---

## Key Learning

* Frequency counting with arrays
* Distinguishing vowels and consonants
* Constant-space counting for lowercase English letters
* Finding maximum frequency in categorized characters

---

## Tags

`String` `Hashing` `Counting`

---

## Progress

| Day | Problem                                        | Difficulty |
| --- | ---------------------------------------------- | ---------- |
| 7   | Find Most Frequent Vowel and Consonant (#3541) | Easy       |

**Problems Solved:** 1 ✅
