#include <iostream>

using namespace std;

int partition(int s, int e, int *arr)
{
    int pivot = arr[s];

    int cnt = 0;

    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            cnt++;
        }
    }

    int pivotIndex = s + cnt;

    swap(arr[s], arr[pivotIndex]);

    int i = s;
    int j = e;
    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] < pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
}

void QuickSort(int s, int e, int *arr)
{
    if (s >= e)
    {
        return;
    }

    int p = partition(s, e, arr);

    QuickSort(s, p - 1, arr);
    QuickSort(p + 1, e, arr);
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

    QuickSort(0, n - 1, arr);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;
}