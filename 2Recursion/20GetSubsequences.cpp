#include <iostream>
#include <vector>

using namespace std;

void generateSubsequences(string s, int index, string current, vector<string> &subsequences)
{
    if (index == s.length())
    {
        subsequences.push_back(current);
        return;
    }

    generateSubsequences(s, index + 1, current, subsequences);

    generateSubsequences(s, index + 1, current + s[index], subsequences);
}

int main()
{
    string word;
    cout << "Enter the word:";
    getline(cin, word);

    vector<string> subsequences;

    generateSubsequences(word, 0, "", subsequences);

    cout << "Subsequences of \"" << word << "\":\n";
    for (int i = 0; i < subsequences.size(); i++)
    {
        cout << subsequences[i] << " ";
    }

    return 0;
}
