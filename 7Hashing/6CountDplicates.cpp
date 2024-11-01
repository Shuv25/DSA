#include <bits\stdc++.h>

using namespace std;

void cntDup(int n, int *arr)
{
    unordered_map<int, int> hash;

    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }

    cout << "Enter up to how many u want to check:";
    int q;
    cin >> q;
    while (q--)
    {
        int k;
        cout << "Entre the num:";
        cin >> k;

        cout << hash[k] << endl;
    }
}

int main()
{
    int n;
    cout << "Size?";
    cin >> n;

    int *arr = new int[n];
    cout << "Enter the elements of the array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cntDup(n, arr);

    delete[] arr;
}