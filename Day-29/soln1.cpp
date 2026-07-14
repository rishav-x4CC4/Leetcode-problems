#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> computeLPS(string pattern)
{
    int m = pattern.length();
    vector<int> lps(m, 0);

    int len = 0;

    for (int i = 1; i < m;)
    {
        if (pattern[i] == pattern[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {
            if (len != 0)
                len = lps[len - 1];
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }

    return lps;
}

int findOccurrence(string haystack, string needle)
{
    vector<int> lps = computeLPS(needle);

    int i = 0, j = 0;

    while (i < haystack.length())
    {
        if (haystack[i] == needle[j])
        {
            i++;
            j++;
        }

        if (j == needle.length())
            return i - j;

        else if (i < haystack.length() && haystack[i] != needle[j])
        {
            if (j != 0)
                j = lps[j - 1];
            else
                i++;
        }
    }

    return -1;
}

int main()
{
    string haystack, needle;

    cout << "Enter haystack: ";
    cin >> haystack;

    cout << "Enter needle: ";
    cin >> needle;

    cout << "Answer = " << findOccurrence(haystack, needle);

    return 0;
}