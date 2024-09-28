#include <iostream>
#include <string>

using namespace std;

bool subsequences(string s, string ns)
{
    int i = 0;
    int j = 0;
    while (i < s.length())
    {
        if (s[i] == ns[j])
        {
            i++;
            j++;
        }
        else
        {
            i++;
        }
        if (j == ns.length())
        {
            return true;
        }
    }
    return false;
}

int main()
{
    string s;
    cout << "Entre a string:";
    cin >> s;

    string ns;
    cout << "Entre a string:";
    cin >> ns;

    cout << subsequences(s, ns) << endl;
}