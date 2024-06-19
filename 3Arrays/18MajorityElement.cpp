#include <iostream>

using namespace std;

int majElementInArray(int n, int *arr)
{
    int res = 0;
    int cnt = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[res] == arr[i])
        {
            cnt++;
        }
        else
        {
            cnt--;
        }
        if (cnt == 0)
        {
            res = i;
            cnt = 1;
        }
    }
    cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[res] == arr[i])
        {
            cnt++;
        }
    }
    if (cnt <= n / 2)
    {
        return -1;
    }

    return arr[res];
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

    int majElement = majElementInArray(n, arr);

    cout << "The majority element is:" << majElement << endl;

    delete[] arr;
    return 0;
}
