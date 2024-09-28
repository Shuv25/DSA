#include <iostream>

using namespace std;

void boundryTraversal(int **arr, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            for (int j = 0; j < m; j++)
            {
                cout << arr[i][j] << " ";
            }
        }
        else if (i == n - 1)
        {
            for (int j = m - 1; j >= 0; j--)
            {
                cout << arr[i][j] << " ";
            }
        }
        else
        {
            cout << arr[i][m - 1] << " ";
        }
    }
    for (int i = n - 2; i > 0; i--)
    {
        cout << arr[i][0] << " ";
    }

    cout << endl;
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

    boundryTraversal(arr, n, m);

    for (int i = 0; i < n; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
}