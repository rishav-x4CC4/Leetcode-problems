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