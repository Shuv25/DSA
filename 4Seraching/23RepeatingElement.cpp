#include <iostream>

using namespace std;

int rep(int arr[], int n)
{
    int slow = arr[0] + 1;
    int fast = arr[0] + 1;
    do
    {
        slow = arr[slow] + 1;
        fast = arr[arr[fast + 1]] + 1;
    } while (slow != fast);

    slow = arr[0] + 1;

    while (slow != fast)
    {
        slow = arr[slow] + 1;
        fast = arr[fast] + 1;
    }

    return slow - 1;
}
int main()
{
    int arr[] = {0, 1, 2, 3, 1, 1}, n = 6;
    int ans = rep(arr, n);
    cout << ans << endl;
    return 0;
}