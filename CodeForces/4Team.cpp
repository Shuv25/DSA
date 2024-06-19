#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[3];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    int maxcnt = 0;
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == 1)
            {
                cnt++;
            }
        }
        if (cnt > 1)
        {
            maxcnt++;
        }
    }

    cout << maxcnt << endl;

    for (int i = 0; i < n; ++i)
    {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}