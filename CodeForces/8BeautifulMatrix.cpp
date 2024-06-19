#include <iostream>

using namespace std;

int main()
{
    int arr[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
        }
    }
    int p = 0;
    int q = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[i][j] == 1)
            {
                p = i;
                q = j;
            }
        }
    }
    int res = 0;
    if (p > 2)
    {
        res = p - 2;
    }
    else if (p < 2)
    {
        res = 2 - p;
    }
    else
    {
        res = 0;
    }
    if (q > 2)
    {
        res += q - 2;
    }
    else if (q < 2)
    {
        res += 2 - q;
    }
    else
    {
        res += 0;
    }

    cout << res << endl;
}