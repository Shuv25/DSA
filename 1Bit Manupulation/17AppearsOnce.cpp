#include <iostream>

using namespace std;

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

    int res = 0;

    for (int i = 0; i < n; i++)
    {
        res ^= arr[i];
    }

    cout << "Desired Output is:" << res << endl;
    delete[] arr;
}