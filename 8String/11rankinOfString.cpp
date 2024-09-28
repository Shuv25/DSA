#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void checkRank(string s, int i, vector<string> &ns)
{
    if (i == s.length() - 1)
    {
        ns.push_back(s);
        return;
    }

    for (int j = i; j < s.length(); j++)
    {
        swap(s[i], s[j]);
        checkRank(s, i + 1, ns);
        swap(s[i], s[j]);
    }
}

int main()
{
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    vector<string> ns;
    checkRank(s, 0, ns);

    sort(ns.begin(), ns.end());

    for (int i = 0; i < ns.size(); i++)
    {
        if (ns[i] == s)
        {
            cout << ns[i] << " -> Rank: " << (i + 1) << endl;
        }
    }

    return 0;
}
