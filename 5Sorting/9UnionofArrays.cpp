#include <bits/stdc++.h>

using namespace std;

void unionarr(int *arr, int n, int *arrr, int nn)
{
    int i = 0;
    int j = 0;
    while (i < n && j < nn)
    {
        if (i > 0 && arr[i] == arr[i - 1])
        {
            i++;
            continue;
        }
        if (j > 0 && arrr[j] == arrr[j - 1])
        {
            j++;
            continue;
        }
        if (arr[i] < arrr[j])
        {
            cout << arr[i] << " ";
            i++;
        }
        else if (arr[i] > arrr[j])
        {
            cout << arrr[j] << " ";
            j++;
        }
        else
        {
            cout << arr[i] << " ";
            i++;
            j++;
        }
    }
}

int main()
{
    int n;
    cout << "Size:";
    cin >> n;

    int *arr = new int[n];
    cout << "Entre the elments of the array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int nn;
    cout << "Size:";
    cin >> nn;

    int *arrr = new int[nn];
    cout << "Entre the elments of the array:";
    for (int i = 0; i < nn; i++)
    {
        cin >> arrr[i];
    }

    unionarr(arr, n, arrr, nn);
}