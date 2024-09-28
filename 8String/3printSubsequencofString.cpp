#include <iostream>
#include <string>

using namespace std;

void subsequences(string s, string output)
{
    if (s.empty())
    {
        cout << output << " ";
        return;
    }

    subsequences(s.substr(1), output + s[0]);
    subsequences(s.substr(1), output);
}

int main()
{
    string s;
    cout << "Entre a string:";
    cin >> s;

    subsequences(s, " ");
}