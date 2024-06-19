#include <iostream>

using namespace std;

int longestEvenOddSubArray(int n, int *arr)
{
    int cnt = 1;
    int maxcnt = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] % 2 == 0)
        {
            if (arr[i + 1] % 2 != 0)
            {
                cnt++;
                maxcnt = max(maxcnt, cnt);
            }
            else
            {
                cnt = 1;
            }
        }
        else
        {
            if (arr[i + 1] % 2 == 0)
            {
                cnt++;
                maxcnt = max(maxcnt, cnt);
            }
            else
            {
                cnt = 1;
            }
        }
    }
    return maxcnt;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int *arr = new int[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int longestEvenOdd = longestEvenOddSubArray(n, arr);

    cout << "The longest even and odd subarrayis:" << longestEvenOdd << endl;

    delete[] arr;
    return 0;
}
