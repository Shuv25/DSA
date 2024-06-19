#include <iostream>

using namespace std;

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

    int res = 0;

    for (int i = 0; i < n; i++)
    {
        res ^= arr[i];
    }

    int rmsb = res & (-res);

    cout << rmsb << endl;

    int x = 0;
    int y = 0;

    for (int i = 0; i < n; i++)
    {
        if ((arr[i] & rmsb) == 0)
        {
            x ^= arr[i];
        }
        else
        {
            y ^= arr[i];
        }
    }

    cout << x << " " << y << endl;

    delete[] arr;
}