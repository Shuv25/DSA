#include <iostream>

using namespace std;

int partition(int *arr, int l, int h)
{
    int randomindex = l + rand() % (h - l + 1);
    swap(arr[randomindex], arr[h]);

    int pivot = arr[h];

    int i = l - 1;

    for (int j = l; j < h; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[h]);

    return i + 1;
}

int kthsmallest(int *arr, int l, int h, int k)
{
    while (l <= h)
    {
        int p = partition(arr, l, h);
        if (p == k - 1)
        {
            return arr[p];
        }
        else if (p < k - 1)
        {
            l = p + 1;
        }
        else
        {
            h = p - 1;
        }
    }

    return -1;
}
int main()
{

    int n;
    cout << "size?";
    cin >> n;

    int *arr = new int[n];
    cout << "Elemnts:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k;
    cout << "Enter the kth smallest element:";
    cin >> k;

    cout << kthsmallest(arr, 0, n - 1, k) << endl;

    delete[] arr;
}