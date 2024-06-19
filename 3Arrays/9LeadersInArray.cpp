#include <iostream>

using namespace std;

void leadersInArray(int n, int *arr)
{
    int curr_leader = arr[n - 1];
    int *arr2 = new int[n];
    int k = 0;
    arr2[k] = curr_leader;
    for (int i = n - 2; i >= 0; i--)
    {
        if (curr_leader < arr[i])
        {
            curr_leader = arr[i];
            k++;
            arr2[k] = curr_leader;
        }
    }
    for (int i = k; i >= 0; i--)
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

    leadersInArray(n, arr);

    delete[] arr;
}