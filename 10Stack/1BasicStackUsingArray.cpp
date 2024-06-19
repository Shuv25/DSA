#include <iostream>

using namespace std;

struct Mystack
{
    int *arr;
    int cap;
    int top;
    Mystack(int c)
    {
        cap = c;
        arr = new int[c];
        top = -1;
    }
    void push(int ele)
    {
        if (top == cap - 1)
        {
            cout << "Stack is full" << endl;
            return;
        }
        top++;
        arr[top] = ele;
    }
    int pop()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
        int res = arr[top];
        top--;
        return res;
    }
    int peek()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return arr[top];
    }
    int size()
    {
        return (top + 1);
    }
    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
    }
    ~Mystack()
    {
        delete[] arr;
    }
};

int main()
{
    Mystack s(5);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    cout << s.size() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.peek() << endl;
    cout << s.size() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.isEmpty() << endl;
    cout << s.pop() << endl;
    cout << s.peek() << endl;
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    s.push(80);
}