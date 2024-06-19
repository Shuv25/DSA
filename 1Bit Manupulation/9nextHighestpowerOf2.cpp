#include <iostream>

using namespace std;

int highestPowerOf2(int n)
{
    int res = 1;

    for (int i = 1; i <=; i++)
    {
        if (res <= n)
        {
            res = res << i;
        }
        else
        {
            return res;
            break;
        }
    }
}

int main()
{
    int n;
    cout << "Enter a no:";
    cin >> n;

    cout << highestPowerOf2(n) << endl;
}