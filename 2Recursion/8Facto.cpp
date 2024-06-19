#include <iostream>

using namespace std;

int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }

    int fnm1 = fact(n - 1);
    int fn = n * fnm1;
    return fn;
}

int main()
{
    int n = 5;

    cout << fact(n) << endl;
}