#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n = 4;
    int arr[n] = {10, 5, 9, 7};

    // by default increasing order
    sort(arr, arr + n);

    for (auto x : arr)
    {
        cout << x << " ";
    }
    cout << endl;

    // decreasing order
    sort(arr, arr + n, greater<int>());
    for (auto x : arr)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}