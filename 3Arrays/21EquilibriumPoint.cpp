#include <iostream>

using namespace std;

bool epoint(int n, int *arr)
{
    int rs = 0;
    for (int i = 0; i < n; i++)
    {
        rs += arr[i];
    }
    int ls = 0;
    for (int i = 0; i < n; i++)
    {
        rs -= arr[i];
        if (ls == rs)
        {
            return true;
        }
        ls += arr[i];
    }

    return false;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int *arr = new int[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int equipoint = epoint(n, arr);

    if (equipoint)
    {
        cout << "The array has equilibrium point" << endl;
    }
    else
    {
        cout << "The array has not equilibrium point" << endl;
    }

    delete[] arr;
    return 0;
}
