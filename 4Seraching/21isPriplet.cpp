#include <iostream>

using namespace std;

bool isPair(int arr[], int n, int x, int si)
{
    int i = si;
    int j = n - 1;
    while (i < j)
    {
        if (arr[i] + arr[j] == x)
        {
            return true;
        }
        else if (arr[i] + arr[j] > x)
        {
            j -= 1;
        }
        else
        {
            i += 1;
        }
    }
    return false;
}

bool istriplet(int arr[], int n, int x)
{
    for (int i = 0; i < n - 2; i++)
    {
        if (isPair(arr, n, x - arr[i], i + 1))
        {
            return true;
        }
    }

    return false;
}

int main()
{

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int *arr = new int[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k;
    cout << "Enter the element you want to find in the array: ";
    cin >> k;

    int ans = istriplet(arr, n, k);

    cout << ans << endl;

    delete[] arr;
}