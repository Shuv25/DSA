#include <bits/stdc++.h>
using namespace std;

void insertAtFront(deque<int> &dq, int ele)
{
    if (dq.empty() || dq.front() > ele)
    {
        dq.push_front(ele);
    }
    else
    {
        auto it = dq.begin();
        it++;
        dq.insert(it, ele);
    }
}

void insertAtBack(deque<int> &dq, int ele)
{
    if (dq.empty() || dq.back() < ele)
    {
        dq.push_back(ele);
    }
    else
    {
        auto it = dq.end();
        it--;
        dq.insert(it, ele);
    }
}

int main()
{
    deque<int> dq;

    int n;
    cout << "How many ele u want to inserted from front:";
    cin >> n;
    cout << "Enter elements:";
    for (int i = 0; i < n; i++)
    {
        int eleFront;
        cin >> eleFront;
        insertAtFront(dq, eleFront);
    }

    int m;
    cout << "How many ele u want to inserted from back:";
    cin >> m;
    cout << "Enter elements:";
    for (int i = 0; i < m; i++)
    {
        int eleBack;
        cin >> eleBack;
        insertAtBack(dq, eleBack);
    }

    cout << "Front element: " << dq.front() << endl;
    cout << "Back element: " << dq.back() << endl;

    return 0;
}
