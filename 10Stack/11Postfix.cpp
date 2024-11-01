#include <iostream>
#include <stack>
#include <string>

using namespace std;

int evaluatePostfix(const string &exp)
{
    stack<int> s;

    for (int i = 0; i < exp.length(); i++)
    {
        char ch = exp[i];

        if (isdigit(ch))
        {
            s.push(ch - '0');
        }
        else
        {
            int val1 = s.top();
            s.pop();
            int val2 = s.top();
            s.pop();

            int result;

            switch (ch)
            {
            case '+':
                result = val2 + val1;
                break;
            case '-':
                result = val2 - val1;
                break;
            case '*':
                result = val2 * val1;
                break;
            case '/':
                result = val2 / val1;
                break;
            }
            s.push(result);
        }
    }

    return s.top();
}

int main()
{
    string exp;
    cout << "Enter the expression:";
    getline(cin, exp);

    cout << "Postfix evaluation: " << evaluatePostfix(exp) << endl;
}
