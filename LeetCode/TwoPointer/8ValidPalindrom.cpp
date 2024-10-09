#include <iostream>

using namespace std;

bool validPalindrom(string s)
{
    string ss = "";
    for (char c : s)
    {
        c = tolower(c);

        if (isalnum(c))
        {
            ss += c;
        }
    }

    int i = 0;
    int j = ss.length() - 1;
    int flag = 0;

    while (i < j)
    {
        if (ss[i] != ss[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main()
{
    string s;
    getline(cin, s);

    cout << validPalindrom(s) << endl;
}