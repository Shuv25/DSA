#include <bits\stdc++.h>

using namespace std;

int main()
{
    queue<string> q;
    q.push("5");
    q.push("6");

    for (int i = 0; i < 10; i++)
    {
        string curr = q.front();
        cout << curr << " ";
        q.pop();
        q.push(curr + '5');
        q.push(curr + '6');
    }
}