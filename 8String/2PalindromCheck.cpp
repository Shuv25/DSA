#include <iostream>

using namespace std;

string checkPalindrome(string s)
{
    int i = 0;
    int j = s.length() - 1;
    while (i <= j)
    {
        swap(s[i], s[j]);
        i++;
        j--;
    }

    return s;
}

int main()
{
    string s;
    cout << "Enter a word to check if its a palindrome or not:";
    cin >> s;

    string ns = checkPalindrome(s);

    if (s == ns)
    {
        cout << "Yes Palindrome" << endl;
    }
    else
    {
        cout << "Not Palindrome" << endl;
    }
}