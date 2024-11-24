#include <bits/stdc++.h>

using namespace std;

int removeDuplicates(int n, int *arr)
{
    int i = 0;
    int j = 1;
    int k = 0;

    while (j < n)
    {
        if (arr[i] == arr[j])
        {
            i++;
        }
        else
        {
            arr[k] = arr[i];
            i++;
            k++;
        }
        j++;
    }
    arr[k] = arr[i];
    k++;
    return k;
}
int main()
{
    int n;
    cout << "Enter the size of the array:";
    cin >> n;

    int *arr = new int[n];
    cout << "Enter the elements of the array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int size = removeDuplicates(n, arr);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}