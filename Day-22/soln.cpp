#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {

    if (nums.size() == 0)
        return 0;

    int k = 1;
    int current = nums[0];

    for (int i = 0; i < nums.size() - 1; i++) {

        if (current != nums[i + 1]) {

            nums[k] = nums[i + 1];
            k++;
        }

        current = nums[k - 1];
    }

    return k;
}

int main() {

    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter sorted array: ";

    for (int i = 0; i < n; i++)
        cin >> nums[i];

    int k = removeDuplicates(nums);

    cout << "Number of unique elements = " << k << endl;

    cout << "Updated array: ";

    for (int i = 0; i < k; i++)
        cout << nums[i] << " ";

    return 0;
}   