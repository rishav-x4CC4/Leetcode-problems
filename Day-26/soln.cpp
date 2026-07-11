#include <iostream>
#include <vector>
using namespace std;

vector<int> sortArrayByParity(vector<int>& nums)
{
    int left = 0;
    int right = nums.size() - 1;

    while (left < right)
    {
        while (left < right && nums[left] % 2 == 0)
            left++;

        while (left < right && nums[right] % 2 == 1)
            right--;

        if (left < right)
            swap(nums[left], nums[right]);
    }

    return nums;
}

int main()
{
    int n;

    cout << "Enter size: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    sortArrayByParity(nums);

    cout << "\nSorted Array:\n";
    for (int x : nums)
        cout << x << " ";

    return 0;
}