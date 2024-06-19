#include <iostream>

using namespace std;

int facto(int n, int k)
{
    if (n == 0 || n == 1)
    {
        return k;
    }

    return facto(n - 1, k * n);
}

int main()
{
    int n;
    cout << "Number:";
    cin >> n;

    int k = 1;

    cout << "Factorial of " << n << " is:" << facto(n, k);
}