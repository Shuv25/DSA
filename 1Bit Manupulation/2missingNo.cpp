#include <iostream>

using namespace std;

int missingValue(int arr[], int n)
{
    int xor1 = arr[0];
    int xor2 = 1;

    for (int i = 1; i < n; i++)
    {
        xor1 ^= arr[i];
    }
    for (int i = 2; i <= n + 1; i++)
    {
        xor2 ^= i;
    }
    return xor1 ^ xor2;
}

int main()
{
    int arr[] = {1, 2, 4, 6, 7, 3, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "The missing value from the array is: " << missingValue(arr, n) << endl;

    return 0;
}
