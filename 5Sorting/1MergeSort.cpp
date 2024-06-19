#include <bits/stdc++.h>

void merge(int *arr, int l, int m, int r)
{
    int lsize = m - l + 1;
    int rsize = r - m;

    int *larr = new int[lsize];
    int *rarr = new int[rsize];

    int k = l;
    for (int i = 0; i < lsize; i++)
    {
        larr[i] = arr[k++];
    }
    for (int i = 0; i < rsize; i++)
    {
        rarr[i] = arr[k++];
    }
    int lindex = 0;
    int rindex = 0;
    k = l;
    while (lindex < lsize && rindex < rsize)
    {
        if (larr[lindex] < rarr[rindex])
        {
            arr[k++] = larr[lindex++];
        }
        else
        {
            arr[k++] = rarr[rindex++];
        }
    }
    while (lindex < lsize)
    {
        arr[k++] = larr[lindex++];
    }
    while (rindex < rsize)
    {
        arr[k++] = rarr[rindex++];
    }
    delete[] larr;
    delete[] rarr;
}

void mergesort(int *arr, int l, int r)
{
    if (l >= r)
    {
        return;
    }

    int m = (l + r) / 2;

    mergesort(arr, l, m);
    mergesort(arr, m + 1, r);

    merge(arr, l, m, r);
}

int main()
{
    int n;
    std::cout << "Enter the size:";
    std::cin >> n;

    int *arr = new int[n];
    std::cout << "Enter the elements of the array:";
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    mergesort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }

    delete[] arr;
}