#include <iostream>

using namespace std;

bool isPalindrom(string s, int i, int j, int k)
{
    if (k > 0 || k > 1)
        if (s[i] == s[j])
            return true;
        else
            return false;

    isPalindrom(s, i + 1, j - 1, k - 2);
}

int main()
{
    string s;
    getline(cin, s);

    int len = s.length();

    cout << isPalindrom(s, 0, len - 1, len) << endl;
}