#include <iostream>

using namespace std;

int normalMaxSubarray(int n, int *arr)
{
    int res = arr[0];
    int maxEnding = arr[0];
    for (int i = 1; i < n; i++)
    {
        maxEnding = max(maxEnding + arr[i], arr[i]);
        res = max(res, maxEnding);
    }
    return res;
}
int maxCircularSubArraySum(int n, int *arr)
{
    int max_noraml = normalMaxSubarray(n, arr);
    if (max_noraml < 0)
    {
        return max_noraml;
    }
    int arr_sum = 0;
    for (int i = 0; i < n; i++)
    {
        arr_sum += arr[i];
        arr[i] = -arr[i];
    }
    int maxCircular = arr_sum + normalMaxSubarray(n, arr);
    return max(maxCircular, max_noraml);
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

    int maxsum = maxCircularSubArraySum(n, arr);

    cout << "The maximum sum of circular subarray is:" << maxsum << endl;

    delete[] arr;
    return 0;
}
