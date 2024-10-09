// Only for sorted Array

#include <iostream>

using namespace std;

void removeDup(int *arr, int &n)
{
    int i = 0;
    int j = 1;
    while (j < n)
    {
        if (arr[i] != arr[j])
        {
            i++;
        }
        arr[i] = arr[j];
        j++;
    }

    n = i + 1;
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