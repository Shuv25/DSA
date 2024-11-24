#include <bits/stdc++.h>

using namespace std;

bool pairSum(int n, int *arr, int sum)
{
    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        if (arr[i] + arr[j] == sum)
        {
            return true;
        }
        else if (arr[i] + arr[j] > sum)
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

    int sum;
    cout << "Enter the Sum:";
    cin >> sum;

    cout << pairSum(n, arr, sum) << endl;
}