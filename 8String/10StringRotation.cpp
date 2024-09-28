#include <iostream>

using namespace std;

bool checkRotation(string s, string ss)
{
    if (s.length() != s.length())
    {
        return false;
    }
    string temp = s + s;
    return temp.find(ss) != string::npos;
}
int main()
{
    string s;
    cout << "Enter a string:";
    getline(cin, s);

    string ss;
    cout << "Enter another string:";
    getline(cin, ss);

    cout << checkRotation(s, ss) << endl;
}