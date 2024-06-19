#include <iostream>

using namespace std;

int LinearSearch(int n, int arr[], int s)
{
    for (int i = 0; i < n; i++)
    {

        if (arr[i] == s)
        {
            return i;
        }
    }

    return -1;
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

    int s;
    cout << "Entre the element ou want to search:";
    cin >> s;

    int output = LinearSearch(n, arr, s);

    cout << "Element found at " << output << " th position." << endl;

    delete[] arr;
}