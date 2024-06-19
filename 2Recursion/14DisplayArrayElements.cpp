#include <iostream>

using namespace std;

void display(int i, int array[])
{
    if (i < 0)
    {
        return;
    }
    display(i - 1, array);
    cout << array[i] << " ";
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
    int i = n - 1;
    display(i, array);
    delete[] array;
}