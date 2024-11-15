#include <bits\stdc++.h>

using namespace std;

int main()
{
    deque<int> dq;

    dq.push_front(3);
    dq.push_front(4);
    dq.push_back(5);
    dq.push_back(6);
    cout << dq.front() << endl;
    cout << dq.back() << endl;
    cout << dq.size() << endl;
    dq.pop_front();
    dq.pop_back();
    cout << dq.front() << endl;
    cout << dq.back() << endl;
    cout << dq.size() << endl;
}