#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> arrayRankTransform(vector<int>& arr)
{
    int n = arr.size();

    if (n == 0)
        return {};

    vector<pair<int, int>> temp;

    for (int i = 0; i < n; i++)
        temp.push_back({arr[i], i});

    sort(temp.begin(), temp.end());

    vector<int> ans(n);

    int rank = 1;
    ans[temp[0].second] = rank;

    for (int i = 1; i < n; i++)
    {
        if (temp[i].first != temp[i - 1].first)
            rank++;

        ans[temp[i].second] = rank;
    }

    return ans;
}

int main()
{
    int n;

    cout << "Enter size: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements:\n";

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<int> ans = arrayRankTransform(arr);

    cout << "\nRank Transformed Array:\n";

    for (int x : ans)
        cout << x << " ";

    return 0;
}