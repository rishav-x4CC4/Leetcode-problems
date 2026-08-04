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