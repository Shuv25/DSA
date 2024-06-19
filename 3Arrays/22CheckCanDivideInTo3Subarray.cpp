#include <iostream>

using namespace std;

bool devide3(int n, int *arr, int sum)
{

    int cnt = 0;
    int add = 0;
    for (int i = 0; i < n; i++)
    {
        if (add <= sum)
        {
            add += arr[i];
        }
        if (add == sum)
        {
            add = 0;
            cnt++;
        }
    }

    if (cnt == 3)
    {
        return true;
    }
    else
    {
        return false;
    }
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

    int sum;
    cout << "Enter the sum:";
    cin >> sum;

    int check = devide3(n, arr, sum);

    if (check)
    {
        cout << "The array can devide into 3 subarray" << endl;
    }
    else
    {
        cout << "The array cannot be devide into 3 subarray" << endl;
    }

    delete[] arr;
    return 0;
}
