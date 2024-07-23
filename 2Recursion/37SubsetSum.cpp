#include <iostream>
#include <vector>

using namespace std;

void SubSum(int i, int arr[], int n, int sum)
{

    if (i == n)
    {
        cout << sum << " ";
        return;
    }

    SubSum(i + 1, arr, n, sum + arr[i]);
    SubSum(i + 1, arr, n, sum);
}

int main()
{
    int arr[] = {1, 2, 3};
    int n = 3;
    SubSum(0, arr, n, 0);
}