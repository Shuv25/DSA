#include <iostream>

using namespace std;

double medtwosorted(int arr[], int arr2[], int n1, int n2)
{
    int n3 = n1 + n2;
    int res[n3];
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < n1 && j < n2)
    {
        if (arr[i] < arr2[j])
        {
            res[k++] = arr[i++];
        }
        else
        {
            res[k++] = arr2[j++];
        }
    }
    while (i < n1)
    {
        res[k++] = arr[i++];
    }
    while (j < n2)
    {
        res[k++] = arr2[j++];
    }

    for (auto it : res)
        cout << it << " ";
    cout << endl;

    int m = n3 / 2;
    double median;
    if (n3 % 2 == 0)
    {
        median = (res[m - 1] + res[m]) / 2.0;
    }
    else
    {
        median = res[m];
    }

    return median;
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6};
    int arr2[] = {10, 20, 30, 40, 50, 60};
    int n1 = 6;
    int n2 = 6;

    double ans = medtwosorted(arr, arr2, n1, n2);

    cout << ans << endl;
}