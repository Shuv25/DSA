#include <iostream>

using namespace std;

int fun(int n)
{
    if (n == 0)
        return 0;
    return n + fun(n - 1);
}

bool ispalindrom(string s, int i, int j, int k)
{

    if (k > 0 || k > 1)
    {
        if (s[i] == s[j])
        {
            return true;
        }
        else
            return false;
    }
    ispalindrom(s, i + 1, j - 1, k - 2);
}

int somofdigit(int n)
{
    if (n <= 9)
        return n;
    return n % 10 + somofdigit(n / 10);
}

int main()
{
    // int n;
    // cin >> n;
    // cout << fun(n);

    // string x;
    // getline(cin, x);
    // int len = x.length();
    // cout << ispalindrom(x, 0, len - 1, len) << endl;

    int n;
    cin >> n;
    cout << somofdigit(n) << endl;
}

// int fun(int n, int k)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     if (n > 1)
//         return fun(n - 1, n * k);
// }
// int main()
// {
//     cout << fun(4, 1);
// }