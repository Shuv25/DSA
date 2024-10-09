#include <iostream>

using namespace std;

void moveZeros(int n, int *arr)
{
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[k++] = arr[i];
        }
    }
    while (k < n)
    {
        arr[k++] = 0;
    }
}

int main()
{
    int n;
    cout << "Size:";
    cin >> n;

    int *arr = new int[n];
    cout << "Elements:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    moveZeros(n, arr);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    delete arr;
}