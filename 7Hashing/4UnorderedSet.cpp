#include <bits/stdc++.h>

using namespace std;

int main()
{
    unordered_set<int> s;

    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(6);
    s.insert(7);

    cout << (s.find(3) != s.end() ? "Found" : "Not Found") << endl;
    cout << (s.find(9) != s.end() ? "Found" : "Not Found") << endl;

    for (auto x = s.begin(); x != s.end(); x++)
    {
        cout << (*x) << " ";
    }
    cout << endl;
    cout << s.size() << endl;

    s.erase(5);
    cout << s.size() << endl;

    auto it = s.find(6);
    s.erase(it);
    cout << s.size() << endl;

    s.clear();

    cout << s.size() << endl;
}