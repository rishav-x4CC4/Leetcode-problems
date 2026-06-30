#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.length() - 1;

        while (i >= 0 && s[i] == ' ')
            i--;

        int count = 0;

        while (i >= 0 && s[i] != ' ') {
            count++;
            i--;
        }

        return count;
    }
};

int main() {
    Solution obj;

    string s = "Hello World";

    cout << "Length of Last Word: " << obj.lengthOfLastWord(s) << endl;

    return 0;
}