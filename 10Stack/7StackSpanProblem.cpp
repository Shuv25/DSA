#include <iostream>

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int size;
    cout << "Size of the array:";
    cin >> size;

    int *arr = new int[size];

    cout << "Enter the elements of the array:";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    stack<int> s;

    s.push(0);
    cout << 1 << " ";

    for (int i = 1; i < size; i++)
    {
        while (s.empty() == false && arr[s.top()] <= arr[i])
        {
            s.pop();
        }

        int span = s.empty() ? i + 1 : i - s.top();
        cout << span << " ";
        s.push(i);
    }
}