#include <iostream>

using namespace std;

struct Myqueue
{
    int cap;
    int *arr;
    int size;
    int front;
    Myqueue(int c)
    {
        cap = c;
        arr = new int[cap];
        size = 0;
        front = 0;
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
    int getfront()
    {
        if (isempty())
        {
            return -1;
        }
        else
        {
            return arr[front];
        }
    }
    int getrear()
    {
        if (isempty())
        {
            return -1;
        }
        else
        {
            return arr[(front + size - 1) % cap];
        }
    }
    void enqueue(int ele)
    {
        if (size == cap)
        {
            cout << "Queue is full" << endl;
            return;
        }
        int rear = (front + size) % cap; // Calculate the rear index correctly
        arr[rear] = ele;
        size++;
    }
    void dequeue()
    {
        if (isempty())
        {
            cout << "Queue is empty" << endl;
            return;
        }
        front = (front + 1) % cap;
        size--;
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
    cout << q.getfront() << endl;
    cout << q.getrear() << endl;
    cout << q.isfull() << endl;
    q.dequeue();
    q.dequeue();
    q.dequeue();
    cout << q.isempty() << endl;
    return 0;
}
