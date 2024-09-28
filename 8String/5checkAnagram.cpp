#include <iostream>

using namespace std;

bool checkAnagram(string s, string ns)
{
    if (s.length() != ns.length())
    {
        return false;
    }

    int arr[256] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        arr[s[i]]++;
        arr[ns[i]]--;
    }

    for (int i = 0; i < sizeof(arr); i++)
    {
        if (arr[i] != 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    string s;
    cout << "Enter a string:";
    getline(cin, s);

    string ns;
    cout << "Enter another string:";
    getline(cin, ns);

    cout << checkAnagram(s, ns) << endl;
}