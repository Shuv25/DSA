#include <iostream>

using namespace std;

int maxSum(int *arr, int n, int k)
{
    int lsum = 0;
    int rsum = 0;
    int sum = 0;

    for (int i = 0; i < k; i++)
    {
        lsum += arr[i];
    }

    sum = lsum;

    int i = k - 1;
    int j = n - 1;
    while (i >= 0)
    {
        lsum -= arr[i];
        rsum += arr[j];
        sum = max(sum, lsum + rsum);
        i--;
        j--;
    }

    return sum;
}

int main()
{
    int n;
    cout << "Size?";
    cin >> n;

    int *arr = new int[n];
    cout << "Elements:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k;
    cout << "Enter the max sum limit:";
    cin >> k;

    cout << maxSum(arr, n, k) << endl;

    delete[] arr;
}