#include <iostream>

using namespace std;

struct Myqueue
{
    int cap;
    int *arr;
    int size;
    Myqueue(int c)
    {
        cap = c;
        arr = new int[cap];
        size = 0;
    }
    bool isempty()
    {
        return (size == 0);
    }
    bool isfull()
    {
        return (size == cap);
    }
    int sizee()
    {
        return size;
    }
    void enqueue(int ele)
    {
        if (size == cap)
        {
            cout << "Queue is full" << endl;
            return;
        }
        arr[size] = ele;
        size++;
    }
    void dequeue()
    {
        if (isempty())
        {
            cout << "Queue is empty" << endl;
            return;
        }
        for (int i = 0; i < size; i++)
        {
            arr[i] = arr[i + 1];
        }
        size--;
    }
    int front()
    {
        return arr[0];
    }
    int rear()
    {
        return arr[size - 1];
    }
    ~Myqueue()
    {
        delete[] arr;
    }
};

int main()
{
    Myqueue q(3);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    cout << q.sizee() << endl;
    cout << q.front() << endl;
    cout << q.rear() << endl;
    cout << q.isfull() << endl;
    q.dequeue();
    q.dequeue();
    q.dequeue();
    cout << q.isempty() << endl;
}