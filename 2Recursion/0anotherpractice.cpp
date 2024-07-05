#include <iostream>

using namespace std;

int fun(int n, int i = 1)
{
    if (n < 2)
    {
        return i;
    }
    fun(n - 1, i * n);
}

int main()
{
    int n;
    cin >> n;
    cout << fun(n);
}