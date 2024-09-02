#include <iostream>

using namespace std;

void mergeArray(int *arr1, int *arr2, int n1, int n2)
{
    int i = 0;
    int j = 0;
    int n3 = n1 + n2;
    int *merge = new int[n3];
    int k = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] <= arr2[j])
        {
            merge[k++] = arr1[i++];
        }
        else
        {
            merge[k++] = arr2[j++];
        }
    }
    while (i < n1)
    {
        merge[k++] = arr1[i++];
    }
    while (j < n2)
    {
        merge[k++] = arr2[j++];
    }

    for (int i = 0; i < n3; i++)
    {
        cout << merge[i] << " ";
    }
    cout << endl;
    delete[] merge;
}

int main()
{
    int n1;
    cout << "Size of first array?";
    cin >> n1;

    int *arr1 = new int[n1];
    cout << "Enter elements:";
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }

    int n2;
    cout << "Size of second array?";
    cin >> n2;

    int *arr2 = new int[n2];
    cout << "Enter elements:";
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }

    mergeArray(arr1, arr2, n1, n2);

    delete[] arr1;
    delete[] arr2;
    return 0;
}