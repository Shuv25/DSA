#include <iostream>

using namespace std;

int indexLeftMostRep(string s)
{
    int cnt[256] = {0};

    for (int i = 0; i < s.length(); i++)
    {
        cnt[s[i]]++;
    }

    for (int i = 0; i < s.length(); i++)
    {
        if (cnt[s[i]] > 1)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    string s;
    cout << "Enter a string:";
    getline(cin, s);

    cout << indexLeftMostRep(s) << endl;
}