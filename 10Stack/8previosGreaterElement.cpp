#include <iostream>
#include <bits\stdc++.h>

using namespace std;

int main()
{
    int n;
    cout << "Size of the array:";
    cin >> n;

    int *arr = new int[n];
    cout << "Enter the elements of the array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    stack<int> s;

    s.push(0);
    cout << -1 << " ";

    for (int i = 1; i < n; i++)
    {
        while (s.empty() == false && arr[s.top()] <= arr[i])
        {
            s.pop();
        }
        int prev_greater = s.empty() ? -1 : arr[s.top()];
        cout << prev_greater << " ";
        s.push(i);
    }
}