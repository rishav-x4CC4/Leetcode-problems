#include <iostream>
using namespace std;

class Solution {
public:
    int digitFrequencyScore(int n) {
        if (n == 0) return 0;

        int ans = 0;
        while (n > 0) {
            ans += n % 10;
            n /= 10;
        }
        return ans;
    }
};

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    Solution s;
    cout << "Result: " << s.digitFrequencyScore(n) << endl;

    return 0;
}