#include <iostream>

using namespace std;

void subsets(string s, string c = "", int i = 0)
{
    if (s.length() == i)
    {
        cout << c << " ";
        return;
    }
    subsets(s, c, i + 1);
    subsets(s, c + s[i], i + 1);
}

int main()
{
    string s;
    cout << "String? ";
    getline(cin, s);
    subsets(s);
}