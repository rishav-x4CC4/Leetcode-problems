#include <iostream>
#include <vector>

using namespace std;

void generateSubsets(int index, vector<int>& nums, vector<int>& current, vector<vector<int>>& ans) {
    if (index == nums.size()) {
        ans.push_back(current);
        return;
    }

    // Include current element
    current.push_back(nums[index]);
    generateSubsets(index + 1, nums, current, ans);

    // Exclude current element
    current.pop_back();
    generateSubsets(index + 1, nums, current, ans);
}

vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> ans;
    vector<int> current;

    generateSubsets(0, nums, current, ans);

    return ans;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<vector<int>> result = subsets(nums);

    for (auto subset : result) {
        cout << "[";
        for (int i = 0; i < subset.size(); i++) {
            cout << subset[i];
            if (i != subset.size() - 1)
                cout << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}