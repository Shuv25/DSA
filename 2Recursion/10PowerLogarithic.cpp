#include <iostream>

using namespace std;

int power(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }

    int xnd = power(x, n / 2);
    int xn = xnd * xnd;

    if (n % 2 == 1)
    {
        return xn * x;
    }

    return xn;
}

int main()
{
    int x = 5;
    int n = 4;

    cout << power(x, n) << endl;
}