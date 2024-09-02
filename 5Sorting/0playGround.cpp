#include <iostream>

using namespace std;

void merge(int *arr, int low, int high, int m)
{
    int lsize = m - low + 1;
    int rsize = high - m;

    int *larr = new int[lsize];
    int *rarr = new int[rsize];

    int k = low;

    for (int i = 0; i < lsize; i++)
    {
        larr[i++] = arr[k++];
    }
    for (int i = 0; i < rsize; i++)
    {
        rarr[i++] = arr[k++];
    }

    k = low;
    int i = 0;
    int j = 0;

    while (i < lsize && j < rsize)
    {
        if (larr[i] <= rarr[j])
        {
            arr[k++] = larr[i++];
        }
        else
        {
            arr[k++] = rarr[j++];
        }
    }

    while (i < lsize)
    {
        arr[k++] = larr[i++];
    }
    while (j < rsize)
    {
        arr[k++] = rarr[j++];
    }

    delete[] larr;
    delete[] rarr;
}

void mergesort(int *arr, int low, int high)
{
    if (low < high)
    {
        int m = (low + high) / 2;
        mergesort(arr, low, m);
        mergesort(arr, m + 1, high);
        merge(arr, low, high, m);
    }
}

int main()
{
    int n;
    cout << "Size?";
    cin >> n;

    int *arr = new int[n];
    cout << "Elements:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    mergesort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    delete[] arr;
}