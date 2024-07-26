#include <iostream>

using namespace std;

int binarySearch(int arr[], int start, int end, int find)
{
    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == find)
        {
            return mid;
        }
        else if (arr[mid] > find)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return -1;
}

int infinitySearch(int arr[], int n, int find)
{
    if (arr[0] == find)
        return 0;
    int i = 1;
    while (arr[i] < find)
    {
        i *= 2;
    }
    if (arr[i] == find)
        return i;

    return binarySearch(arr, i / 2 + 1, i - 1, find);
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

    int ans = infinitySearch(arr, n, k);

    cout << ans << endl;
}