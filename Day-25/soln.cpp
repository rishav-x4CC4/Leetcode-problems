#include <iostream>
using namespace std;

int xorOperation(int n, int start)
{
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans ^= (start + 2 * i);
    }

    return ans;
}

int main()
{
    int n, start;

    cout << "Enter n and start: ";
    cin >> n >> start;

    cout << "XOR = " << xorOperation(n, start);

    return 0;
}