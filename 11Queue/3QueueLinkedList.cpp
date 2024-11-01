#include <bits\stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node *ptr;
    Node(int d)
    {
        data = d;
        ptr = nullptr;
    }
};

class Queuee
{
    Node *head;

public:
    Queuee()
    {
        head = nullptr;
    }
    void enque(int ele)
    {
        Node *temp = new Node(ele);
        if (head == nullptr)
        {
            head = temp;
        }
        else
        {
            Node *curr = head;
            while (curr->ptr != nullptr)
            {
                curr = curr->ptr;
            }
            curr->ptr = temp;
        }
    }
    int deque()
    {
        if (head == nullptr)
        {
            throw runtime_error("Queue is empty.");
        }

        int popele = head->data;
        Node *temp = head;
        head = head->ptr;
        delete temp;
        return popele;
    }
    int getsize()
    {
        int cnt = 0;
        Node *curr = head;
        while (curr != nullptr)
        {
            cnt++;
            curr = curr->ptr;
        }
        return cnt;
    }
    bool isEmpty()
    {
        return getsize() == 0;
    }
    int getFront()
    {
        if (head == nullptr)
            throw runtime_error("Queue is empty.");
        return head->data;
    }
    int getRear()
    {
        if (head == nullptr)
            throw runtime_error("Queue is empty.");
        Node *curr = head;
        while (curr->ptr != nullptr)
        {
            curr = curr->ptr;
        }
        return curr->data;
    }
};

int main()
{
    Queuee q;
    q.enque(3);
    q.enque(4);
    q.enque(5);
    q.enque(6);
    cout << q.getsize() << endl;
    cout << q.getFront() << endl;
    cout << q.getRear() << endl;
    cout << q.deque() << endl;
    cout << q.deque() << endl;
    cout << q.deque() << endl;
    cout << q.getsize() << endl;
}