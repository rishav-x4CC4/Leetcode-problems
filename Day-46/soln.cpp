#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> ans;
vector<string> keypad = {
    "", "", "abc", "def", "ghi", "jkl",
    "mno", "pqrs", "tuv", "wxyz"
};

void solve(string &digits, int index, string current) {
    if (index == digits.size()) {
        ans.push_back(current);
        return;
    }

    string letters = keypad[digits[index] - '0'];

    for (char ch : letters) {
        solve(digits, index + 1, current + ch);
    }
}

vector<string> letterCombinations(string digits) {
    ans.clear();

    if (digits.empty())
        return ans;

    solve(digits, 0, "");

    return ans;
}

int main() {
    string digits;
    cin >> digits;

    vector<string> result = letterCombinations(digits);

    for (string s : result)
        cout << s << " ";

    return 0;
}