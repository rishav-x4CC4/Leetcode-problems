#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans = nums;
        ans.insert(ans.end(), nums.begin(), nums.end());
        return ans;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {1, 2, 1};

    vector<int> result = obj.getConcatenation(nums);

    cout << "Output: ";
    for (int num : result) {
        cout << num << " ";
    }

    return 0;
}