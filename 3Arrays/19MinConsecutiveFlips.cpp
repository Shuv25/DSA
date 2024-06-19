#include <iostream>

using namespace std;

void MinConFlip(int n, int *arr)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1])
        {
            if (arr[i] != 0)
            {
                cout << "From " << i << " to ";
            }
            else
            {
                cout << (i - 1) << endl;
            }
        }
    }
    if (arr[n - 1] != arr[0])
    {
        cout << n - 1 << endl;
    }
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

    cout << "The minimum consecutive flip is:";

    MinConFlip(n, arr);

    delete[] arr;
    return 0;
}
