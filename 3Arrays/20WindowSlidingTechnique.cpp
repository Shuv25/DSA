#include <iostream>

using namespace std;

int maxiSum(int n, int *arr, int k)
{
    int curr = 0;
    for (int i = 0; i < k; i++)
    {
        curr += arr[i];
    }
    int res = curr;
    for (int i = k; i < n; i++)
    {
        curr = (curr + arr[i]) - arr[i - k];
        res = max(res, curr);
    }

    return res;
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

    int k;
    cout << "Enter the value of k:";
    cin >> k;

    int maxsum = maxiSum(n, arr, k);

    cout << "The maximum subarray sum is:" << maxsum << endl;

    delete[] arr;
    return 0;
}
