// Only for sorted Array

#include <iostream>

using namespace std;

int maxOne(int *arr, int n)
{
    int cnt = 0;
    int maxcnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            cnt++;
            maxcnt = max(cnt, maxcnt);
        }
        else
        {
            cnt = 0;
        }
    }

    return maxcnt;
}

int main()
{
    int n;
    cout << "size:";
    cin >> n;

    int *arr = new int[n];
    cout << "elements:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int res = maxOne(arr, n);
    cout << res << endl;

    delete[] arr;
}