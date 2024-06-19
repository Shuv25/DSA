#include <iostream>

using namespace std;

void rev(string word, int idx)
{
    if (idx == word.size())
    {
        return;
    }
    rev(word, idx + 1);
    cout << word[idx] << "";
}

int main()
{
    string word;
    getline(cin, word);

    rev(word, 0);
}