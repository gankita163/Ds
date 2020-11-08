#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int n, k, sec = 0;
    int arr[10];
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            if (arr[0] < k)
            {
                sec = k - arr[0];
            }
            else if (arr[0] >= k)
            {
                sec = 0;
            }
        }
        cout << sec;
    }
    return 0;
}