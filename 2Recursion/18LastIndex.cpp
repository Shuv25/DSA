#include <iostream>

using namespace std;

int lastIndex(int n, int i, int arr[], int find)
{
    if (i < 0)
    {
        return -1;
    }
    if (find == arr[i])
    {
        return i;
    }
    lastIndex(n, i - 1, arr, find);
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
    int find;
    cout << "Enter the element you want to find:";
    cin >> find;

    int i = n - 1;
    int lI = lastIndex(n, i, arr, find);
    cout << lI << endl;
    delete[] arr;
}