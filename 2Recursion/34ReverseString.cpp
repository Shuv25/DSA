#include <iostream>

using namespace std;

string revstring(string s, int n, int i = 0)
{
    if (i >= n / 2)
    {
        return s;
    }
    swap(s[i], s[n - i - 1]);
    return revstring(s, n, i + 1);
}

int main()
{
    string s;
    cout << "Enter a string to check palindrom:";
    getline(cin, s);
    int n = s.length();
    string ns = revstring(s, n);
    cout << "Reversed String:" << ns << endl;
}