#include <iostream>

using namespace std;

void movingZeroes(int n, int *arr)
{
    int k = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[k] = arr[i];
            k++;
        }
    }
    for (int i = k; i < n; i++)
    {
        arr[i] = 0;
    }
    cout << "The array after moving zeroes at the end:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
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
    cout << "The array before moving zeroes at the end:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    movingZeroes(n, arr);

    delete[] arr;
}