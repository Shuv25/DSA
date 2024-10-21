#include <iostream>
#include <vector>

using namespace std;

void stockSpan(int n, int *arr)
{
    vector<int> store;
    store.push_back(1);

    int gretest_index = 0;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            store.push_back(i - (i - 1));
        }
        else if (arr[i] < arr[gretest_index])
        {
            store.push_back(i - gretest_index);
        }
        else
        {
            store.push_back(i + 1);
        }
    }

    for (auto it : store)
    {
        cout << it << " ";
    }
    cout << endl;
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

    stockSpan(n, arr);
}