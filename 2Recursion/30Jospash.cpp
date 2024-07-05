#include <iostream>

using namespace std;

int jospash(int n, int k)
{
    if (n == 1)
    {
        return 0;
    }
    return (jospash(n - 1, k) + k) % n;
}

int main()
{
    int n, k;
    cin >> n >> k;
    cout << jospash(n, k) << endl;
    return 0;
}