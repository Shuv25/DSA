#include <iostream>

using namespace std;

int count1Occur(int n, int *arr)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == 0)
        {
            low = mid + 1;
        }
        else
        {
            if (mid == 0 || arr[mid - 1] == 0)
            {
                return (n - mid);
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return 0;
}

int main()
{
    int n;
    cout << "Enter the size of the array:";
    cin >> n;

    int *arr = new int[n];

    cout << "Enter the elemnts of the array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int cnt = count1Occur(n, arr);

    cout << "The count of 1 is:" << cnt << endl;
}