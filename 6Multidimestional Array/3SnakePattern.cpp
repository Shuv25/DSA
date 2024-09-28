#include <iostream>

using namespace std;

void snakePattern(int **arr, int n, int m)
{
    cout << "After Snake:" << endl;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = m - 1; j >= 0; j--)
            {
                cout << arr[i][j] << " ";
            }
        }
        else
        {
            for (int j = 0; j < m; j++)
            {
                cout << arr[i][j] << " ";
            }
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
    cout << "Before Snake:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    snakePattern(arr, n, m);
    for (int i = 0; i < n; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
}