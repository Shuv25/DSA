#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int maxSum(int n, int *arr, int windowSize)
{
    int i = 0;
    int j = 0;
    int sum = 0;
    int maxsum = INT_MIN;

    while (j < n)
    {
        sum += arr[j];

        if (j - i + 1 < windowSize)
        {
            j++;
        }
        else if (j - i + 1 == windowSize)
        {
            maxsum = max(maxsum, sum);
            sum -= arr[i];
            i++;
            j++;
        }
    }

    return maxsum;
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

    int windowSize;
    cout << "Enter the size of the window:";
    cin >> windowSize;

    cout << "The maximum sum is:" << maxSum(n, arr, windowSize) << endl;

    delete[] arr;
}
