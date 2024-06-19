#include <iostream>

using namespace std;

int pdi(int n)
{
    if (n == 0)
    {
        return 0;
    }
    cout << n << " ";
    pdi(n - 1);
    cout << n << " ";
}

int main()
{
    int n = 5;

    pdi(n);
}