#include <iostream>

using namespace std;

class mystack
{
private:
    int top1;
    int top2;
    int *arr;
    int size;

public:
    mystack(int s)
    {
        size = s;
        top1 = -1;
        top2 = size;
        arr = new int[size];
    }
    void push1(int ele)
    {
        if (top1 + 1 == top2)
        {
            cout << "Stack one is full" << endl;
            return;
        }
        top1++;
        arr[top1] = ele;
    }
    void push2(int ele)
    {
        if (top1 + 1 == top2)
        {
            cout << "Stack two is full" << endl;
            return;
        }
        top2--;
        arr[top2] = ele;
    }
    int pop1()
    {
        if (top1 == -1)
        {
            cout << "Stack one is empty" << endl;
            return -1;
        }
        int res = arr[top1];
        top1--;
        return res;
    }
    int pop2()
    {
        if (top2 == size)
        {
            cout << "Stack two is empty" << endl;
            return -1;
        }
        int res = arr[top2];
        top2++;
        return res;
    }
    int peek1()
    {
        if (top1 == -1)
        {
            cout << "Stack one is empty" << endl;
            return -1;
        }
        return arr[top1];
    }
    int peek2()
    {
        if (top2 == size)
        {
            cout << "Stack two is empty" << endl;
            return -1;
        }
        return arr[top2];
    }
    int sizee1()
    {
        return (top1 + 1);
    }
    int sizee2()
    {
        return (size - top2);
    }
    bool isempty1()
    {
        return top1 == -1;
    }
    bool isempty2()
    {
        return top2 == size;
    }
};

int main()
{
    mystack s(10);
    s.push1(1);
    s.push1(2);
    s.push1(3);
    s.push1(4);
    s.push1(5);

    cout << s.sizee1() << endl;
    cout << s.peek1() << endl;
    cout << s.isempty1() << endl;

    s.push2(6);
    s.push2(7);
    s.push2(8);
    s.push2(9);
    s.push2(10);

    s.push1(11);

    cout << s.pop1() << endl;
    cout << s.pop2() << endl;
    cout << s.peek2() << endl;
    cout << s.pop2() << endl;
    cout << s.pop2() << endl;
    cout << s.pop2() << endl;
    cout << s.pop2() << endl;
    cout << s.sizee2() << endl;
    cout << s.isempty2() << endl;
}