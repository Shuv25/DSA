#include <iostream>
#include <vector>
using namespace std;

vector<int> prefixSum(vector<int> arr)
{
    int n = arr.size();
    vector<int> prefixSum(n);

    prefixSum[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    }

    return prefixSum;
}

int suminrange(const vector<int> &prefixSum, int left, int right)
{
    if (left == 0)
    {
        return prefixSum[right];
    }
    else
    {
        return prefixSum[right] - prefixSum[left - 1];
    }
}

int main()
{
    int n;
    cout << "Size? ";
    cin >> n;

    vector<int> arr;
    arr.resize(n);

    cout << "Entre the elements of the array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> prefixsum = prefixSum(arr);

    int left;
    int right;
    cout << "Entre the range you want the count the sum:";
    cin >> left >> right;

    int prefixsuminRange = suminrange(prefixsum, left, right);

    cout << prefixsuminRange << endl;
}