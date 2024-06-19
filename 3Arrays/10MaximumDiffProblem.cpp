#include <iostream>

using namespace std;

int maxDiff(int n, int *arr)
{
    int res = arr[1] - arr[0];
    int minival = arr[0];
    for (int i = 1; i < n; i++)
    {
        res = max(res, arr[i] - minival);
        minival = min(minival, arr[i]);
    }
    return res;
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

    cout << "The maximum diff is:" << maxDiff(n, arr) << endl;
    ;

    delete[] arr;
}