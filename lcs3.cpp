#include <bits/stdc++.h>
using namespace std;

int lcs(string &s1, string &s2, int m, int n)
{
    // if (m == 0 && n == 0)
    // {
    //     return 0;
    // }

    // if (s1[m - 1] == s2[n - 1])
    // {
    //     return 1 + lcs(s1, s2, m - 1, n - 1);
    // }
    // else
    // {
    //     return max(lcs(s1, s2, m, n - 1) , lcs(s1, s2, m - 1, n));
    // }

    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (s1[i - 1] == s2[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else
            {
                        }
        }
    }
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    int m = s1.size();
    int n = s2.size();

    cout << lcs(s1, s2, m, n)
}