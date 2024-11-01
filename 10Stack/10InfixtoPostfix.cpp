#include <bits\stdc++.h>

using namespace std;

int precedence(char op)
{
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/' || op == '%')
        return 2;
    return 0;
}

string toPostfix(const string &infix)
{
    stack<char> store;
    string postfix = "";

    for (int i = 0; i < infix.length(); i++)
    {
        char ch = infix[i];

        if (isalnum(ch))
        {
            postfix += ch;
        }

        else if (ch == '(')
        {
            store.push(ch);
        }
        else if (ch == ')')
        {
            while (!store.empty() && store.top() != '(')
            {
                postfix += store.top();
                store.pop();
            }
            store.pop();
        }
        else
        {
            while (!store.empty() && precedence(store.top()) >= precedence(ch))
            {
                postfix += store.top();
                store.pop();
            }
            store.push(ch);
        }
    }
    while (!store.empty())
    {
        postfix += store.top();
        store.pop();
    }

    return postfix;
}

int main()
{
    string infix;
    cout << "Enter an infix expression: ";
    getline(cin, infix);

    string postfix = toPostfix(infix);
    cout << "Postfix expression: " << postfix << endl;

    return 0;
}
