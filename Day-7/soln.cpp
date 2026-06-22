#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

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

int main() {
    Solution obj;
    string s = "successes";

    cout << "Answer: " << obj.maxFreqSum(s) << endl;
    return 0;
}