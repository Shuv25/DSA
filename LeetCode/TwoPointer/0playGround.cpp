#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<int> threeSum(int n, vector<int> nums, int k)
{
    sort(nums.begin(), nums.end());
    vector<int> res;

    for (int i = 0; i < nums.size() - 2; i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
            continue;
        int left = i + 1;
        int right = nums.size() - 1;
        while (left < right)
        {
            int sum = nums[i] + nums[left] + nums[right];
            if (sum == k)
            {
                while (left < right && nums[left] == nums[left - 1])
                    left++;
                while (left < right && nums[right] == nums[right - 1])
                    right--;
                left++;
                right--;
            }
            else if (sum < k)
            {
                res.push_back(sum);
                left++;
            }
            else
            {
                res.push_back(sum);
                right--;
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
    cout << "Enter the sum u want to check:";
    cin >> k;

    vector<int> narr = threeSum(n, arr, k);

    for (int i = 0; i < narr.size(); i++)
    {
        cout << narr[i] << " ";
    }
}