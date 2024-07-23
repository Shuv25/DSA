#include <iostream>
#include <vector>

using namespace std;

void combinationSum(int i, int arr[], int n, int t, vector<int> &cs)
{
    if (i == n)
    {
        if (t == 0)
        {
            for (auto it : cs)
                cout << it << " ";
            cout << endl;
        }
        return;
    }

    if (arr[i] <= t)
    {
        cs.push_back(arr[i]);
        combinationSum(i, arr, n, t - arr[i], cs);
        cs.pop_back();
    }
    combinationSum(i + 1, arr, n, t, cs);
}

int main()
{

    int arr[] = {2, 3, 6, 7};
    int n = 4;
    int target = 7;
    vector<int> cs;
    combinationSum(0, arr, n, target, cs);
}