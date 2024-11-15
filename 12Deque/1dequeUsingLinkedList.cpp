#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;
    Node(int d)
    {
        data = d;
        next = nullptr;
        prev = nullptr;
    }
};

class DequeuClass
{
    Node *head;
    Node *tail;

public:
    DequeuClass()
    {
        head = nullptr;
        tail = nullptr;
    }

    void insertFront(int d)
    {
        Node *temp = new Node(d);
        temp->next = head;
        if (head != nullptr)
        {
            head->prev = temp;
        }
        head = temp;

        if (tail == nullptr)
        {
            tail = head;
        }
    }

    void insertRear(int d)
    {
        Node *temp = new Node(d);
        temp->prev = tail;
        if (tail != nullptr)
        {
            tail->next = temp;
        }
        tail = temp;

        if (head == nullptr)
        {
            head = tail;
        }
    }

    int deleteFront()
    {
        if (head == nullptr)
        {
            cout << "Deque is empty, nothing to delete at front.\n";
            return -1;
        }

        int popele = head->data;
        Node *temp = head;
        head = head->next;

        if (head != nullptr)
        {
            head->prev = nullptr;
        }
        else
        {
            tail = nullptr;
        }

        delete temp;
        return popele;
    }

    int deleteRear()
    {
        if (tail == nullptr)
        {
            cout << "Deque is empty, nothing to delete at rear.\n";
            return -1;
        }

        int popele = tail->data;
        Node *temp = tail;
        tail = tail->prev;

        if (tail != nullptr)
        {
            tail->next = nullptr;
        }
        else
        {
            head = nullptr;
        }

        delete temp;
        return popele;
    }

    int getFront()
    {
        if (head == nullptr)
        {
            cout << "Deque is empty, no front element.\n";
            return -1;
        }
        return head->data;
    }

    int getRear()
    {
        if (tail == nullptr)
        {
            cout << "Deque is empty, no rear element.\n";
            return -1;
        }
        return tail->data;
    }

    bool isEmpty()
    {
        return head == nullptr;
    }
};

int main()
{
    DequeuClass deque;

    deque.insertFront(10);
    deque.insertRear(20);
    deque.insertFront(5);

    cout << "Front element: " << deque.getFront() << endl;
    cout << "Rear element: " << deque.getRear() << endl;

    cout << "Deleting front element: " << deque.deleteFront() << endl;
    cout << "Deleting rear element: " << deque.deleteRear() << endl;

    cout << "Front element: " << deque.getFront() << endl;
    cout << "Rear element: " << deque.getRear() << endl;

    return 0;
}
