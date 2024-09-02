#include <iostream>

using namespace std;

void intersection(int *arr1, int *arr2, int n1, int n2)
{
    int i = 0;
    int j = 0;
    bool k = true;

    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            j++;
        }
        else
        {
            if (k || arr1[i] != arr1[i - 1])
            {
                cout << arr1[i] << " ";
                k = false;
            }
            i++;
            j++;
        }
    }
}
int main()
{
    int n1, n2;
    cout << "Size of the two arrays:";
    cin >> n1 >> n2;

    int *arr1 = new int[n1];
    int *arr2 = new int[n2];

    cout << "Enter the elemnts of first array:";
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }
    cout << "Enter the elemnts of second array:";
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }

    intersection(arr1, arr2, n1, n2);

    return 0;
}