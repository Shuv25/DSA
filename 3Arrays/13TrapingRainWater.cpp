#include <iostream>

using namespace std;

int TrappingWater(int n, int *arr)
{
    bool decreasing = true;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            decreasing = false;
            break;
        }
    }

    if (decreasing)
    {
        return 0;
    }

    int maxtrp = 0;
    int k = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[k] > arr[i])
        {
            maxtrp += arr[k] - arr[i];
        }
        else
        {
            k = i;
        }
    }

    return maxtrp;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int *arr = new int[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maxWater = TrappingWater(n, arr);

    cout << "The maximum water that can be trapped is: " << maxWater << endl;

    delete[] arr;
    return 0;
}
