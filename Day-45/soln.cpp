#include <iostream>
#include <string>

using namespace std;

int minimumPushes(string word) {
    int n = word.length();
    int pushes = 0;

    for (int i = 0; i < n; i++) {
        pushes += (i / 8) + 1;
    }

    return pushes;
}

int main() {
    string word;
    cin >> word;

    cout << minimumPushes(word);

    return 0;
}