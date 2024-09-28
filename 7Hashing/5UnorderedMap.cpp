#include <iostream>
#include <bits\stdc++.h>

using namespace std;

int main()
{
    unordered_map<string, int> m;
    m["Sourav"] = 1;
    m["Shuv"] = 2;
    m["Roy"] = 3;
    m.insert({"Sutradhar", 4});
    for (auto x : m)
    {
        cout << x.first << ":" << x.second << endl;
    }

    cout << (m.find("Shuv") != m.end() ? "Found" : "Not Found") << endl;
    cout << (m.find("Raj") != m.end() ? "Found" : "Not Found") << endl;

    for (auto x = m.begin(); x != m.end(); x++)
    {
        cout << (x->first) << " " << (x->second) << endl;
    }

    m.erase("Roy");

    cout << m.size() << endl;
}