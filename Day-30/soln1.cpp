#include <iostream>
using namespace std;

int gcdOfOddEvenSums(int n) {
    return n;
}

int main() {
    int n;
    cin >> n;

    cout << gcdOfOddEvenSums(n);

    return 0;
}


// class Solution {
// public:
//     int gcdOfOddEvenSums(int n) {
//         int sumOdd =  n*n;
//         int sumEven = n*(n+1);
//         if(sumOdd==0 || sumEven==0) return max(sumEven, sumOdd);
//         int result = min(sumOdd, sumEven);
//         while (result > 0) {
//             if (sumOdd % result == 0 && sumEven % result == 0) {
//             break;
//             }
//         result--;
//         }
//         return result;
//     }
//     }; brute force approach