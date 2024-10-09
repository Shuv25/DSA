#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> fourSum(vector<int> arr, int n, int k)
{
    vector<vector<int>> res;
    sort(arr.begin(), arr.end());

    for (int i = 0; i < n - 3; i++)
    {
        if (i > 0 && arr[i] == arr[i + 1])
            continue;
        for (int j = i + 1; j < n - 2; j++)
        {
            if (j > i + 1 && arr[j] == arr[j - 1])
                continue;

            int left = j + 1;
            int right = n - 1;
            while (left < right)
            {
                int sum = arr[i] + arr[j] + arr[left] + arr[right];
                if (sum == k)
                {
                    res.push_back({arr[i], arr[j], arr[left], arr[right]});
                    while (left < right && arr[left] == arr[left + 1])
                        left++;
                    while (left < right && arr[right] == arr[right - 1])
                        right++;
                    left++;
                    right--;
                }
                else if (sum < k)
                {
                    left++;
                }
                else
                {
                    right--;
                }
            }
        }
    }

    return res;
}

int main()
{
    int n;
    cout << "Size?";
    cin >> n;

    vector<int> arr(n);
    cout << "Elements:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cout << "Entre the sum:";
    cin >> k;
    vector<vector<int>> output = fourSum(arr, n, k);

    for (int i = 0; i < output.size(); i++)
    {
        for (int j = 0; j < output[i].size(); j++)
        {
            cout << output[i][j] << " ";
        }
        cout << endl;
    }
}