#include <iostream>

using namespace std;

int prefixSum(int n, int *arr, int l, int r)
{
    int *narr = new int[n];
    narr[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        narr[i] = arr[i] + narr[i - 1];
    }

    if (l == 0)
    {
        return narr[r];
    }

    int val = narr[r] - narr[l - 1];

    return val;
}
int main()
{
    int n;
    cout << "Size:";
    cin >> n;

    int *arr = new int[n];
    cout << "Enter the elements:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int l;
    cout << "Enter the lower value of range:";
    cin >> l;
    int r;
    cout << "Enter the higher value of range:";
    cin >> r;

    int sum = prefixSum(n, arr, l, r);

    cout << sum << endl;
}