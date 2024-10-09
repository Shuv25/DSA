#include <iostream>

using namespace std;

int mostWater(int *arr, int n)
{
    int i = 0;
    int j = n - 1;
    int maxWater = 0;
    while (i < j)
    {
        int water = (j - i) * (min(arr[i], arr[j]));
        maxWater = max(maxWater, water);
        if (arr[i] < arr[j])
        {
            i++;
        }
        else
        {
            j--;
        }
    }

    return maxWater;
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

    cout << mostWater(arr, n) << endl;
}