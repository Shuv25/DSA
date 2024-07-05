#include <iostream>

using namespace std;

bool checkPalindrom(string s, int n, int i = 0)
{
    if (i >= n / 2)
    {
        return true;
    }
    if (s[i] != s[n - i - 1])
    {
        return false;
    }
    return checkPalindrom(s, n, i + 1);
}

int main()
{
    string s;
    cout << "Enter a string to check palindrom:";
    getline(cin, s);
    int n = s.length();
    cout << checkPalindrom(s, n);
}