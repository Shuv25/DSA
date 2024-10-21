#include <iostream>
#include <bits\stdc++.h>
#include <vector>

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
    vector<int> store;

    s.push(n - 1);
    store.push_back(-1);

    for (int i = n - 2; i >= 0; i--)
    {
        while (s.empty() == false && arr[s.top()] <= arr[i])
        {
            s.pop();
        }
        int prev_greater = (s.empty()) ? -1 : arr[s.top()];
        store.push_back(prev_greater);
        s.push(i);
    }

    for (int i = store.size() - 1; i >= 0; i--)
    {
        cout << store[i] << " ";
    }
}