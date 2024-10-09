#include <iostream>

using namespace std;

void twoSum(int n, int *arr, int target)
{
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        int sum = arr[i] + arr[j];
        if (sum == target)
        {
            cout << i << " " << j << endl;
            break;
        }
        else if (sum > target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    int n;
    cout << "Size:";
    cin >> n;

    int *arr = new int[n];
    cout << "Elements:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cout << "Enter the target:";
    cin >> target;

    twoSum(n, arr, target);

    delete[] arr;
}