#include <iostream>

using namespace std;

void merge(int *arr, int l, int r, int m)
{
    int n1 = m - l + 1;
    int n2 = r - m;

    int *arr1 = new int[n1];
    int *arr2 = new int[n2];

    int k = l;

    for (int i = 0; i < n1; i++)
    {
        arr1[i] = arr[k++];
    }

    for (int i = 0; i < n2; i++)
    {
        arr2[i] = arr[k++];
    }

    k = l;
    int i = 0;
    int j = 0;

    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            arr[k++] = arr1[i++];
        }
        else
        {
            arr[k++] = arr2[j++];
        }
    }
    while (i < n1)
    {
        arr[k++] = arr1[i++];
    }
    while (j < n2)
    {
        arr[k++] = arr2[j++];
    }

    delete[] arr1;
    delete[] arr2;
}

void mergeSort(int *arr, int l, int r)
{
    if (r > l)
    {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, r, m);
    }
}
int main()
{
    int n;
    cout << "Size?";
    cin >> n;

    int *arr = new int[n];
    cout << "Enter the elements of the array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int l = 0;
    int r = n - 1;
    mergeSort(arr, l, r);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;

    return 0;
}