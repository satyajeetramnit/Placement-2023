// ramnitcode27
// Given 2 sorted arrays of integers, compute the pair of values(one values in each array) with the smallest non-negative difference.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n];
    int x[m];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < m; i++)
        cin >> x[i];
    int a = 0, b = 0;
    int result = INT_MAX;
    while (a < m && b < n)
    {
        if (abs(arr[a] - x[b]) < result)
            result = abs(arr[a] - x[b]);

        // Move Smaller Value
        if (arr[a] < x[b])
            a++;

        else
            b++;
    }
    cout << result << endl;
}