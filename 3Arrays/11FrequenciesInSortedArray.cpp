#include <iostream>

using namespace std;

void frequenciesInArray(int n, int *arr)
{
    int k = 1;
    int cnt = 1;
    int *arr2 = new int[n];
    int j = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[k - 1])
        {
            arr[k] = arr[i];
            arr2[j] = cnt;
            k++;
            j++;
            cnt = 1;
        }
        else
        {
            cnt++;
        }
    }
    arr2[j] = cnt;

    for (int i = 0; i < k; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i <= j; i++)
    {
        cout << arr2[i] << " ";
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

    frequenciesInArray(n, arr);

    delete[] arr;
}
