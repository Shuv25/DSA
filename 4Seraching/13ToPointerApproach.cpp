#include <iostream>

using namespace std;

bool checksum(int n, int *arr, int k)
{
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if (arr[i] + arr[j] == k)
        {
            return true;
        }
        else if (arr[i] + arr[j] > k)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return false;
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

    int k;
    cout << "Entre the sum u want to check:";
    cin >> k;

    cout << checksum(n, arr, k) << endl;
}