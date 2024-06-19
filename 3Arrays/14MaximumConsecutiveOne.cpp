#include <iostream>

using namespace std;

int maxConOne(int n, int *arr)
{
    int cnt = 0;
    int maxcnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            cnt += 1;
            maxcnt = max(maxcnt, cnt);
        }
        else
        {
            cnt = 0;
        }
    }
    return maxcnt;
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

    int maxone = maxConOne(n, arr);

    cout << "The maximum consecutive one is:" << maxone << endl;

    delete[] arr;
    return 0;
}
