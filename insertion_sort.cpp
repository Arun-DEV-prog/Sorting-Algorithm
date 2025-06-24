#include <iostream>
#include <vector>
using namespace std;

void insertion_sort()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 1; i < n; i++)
    {
        int curr = v[i];
        int prev = i - 1;

        while (prev >= 0 && v[prev] > curr)
        {
            /* code */
            v[prev + 1] = v[prev];
            prev--;
        }
        v[prev + 1] = curr;
    }

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        insertion_sort();
    }
}