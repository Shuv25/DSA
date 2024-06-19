#include <iostream>

using namespace std;

int main()
{
    int arr[] = {4, 8, 16, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] != arr[j])
            {
                int res = arr[i] & arr[j];
                if (res > max)
                {
                    max = res;
                }
            }
        }
    }

    cout << max << endl;
}