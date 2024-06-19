#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    cin.ignore();

    vector<string> res;

    for (int i = 0; i < n; i++)
    {
        string s;
        getline(cin, s);

        if (s.length() <= 10)
        {
            res.push_back(s);
        }
        else
        {
            string ns = "";
            ns = s[0] + to_string(s.length() - 2) + s[s.length() - 1];
            res.push_back(ns);
        }
    }
    for (string s : res)
    {
        cout << s << endl;
    }

    return 0;
}