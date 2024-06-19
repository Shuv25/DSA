#include <iostream>

using namespace std;

int largestElement(int n, int *arr)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
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

    int largest = largestElement(n, arr);

    cout << "The largest element inside the array is:" << largest << endl;

    delete[] arr;
}