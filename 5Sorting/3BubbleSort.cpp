#include <iostream>

using namespace std;

void BubbleSort(int n, int *arr)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] >= arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

int main()
{
    int n;
    cout << "Enter the size of the array:";
    cin >> n;

    int *arr = new int[n];

    cout << "Enter the eleents of the array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    BubbleSort(n, arr);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;
}