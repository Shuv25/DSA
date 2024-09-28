#include <iostream>

using namespace std;

void transpose(int **arr, int n, int m)
{
    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n, m;
    cout << "Size of thr row and column by space:";
    cin >> n >> m;

    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[m];
    }

    cout << "Enter the elements of the array:";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    transpose(arr, n, m);

    for (int i = 0; i < n; i++)
    {
        delete[] arr[i];
    }

    delete[] arr;
}