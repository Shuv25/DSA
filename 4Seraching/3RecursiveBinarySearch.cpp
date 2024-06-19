#include <iostream>

using namespace std;

int RecursiveBinarySearch(int n, int arr[], int s, int low, int high)
{
    if (low > high)
    {
        return -1;
    }
    int mid = low + high / 2;
    if (arr[mid] == s)
    {
        return mid;
    }
    else if (arr[mid] > s)
    {
        RecursiveBinarySearch(n, arr, s, low, mid - 1);
    }
    else
    {
        RecursiveBinarySearch(n, arr, s, mid + 1, high);
    }
}

int main()
{
    int n;
    cout << "Enter the size of the array:";
    cin >> n;

    int *arr = new int[n];

    cout << "Enter the elements of the array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int s;
    cout << "Entre the element ou want to search:";
    cin >> s;
    int low = 0;
    int high = n - 1;
    int output = RecursiveBinarySearch(n, arr, s, low, high);

    cout << "Element found at " << output << " th position." << endl;

    delete[] arr;
}