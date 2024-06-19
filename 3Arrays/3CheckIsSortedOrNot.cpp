#include <iostream>

using namespace std;

bool isSortedArray(int n, int *arr)
{
    for (int i = 0; i < n - 1; ++i)
    {
        if (arr[i] > arr[i + 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter the size of the array:";
    cin >> n;

    int *arr = new int[n];
    cout << "Enter the elements of the array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int isSorted = isSortedArray(n, arr);

    if (isSorted == 0)
    {
        cout << "The array is not sorted." << endl;
    }
    else
    {
        cout << "The array is sorted" << endl;
    }

    delete[] arr;
}