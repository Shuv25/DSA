#include <iostream>

using namespace std;

int SecondlargestElement(int n, int *arr)
{
    int max = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    int secmax = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > secmax && arr[i] < max)
        {
            secmax = arr[i];
        }
    }

    return secmax;
}

int main()
{
    int n;
    cout << "Enter the elements of the array:";
    cin >> n;

    int *arr = new int[n];
    cout << "Enter the size of the array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int Secondlargest = SecondlargestElement(n, arr);

    cout << "The Second largest element inside the array is:" << Secondlargest << endl;

    delete[] arr;
}