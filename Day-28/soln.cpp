#include <iostream>
#include <vector>
using namespace std;

vector<int> plusOne(vector<int>& digits)
{
    for (int i = digits.size() - 1; i >= 0; i--)
    {
        if (digits[i] < 9)
        {
            digits[i]++;
            return digits;
        }

        digits[i] = 0;
    }

    digits.insert(digits.begin(), 1);

    return digits;
}

int main()
{
    int n;

    cout << "Enter number of digits: ";
    cin >> n;

    vector<int> digits(n);

    cout << "Enter digits:\n";

    for (int i = 0; i < n; i++)
        cin >> digits[i];

    vector<int> ans = plusOne(digits);

    cout << "\nResult:\n";

    for (int x : ans)
        cout << x << " ";

    return 0;
}