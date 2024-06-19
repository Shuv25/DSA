#include <iostream>

using namespace std;

void allindexes(int n, int i, int arr[], int find)
{
    if (i > n - 1)
    {
        return;
    }

    if (find == arr[i])
    {
        cout << i << " ";
    }

    allindexes(n, i + 1, arr, find);
}

int main()
{
    int n;
    cout << "Enter the size of the array:";
    cin >> n;

    int *arr = new int[n];

    cout << "Entre the elements of the array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int find;
    cout << "Entre the element that you want to find:";
    cin >> find;

    int i = 0;

    allindexes(n, i, arr, find);
    delete[] arr;
}
/*
if we want to store the indexes in a array

#include <iostream>

using namespace std;

void allIndexes(int n, int i, int arr[], int find, int result[], int &count)
{
    if (i > n - 1)
    {
        return;
    }

    if (find == arr[i])
    {
        result[count++] = i;
    }

    allIndexes(n, i + 1, arr, find, result, count);
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

    int find;
    cout << "Enter the element that you want to find: ";
    cin >> find;

    int *indexes = new int[n]; // Assuming the maximum possible number of indexes is n
    int count = 0;

    int i = 0;
    allIndexes(n, i, arr, find, indexes, count);

    cout << "Indexes of " << find << " are: ";
    for (int j = 0; j < count; j++)
    {
        cout << indexes[j] << " ";
    }

    delete[] arr;
    delete[] indexes;
    return 0;
}

*/