#include <iostream>

using namespace std;

struct stack
{
    int cap;
    int top;
    int *arr;
    stack(int c)
    {
        cap = c;
        arr = new int[cap];
        top = -1;
    }
    int sizee()
    {
        return top + 1;
    }
    bool isempty()
    {
        return top == -1;
    }
    bool isfull()
    {
        return top == cap;
    }
    void push(int ele)
    {
        if (isfull())
        {
            cout << "Stack is full" << endl;
        }
        top++;
        arr[top] = ele;
    }
    int pop()
    {
        if (isempty())
        {
            cout << "Stack id empty" << endl;
        }
        int res = arr[top];
        top--;
        return res;
    }
};

int main()
{
    stack s(5);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    cout << s.sizee() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    s.push(70);
    s.push(80);
    cout << s.sizee() << endl;
}