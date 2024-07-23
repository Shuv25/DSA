#include <iostream>

using namespace std;

int binarySearch(int arr[], int start, int end, int find)
{
    int mid = (start + end) / 2;

    if (arr[mid] > find)
    {
        return binarySearch(arr, start, mid - 1, find);
    }
    else if (arr[mid] < find)
    {
        return binarySearch(arr, mid + 1, end, find);
    }
    else
    {
        if (mid == end || arr[mid] != arr[mid + 1])
        {
            return mid;
        }
        else
        {
            return binarySearch(arr, mid + 1, end, find);
        }
    }
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

    int ans = binarySearch(arr, 0, n, k);

    cout << ans << endl;

    delete[] arr;
}