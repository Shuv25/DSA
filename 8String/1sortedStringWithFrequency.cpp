#include <iostream>

using namespace std;

void sortedString(string s, int count[])
{

    for (int i = 0; i < s.length(); i++)
    {
        count[s[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] > 0)
        {
            cout << (char)(i + 'a') << " frequncy :" << count[i] << " ";
        }
    }
    cout << endl;
}

int main()
{
    string s;
    cout << "Enter a string:";
    cin >> s;

    int count[26] = {0};

    sortedString(s, count);
}