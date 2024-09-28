#include <iostream>
#include <vector>

using namespace std;

void revwords(string word)
{
    vector<string> ns;

    string ss = "";

    for (int i = 0; i < word.length(); i++)
    {
        if (word[i] != ' ')
        {
            ss += word[i];
        }
        else
        {
            if (!ss.empty())
            {
                ns.push_back(ss);
                ss = "";
            }
        }
    }

    if (!ss.empty())
    {
        ns.push_back(ss);
    }

    for (int i = ns.size() - 1; i >= 0; i--)
    {
        cout << ns[i] << " ";
    }

    cout << endl;
}

int main()
{
    string word;
    cout << "Enter a sentance:";
    getline(cin, word);

    revwords(word);
}