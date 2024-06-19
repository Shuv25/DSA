#include <iostream>

using namespace std;

void leftRotateByNPlaces(int n, int *arr, int j)
{
    int k = 0;
    int *arr2 = new int[j];
    for (int i = 0; i < j; i++)
    {
        arr2[i] = arr[i];
    }
    for (int i = j; i < n; i++)
    {
        arr[k] = arr[i];
        k++;
    }
    int m = 0;
    for (int i = k; i < n; i++)
    {
        arr[i] = arr2[m];
        m++;
    }
    cout << "The array after left rotating it by N places:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr2;
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

    int j;
    cout << "Enter up to which place u want to rotate:";
    cin >> j;

    cout << "The array before left rotating it by N places:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    leftRotateByNPlaces(n, arr, j);

    delete[] arr;
}