#include <iostream>
#include <algorithm>
using namespace std;

int lcsREC(string &s1, string &s2, int m, int n)
{
    // base case if length is empty,
    if (m == 0 || n == 0)
    {
        return 0;
    }

    // if the last character of both substring match
    if (s1[m - 1] == s2[n - 1])
    {
        return 1 + lcsREC(s1, s2, m - 1, n - 1);
    }
    else
    {
        return max(lcsREC(s1, s2, m, n - 1), lcsREC(s1, s2, m - 1, n));
    }
}

int lcs(string &s1, string &s2, int m, int n)
{
    return lcsREC(s1, s2, m, n);
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int m = s1.size();
    int n = s2.size();

    cout << lcs(s1, s2, m, n) << endl;
}