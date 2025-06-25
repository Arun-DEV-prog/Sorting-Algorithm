#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &v, int st, int mid, int end)
{
    vector<int> temp;
    int i = st, j = mid + 1;

    while (i <= mid && j <= end)
    {
        if (v[i] <= v[j])
        {
            temp.push_back(v[i]);
            i++;
        }
        else
        {
            temp.push_back(v[j]);
            j++;
        }
    }

    while (i <= mid)
    {
        temp.push_back(v[i]);
        i++;
    }
    while (j <= end)
    {
        temp.push_back(v[j]);
        j++;
    }

    for (int idx = 0; idx < temp.size(); idx++)
    {
        v[idx + st] = temp[idx];
    }
}

void Merge_sort(vector<int> &v, int st, int end)
{
    if (st < end)
    {
        int mid = st + (end - 1) / 2;
        Merge_sort(v, st, mid);
        Merge_sort(v, mid + 1, end);

        merge(v, st, mid, end);
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        Merge_sort(v, 0, v.size() - 1);
    }
}