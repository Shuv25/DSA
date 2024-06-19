#include <iostream>

using namespace std;

void InsertionSort(int n, int *arr)
{
    for (int i = 0; i < n; i++)
    {
        int k = arr[i];
        int j;
        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] > k)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = k;
    }
}

int main()
{
    int n;
    cout << "Enter the size of the array:";
    cin >> n;

    int *arr = new int[n];

    cout << "Enter the eleents of the array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    InsertionSort(n, arr);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;
}