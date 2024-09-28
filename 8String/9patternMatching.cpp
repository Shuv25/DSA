#include <iostream>

using namespace std;

void paternMatch(string s, string ss)
{
    int i = 0;
    int j = ss.length();
    bool flag = false;

    while (i < s.length() - j + 1)
    {
        if (ss == s.substr(i, j))
        {
            flag = true;
            cout << i << " ";
        }
        i++;
    }

    if (flag == false)
    {
        cout << "Not Presnt" << endl;
    }
}

int main()
{
    string s;
    cout << "Enter a string:";
    getline(cin, s);

    string ss;
    cout << "Enter another string:";
    getline(cin, ss);

    paternMatch(s, ss);
}