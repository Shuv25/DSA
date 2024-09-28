#include <iostream>

using namespace std;

void longestSubarray(int *arr, int n, int k)
{
    int l = 0;
    int r = 0;
    int sum = 0;
    int maxlen = 0;
    int start = 0;
    int end = 0;
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
            if (r - l + 1 > maxlen)
            {
                maxlen = r - l + 1;
                start = l;
                end = r;
            }

            r++;
        }
    }

    for (int i = start; i <= end; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
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

    longestSubarray(arr, n, k);

    delete[] arr;
}