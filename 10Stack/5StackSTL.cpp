
#include <bits/stdc++.h>
#include <stack>

using namespace std;

int main()
{
    stack<int> s;
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
    cout << s.size() << endl;
    cout << s.top() << endl;
    s.pop();
    s.pop();
    s.pop();
    cout << s.empty() << endl;
    s.pop();
    cout << s.empty() << endl;
}