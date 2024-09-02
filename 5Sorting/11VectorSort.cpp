#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> v = {5, 10, 2, 9};
    sort(v.begin(), v.end());

    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;

    sort(v.begin(), v.end(), greater<int>());

    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}