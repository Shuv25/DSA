#include <iostream>

using namespace std;

int indexOfLastOccur(int n, int *arr, int k)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (k > arr[mid])
        {
            low = mid + 1;
        }
        else if (k < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            if (mid == (n - 1) || arr[mid] != arr[mid + 1])
            {
                return mid;
            }
            else
            {
                low = mid + 1;
            }
        }
    }

    return -1;
}

int main()
{
    int n;
    cout << "Enter the size of tte array:";
    cin >> n;

    int *arr = new int[n];

    cout << "Entre the elements of the array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cout << "Enter the element you want to search:";
    cin >> k;

    int pos = indexOfLastOccur(n, arr, k);

    cout << "The position of first is " << pos << endl;
}