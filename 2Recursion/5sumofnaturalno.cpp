#include <iostream>

using namespace std;

int sumnatural(int n, int k)
{
    if (n == 0 || n == 1)
    {
        return k;
    }

    return sumnatural(n - 1, k + n);
}

int main()
{
    int n;
    cout << "Enter the number:";
    cin >> n;

    int k = 1;

    cout << sumnatural(n, k) << endl;
}