#include <iostream>
#include <algorithm>

using namespace std;

int chocodist(int *arr, int n, int m)
{
    if (m > n)
        return -1;
    sort(arr, arr + n);
    int res = arr[m - 1] - arr[0];
    for (int i = 0; (i + m - 1) < n; i++)
        res = min(res, arr[i + m - 1] - arr[i]);
    return res;
}

int main()
{
    int n;
    cout << "Size?";
    cin >> n;

    int *arr = new int[n];
    cout << "Elements:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int m;
    cout << "No of chocolate:";
    cin >> m;

    cout << chocodist(arr, n, m);

    delete[] arr;
}