#include <bits/stdc++.h>

using namespace std;

int getMinlen(string text)
{
    int i = 0;
    int j = 0;
    int maxlen = 0;
    bool isPres[256] = {false};

    while (j < text.size())
    {
        if (isPres[text[j]] == true)
        {
            isPres[text[i]] = false;
            i++;
        }
        else
        {
            isPres[text[j]] = true;
            maxlen = max(maxlen, j - i + 1);
            j++;
        }
    }

    return maxlen;
}
int main()
{
    string text;
    cout << "Text:";
    getline(cin, text);

    cout << getMinlen(text) << endl;
}