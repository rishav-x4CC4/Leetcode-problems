#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

vector<int> findMissingElements(vector<int>& nums) {
    int mn = *min_element(nums.begin(), nums.end());
    int mx = *max_element(nums.begin(), nums.end());

    unordered_set<int> st(nums.begin(), nums.end());

    vector<int> ans;

    for (int i = mn; i <= mx; i++) {
        if (!st.count(i))
            ans.push_back(i);
    }

    return ans;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++)
        cin >> nums[i];

    vector<int> ans = findMissingElements(nums);

    if (ans.empty()) {
        cout << "No missing elements";
    } else {
        for (int x : ans)
            cout << x << " ";
    }

    return 0;
}