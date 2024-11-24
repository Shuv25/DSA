#include <bits/stdc++.h>

using namespace std;

int minLen(int n, int *arr, int sum)
{
    int i = 0;
    int j = 0;
    int minlen = INT_MAX;
    int newsum = arr[i];
    int flag = false;

    while (j < n)
    {
        newsum += arr[j];
        while (newsum >= sum)
        {
            minlen = min(minlen, j - i);
            newsum -= arr[i];
            i++;
            flag = true;
        }
        j++;
    }

    if (flag == true)
    {
        return minlen;
    }
    else
    {
        return 0;
    }
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

    int sum;
    cout << "Enter the sum:";
    cin >> sum;

    cout << minLen(n, arr, sum) << endl;
}