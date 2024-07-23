#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void permutation(int arr[], int n, int i)
{

    if (i == n)
    {
        for (int j = 0; j < n; j++)
            cout << arr[j] << " ";
        cout << endl;
        return;
    }

    for (int j = i; j < n; j++)
    {
        swap(arr[i], arr[j]);
        permutation(arr, n, i + 1);
        swap(arr[i], arr[j]);
    }
}

int main()
{
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    permutation(arr, n, 0);
    return 0;
}
