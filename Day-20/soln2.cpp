#include <iostream>
#include <vector>
using namespace std;

void reverseString(vector<char>& s) {
    int left = 0;
    int right = s.size() - 1;

    while (left < right) {
        swap(s[left], s[right]);
        left++;
        right--;
    }
}

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    vector<char> s(str.begin(), str.end());

    reverseString(s);

    cout << "Reversed string: ";
    for (char c : s) {
        cout << c;
    }

    cout << endl;

    return 0;
}