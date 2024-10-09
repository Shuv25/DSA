#include <iostream>

using namespace std;

int conseOne(int n, int *arr, int k)
{
    int i = 0;
    int j = 0;
    int zcnt = 0;
    int len = 0;
    while (j < n)
    {
        if (arr[j] == 0)
        {
            zcnt++;
        }
        if (zcnt > k)
        {
            if (arr[i] == 0)
            {
                zcnt--;
            }
            i++;
        }
        if (zcnt <= k)
        {
            len = max(len, j - i + 1);
        }
        j++;
    }

    return len;
}

int main()
{
    int n;
    cout << "Size?";
    cin >> n;

    int *arr = new int[n];
    cout << "Enter the elements of the array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k;
    cout << "Entre the no of 0 u want to flip:";
    cin >> k;

    cout << conseOne(n, arr, k) << endl;

    delete[] arr;
}