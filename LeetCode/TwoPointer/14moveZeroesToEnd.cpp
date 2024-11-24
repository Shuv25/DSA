#include <bits/stdc++.h>

using namespace std;

int moveZeroes(int n, int *arr)
{
    int cntZero = 0;
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            cntZero++;
        }
        else
        {
            arr[k] = arr[i];
            k++;
        }
    }

    for (int i = 0; i < cntZero; i++)
    {
        arr[k] = 0;
        k++;
    }
    return k;
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

    int size = moveZeroes(n, arr);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}