#include <iostream>

using namespace std;

int pw(int x, int y)
{
    if (y == 0)
    {
        return 1;
    }

    int ym1 = pw(x, y - 1);
    int pwn = ym1 * x;
    return pwn;
}

int main()
{
    int x = 5;
    int y = 3;

    cout << pw(x, y);
}