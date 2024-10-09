#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int trapingWater(vector<int> arr, int n)
{
    int l = 0;
    int r = n - 1;
    int res = 0;
    int leftMax = 0;
    int rightMax = 0;

    while (l <= r)
    {
        if (arr[l] <= arr[r])
        {
            if (arr[l] >= leftMax)
            {
                leftMax = arr[l];
            }
            else
            {
                res += leftMax - arr[l];
            }
            l++;
        }
        else
        {
            if (arr[r] >= rightMax)
            {
                rightMax = arr[r];
            }
            else
            {
                res += rightMax - arr[r];
            }
            r--;
        }
    }

    return res;
}

int main()
{
    int n;
    cout << "Size:";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int res = trapingWater(arr, n);

    cout << res << endl;
}
