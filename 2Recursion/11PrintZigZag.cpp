#include <iostream>

using namespace std;

int pzz(int n)
{
    if (n == 0)
    {
        return 0;
    }
    cout << "Pre " << n << endl;
    pzz(n - 1);
    cout << "In " << n << endl;
    pzz(n - 1);
    cout << "Post " << n << endl;
}

int main()
{
    int n = 3;

    pzz(n);
}