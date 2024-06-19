#include <bits/stdc++.h>

using namespace std;

void intersection(int *arr, int n, int *arrr, int nn)
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
        if (arr[i] < arrr[j])
        {
            i++;
        }
        else if (arr[i] > arrr[j])
        {
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

    intersection(arr, n, arrr, nn);
}