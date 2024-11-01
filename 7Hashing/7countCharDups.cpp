#include <bits\stdc++.h>

using namespace std;

void cntDup(string s)
{

    int hash[256] = {0};

    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i]] += 1;
    }

    cout << "Enter up to how many u want to check:";
    int q;
    cin >> q;
    while (q--)
    {
        char k;
        cout << "Entre the char:";
        cin >> k;

        cout << hash[k] << endl;
    }
}

int main()
{
    string s;
    cout << "Entre the string:";
    getline(cin, s);

    cntDup(s);
}