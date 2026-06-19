#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string defangIPaddr(string address) {
        string ans = "";

        for(char ch : address) {
            if(ch == '.')
                ans += "[.]";
            else
                ans += ch;
        }

        return ans;
    }
};

int main() {
    Solution obj;

    string address = "1.1.1.1";

    cout << obj.defangIPaddr(address);

    return 0;
}