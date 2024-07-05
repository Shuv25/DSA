#include <iostream>

using namespace std;

int sumofsubsets(int arr[], int n, int sum)
{
    if (n == 0)
    {
        return (sum == 0) ? 1 : 0;
    }
    return sumofsubsets(arr, n - 1, sum) + sumofsubsets(arr, n - 1, sum - arr[n - 1]);
}

int main()
{
    int arr[10] = {10, 20, 15};
    int n = 3;
    int sum = 25;
    cout << sumofsubsets(arr, n, sum);
}