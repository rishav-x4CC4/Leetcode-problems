#include <iostream>
using namespace std;

class Solution {
public:
    int digitProduct(int x) {
        if (x == 0) return 0;

        int product = 1;

        while (x > 0) {
            product *= (x % 10);
            x /= 10;
        }

        return product;
    }

    int smallestNumber(int n, int t) {
        while (true) {
            if (digitProduct(n) % t == 0)
                return n;
            n++;
        }
    }
};

int main() {
    int n, t;
    cin >> n >> t;

    Solution obj;
    cout << obj.smallestNumber(n, t);

    return 0;
}