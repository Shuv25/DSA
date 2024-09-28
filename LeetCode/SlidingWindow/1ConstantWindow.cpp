// You are given an array of mix integers you need to find the max su of kth element throgh the array

#include <iostream>

using namespace std;

int constantWindow(int *arr, int n, int k)
{
    int l = 0;
    int r = k - 1;
    int sum = 0;
    int maxSum = 0;
    for (int i = l; i <= r; i++)
    {
        sum += arr[i];
    }

    while (r < n - 1)
    {
        sum -= arr[l];
        l++;
        r++;
        sum += arr[r];
        maxSum = max(sum, maxSum);
    }

    return maxSum;
}

int main()
{
    int n;
    cout << "Size of the array:";
    cin >> n;

    int *arr = new int[n];
    cout << "Enter the elemnts of the array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k;
    cout << "Enter the value of k:";
    cin >> k;

    cout << "Max sum is " << constantWindow(arr, n, k) << endl;

    delete[] arr;
}