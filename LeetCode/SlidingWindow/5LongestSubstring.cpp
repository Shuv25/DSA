#include <iostream>

using namespace std;

int longestSubstring(string word)
{
    int l = 0;
    int r = 0;
    int len = 0;
    bool isdup[255] = {false};
    while (r < word.length())
    {
        if (isdup[word[r]] == true)
        {
            isdup[word[l]] = false;
            l++;
        }
        else
        {
            isdup[word[r]] = true;
            len = max(len, r - l + 1);
            r++;
        }
    }

    return len;
}

int main()
{
    string word;
    cout << "Enter the string:";
    cin >> word;

    cout << longestSubstring(word) << endl;
}