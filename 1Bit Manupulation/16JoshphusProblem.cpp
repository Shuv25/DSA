#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int l;

    if (n == 1)
    {
        l = 0;
    }

    int res = 1;
    while (res * 2 <= n)
    {
        res *= 2;
    }

    l = n - res;

    int ans = 2 * l + 1;
    cout << ans << endl;
}