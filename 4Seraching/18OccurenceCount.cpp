#include <iostream>

using namespace std;

int firstoccur(int arr[], int start, int end, int find)
{
    if (start > end)
    {
        return -1;
    }

    int mid = (start + end) / 2;

    if (arr[mid] > find)
    {
        return firstoccur(arr, start, mid - 1, find);
    }
    else if (arr[mid] < find)
    {
        return firstoccur(arr, mid + 1, end, find);
    }
    else
    {
        if (mid == 0 || arr[mid] != arr[mid - 1])
        {
            return mid;
        }
        else
        {
            return firstoccur(arr, start, mid - 1, find);
        }
    }
}

int lastoccur(int arr[], int start, int end, int find)
{

    if (start > end)
    {
        return -1;
    }

    int mid = (start + end) / 2;

    if (arr[mid] > find)
    {
        return lastoccur(arr, start, mid - 1, find);
    }
    else if (arr[mid] < find)
    {
        return lastoccur(arr, mid + 1, end, find);
    }
    else
    {
        if (mid == end || arr[mid] != arr[mid + 1])
        {
            return mid;
        }
        else
        {
            return lastoccur(arr, mid + 1, end, find);
        }
    }
}

int countoccur(int arr[], int start, int end, int find)
{
    int first = firstoccur(arr, start, end, find);
    if (first == -1)
    {
        return 0;
    }

    return (lastoccur(arr, start, end, find) - first + 1);
}

int main()
{

    int n;
    cout << "Entre the size of the array:";
    cin >> n;

    int *arr = new int[n];
    cout << "Enter the elements:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k;
    cout << "Enter the ele u want to find inside the array:";
    cin >> k;

    int ans = countoccur(arr, 0, n, k);

    cout << ans << endl;

    delete[] arr;
}