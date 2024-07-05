#include <iostream>

using namespace std;

void revarray(int *arr, int n, int i = 0)
{
    if (i >= n / 2)
    {
        return;
    }
    swap(arr[i], arr[n - i - 1]);
    revarray(arr, n, i + 1);
}

int main()
{
    int n;
    cout << "Size of the array:";
    cin >> n;

    int *arr = new int[n];
    cout << "Enter the elements:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    revarray(arr, n);
    cout << "Your reversed array:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    delete[] arr;
}