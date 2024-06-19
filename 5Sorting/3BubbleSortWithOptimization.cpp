#include <bits/stdc++.h>

using namespace std;

void bubblesort(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        bool swaped = false;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                swaped = true;
            }
        }
        if (swaped == false)
        {
            break;
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

    bubblesort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}