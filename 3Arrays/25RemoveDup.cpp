// Only for sorted Array

#include <iostream>

using namespace std;

void removeDup(int *arr, int &n)
{
    bool isthere[n] = {false};
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (isthere[arr[i]] == false)
        {
            isthere[arr[i]] = true;
            arr[k++] = arr[i];
        }
    }

    n = k;
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

    removeDup(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    delete[] arr;
}