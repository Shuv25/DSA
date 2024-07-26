#include <iostream>

using namespace std;

int rotatedSearch(int arr[], int n, int find)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        int m = (s + e) / 2;

        if (arr[m] == find)
        {
            return m;
        }

        if (arr[s] <= arr[m])
        {

            if (find >= arr[s] && find < arr[m])
            {
                e = m - 1;
            }
            else
            {
                s = m + 1;
            }
        }
        else
        {

            if (find > arr[m] && find <= arr[e])
            {
                s = m + 1;
            }
            else
            {
                e = m - 1;
            }
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int *arr = new int[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k;
    cout << "Enter the element you want to find in the array: ";
    cin >> k;

    int ans = rotatedSearch(arr, n, k);

    if (ans != -1)
    {
        cout << "Element found at index: " << ans << endl;
    }
    else
    {
        cout << "Element not found in the array." << endl;
    }

    delete[] arr;
    return 0;
}
