#include <iostream>

using namespace std;

bool isPerfectSquare(int num) {
    if (num == 1)
        return true;

    long long low = 1;
    long long high = num;

    while (low <= high) {
        long long mid = low + (high - low) / 2;
        long long square = mid * mid;

        if (square == num)
            return true;
        else if (square < num)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return false;
}

int main() {
    int num;
    cin >> num;

    if (isPerfectSquare(num))
        cout << "true";
    else
        cout << "false";

    return 0;
}