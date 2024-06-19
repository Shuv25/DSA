#include <iostream>

using namespace std;

void printPermutation(string s, string per)
{
    if (s.length() == 0)
    {
        cout << per << endl;
        return;
    }

    for (int i = 0; i < s.length(); i++)
    {
        char sub = s[i];
        string left = s.substr(0, i);
        string right = s.substr(i + 1);
        string merge = left + right;
        printPermutation(merge, per + sub);
    }
}

int main()
{
    string s;
    cout << "Enter the string:";
    getline(cin, s);

    printPermutation(s, "");
}