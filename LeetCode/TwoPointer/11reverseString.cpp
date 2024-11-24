#include <bits/stdc++.h>

using namespace std;

string reverseString(string &text)
{
    int i = 0;
    int j = text.size() - 1;

    while (i < j)
    {
        char temp = text[i];
        text[i] = text[j];
        text[j] = temp;
        i++;
        j--;
    }

    return text;
}
int main()
{
    string text;
    cout << "Enter the text:";
    getline(cin, text);

    cout << "Before Reversing:" << text << endl;

    reverseString(text);

    cout << "After Reversing:" << text << endl;
}