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
        arr = new int[cap];
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
    void printstack()
    {
        for (int i = 0; i < cap; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    void reversestack()
    {
        for (int i = top; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Mystack s(3);
    s.push(30);
    s.push(40);
    s.push(50);
    s.printstack();
    s.reversestack();
}