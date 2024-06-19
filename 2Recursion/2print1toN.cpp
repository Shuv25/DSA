#include <iostream>

using namespace std;

int fun(int n)
{
    if (n == 0)
    {
        return 0;
    }

    fun(n - 1);
    cout << n << endl;
}

int main()
{
    int n;
    cout << "Enter a number:";
    cin >> n;

    fun(n);
}