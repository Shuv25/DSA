#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void permutation(string s, int n, int i)
{

    if (i == n)
    {
        cout << s << endl;
        return;
    }

    for (int j = i; j < n; j++)
    {
        swap(s[i], s[j]);
        permutation(s, n, i + 1);
        swap(s[i], s[j]);
    }
}

int main()
{
    string s = "abc";
    int n = s.length();
    permutation(s, n, 0);
    return 0;
}
