#include <iostream>

using namespace std;

int partition(int *arr, int l, int h)
{
    int pivot = arr[l];
    int i = l - 1;
    int j = h + 1;

    while (true)
    {
        do
        {
            i++;
        } while (arr[i] < pivot);
        do
        {
            j--;
        } while (arr[j] > pivot);
        if (i >= j)
        {
            return j;
        }

        swap(arr[i], arr[j]);
    }
}

void quicksort(int *arr, int l, int h)
{
    if (l < h)
    {
        int p = partition(arr, l, h);
        quicksort(arr, l, p - 1);
        quicksort(arr, p + 1, h);
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

    quicksort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    delete[] arr;
    return 0;
}