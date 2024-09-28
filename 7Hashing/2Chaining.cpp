#include <bits/stdc++.h>

using namespace std;

struct Hashtable
{
    int size;
    list<int> *table;
    Hashtable(int s)
    {
        size = s;
        table = new list<int>[size];
    }

    void insert(int ele)
    {
        int index = ele / size;
        table[index].push_back(ele);
    }

    bool search(int sele)
    {
        int index = sele / size;
        for (auto x : table[index])
        {
            if (x == sele)
            {
                return true;
            }
        }

        return false;
    }

    void del(int dele)
    {
        int index = dele / size;
        table[index].remove(dele);
    }
};

int main()
{
    Hashtable ht(10);

    ht.insert(45);
    ht.insert(55);
    ht.insert(95);

    cout << (ht.search(45) ? "Found" : "Not Found") << endl;
    cout << (ht.search(78) ? "Found" : "Not Found") << endl;

    ht.del(45);

    cout << (ht.search(45) ? "Found" : "Not Found") << endl;
}