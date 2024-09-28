#include <iostream>
#include <algorithm>

using namespace std;

int mindiff(int *arr, int n)
{
    sort(arr, arr + n);

    int res = 1e9;
    for (int i = 0; i < n - 1; i++)
    {
        res = min(res, abs(arr[i + 1] - arr[i]));
    }

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

    cout << mindiff(arr, n) << endl;

    delete[] arr;
}