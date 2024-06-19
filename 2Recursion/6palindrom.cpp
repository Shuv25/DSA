#include <iostream>
#include <string.h>

using namespace std;

bool palindrom(string str, int start, int end)
{
    if (start >= end)
    {
        return true;
    }

    return (str[start] == str[end]) && palindrom(str, start + 1, end - 1);
}

int main()
{
    string str;
    cout << "Enter a string:";
    getline(cin, str);

    int start = 0;
    int end = str.length() - 1;

    cout << palindrom(str, start, end) << endl;
}