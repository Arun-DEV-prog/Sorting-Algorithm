#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void selection_sort()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // sorting part
    for (int i = 0; i < n - 1; i++)
    {
        int smallestIdx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[smallestIdx])
            {
                smallestIdx = j;
            }
        }
        swap(arr[i], arr[smallestIdx]);
    }

    // print the sorted array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        selection_sort();
        /* code */
    }
}