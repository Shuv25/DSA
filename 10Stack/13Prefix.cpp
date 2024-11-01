#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool is_operand(char c)
{
    return isdigit(c);
}

int evaluate(string expression)
{
    stack<int> stack;

    for (int i = expression.size() - 1; i >= 0; i--)
    {
        char c = expression[i];

        if (is_operand(c))
        {
            stack.push(c - '0');
        }
        else
        {
            int o1 = stack.top();
            stack.pop();
            int o2 = stack.top();
            stack.pop();

            if (c == '+')
            {
                stack.push(o1 + o2);
            }
            else if (c == '-')
            {
                stack.push(o1 - o2);
            }
            else if (c == '*')
            {
                stack.push(o1 * o2);
            }
            else if (c == '/')
            {
                stack.push(o1 / o2);
            }
        }
    }

    return stack.top();
}

int main()
{
    string test_expression = "+9*26";
    cout << evaluate(test_expression) << endl;

    return 0;
}
