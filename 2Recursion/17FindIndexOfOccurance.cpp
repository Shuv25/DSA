// 1
#include <iostream>

using namespace std;

int fno(int n, int i, int array[], int find)
{
    if (i > n - 1)
    {
        return -1;
    }
    if (find == array[i])
    {
        return i;
    }
    fno(n, i + 1, array, find);
}

int main()
{
    int n;
    cout << "Enter the size of the array:";
    cin >> n;
    int *array = new int[n];
    cout << "Enter the elements of the array:";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int find;
    cout << "Enter the element you want to find:";
    cin >> find;

    int i = 0;
    int index = fno(n, i, array, find);
    cout << index << endl;
    delete[] array;
}