#include <iostream>
#include <string>

using namespace std;

struct Mystack
{
    char *arr;
    int cap;
    int top;

    Mystack(int c)
    {
        cap = c;
        arr = new char[cap];
        top = -1;
    }

    void push(char ele)
    {
        if (top == cap - 1)
        {
            cout << "Stack is full" << endl;
            return;
        }
        top++;
        arr[top] = ele;
    }

    char pop()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
            return '\0';
        }
        char res = arr[top];
        top--;
        return res;
    }

    char peek()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
            return '\0';
        }
        return arr[top];
    }

    int size()
    {
        return (top + 1);
    }

    bool isEmpty()
    {
        return (top == -1);
    }

    ~Mystack()
    {
        delete[] arr;
    }
};

bool isBalanced(string s)
{
    Mystack st(100);
    for (char c : s)
    {
        if (c == '(' || c == '[' || c == '{')
        {
            st.push(c);
        }
        else
        {
            if (st.isEmpty())
            {
                return false;
            }
            else if (c == ')' && st.pop() != '(')
            {
                return false;
            }
            else if (c == ']' && st.pop() != '[')
            {
                return false;
            }
            else if (c == '}' && st.pop() != '{')
            {
                return false;
            }
        }
    }
    return st.isEmpty();
}

int main()
{
    string s;
    cout << "Enter a string with parentheses: ";
    cin >> s;
    if (isBalanced(s))
    {
        cout << "The parentheses in the string are balanced." << endl;
    }
    else
    {
        cout << "The parentheses in the string are not balanced." << endl;
    }
    return 0;
}
