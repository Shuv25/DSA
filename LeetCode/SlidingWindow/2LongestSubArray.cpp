#include <iostream>

using namespace std;

int longestSubarray(int *arr, int n, int k)
{
    int l = 0;
    int r = 0;
    int sum = 0;
    int maxlen = 0;
    while (r < n)
    {
        sum += arr[r];
        if (sum > k)
        {
            sum -= arr[l];
            l++;
        }
        else
        {
            maxlen = max(maxlen, r - l + 1);
            r++;
        }
    }

    return maxlen;
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

    cout << longestSubarray(arr, n, k) << endl;

    delete[] arr;
}