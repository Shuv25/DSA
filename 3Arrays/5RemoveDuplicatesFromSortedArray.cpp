#include <iostream>

using namespace std;

void removeDuplicates(int n, int *arr)
{
    int k = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[k - 1])
        {
            arr[k] = arr[i];
            k++;
        }
    }
    cout << "The array after removing duplicates:";
    for (int i = 0; i < k; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
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
    cout << "The array before removing duplicates:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    removeDuplicates(n, arr);

    delete[] arr;
}