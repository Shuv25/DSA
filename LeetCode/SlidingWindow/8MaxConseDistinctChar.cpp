#include <iostream>
#include <unordered_map>

using namespace std;

int maxfruit(int n, string word, int k)
{
    int i = 0;
    int j = 0;
    int maxlen = 0;
    unordered_map<char, int> basket;

    while (j < n)
    {
        basket[word[j]]++;
        if (basket.size() > k)
        {
            basket[word[i]]--;
            if (basket[word[i]] == 0)
            {
                basket.erase(word[i]);
            }
            i++;
        }
        maxlen = max(maxlen, j - i + 1);
        j++;
    }
    return maxlen;
}
int main()
{
    string word;
    cout << "Enter the word:";
    cin >> word;

    int n = word.length();

    int k;
    cout << "Entre the no of unique fruit u want :";
    cin >> k;

    cout << maxfruit(n, word, k) << endl;
}