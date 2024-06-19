#include <iostream>

using namespace std;

int BinarySearch(int n, int arr[], int s)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (s == arr[mid])
        {
            return mid;
        }
        else if (s < arr[mid])
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

    int output = BinarySearch(n, arr, s);

    cout << "Element found at " << output << " th position." << endl;

    delete[] arr;
}