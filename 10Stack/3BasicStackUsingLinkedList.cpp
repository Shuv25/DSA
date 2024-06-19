#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = nullptr;
    }
};

struct Mystack
{
    Node *head;
    int size;
    Mystack()
    {
        head = nullptr;
        size = 0;
    }
    void push(int ele)
    {
        Node *temp = new Node(ele);
        temp->next = head;
        head = temp;
        size++;
    }
    int pop()
    {
        if (head == nullptr)
        {
            return -1;
        }
        int res = head->data;
        Node *temp = head;
        head = head->next;
        delete temp;
        size--;
        return res;
    }
    int getSize()
    {
        return size;
    }
    int peek()
    {
        if (head == nullptr)
        {
            return -1;
        }
        return head->data;
    }
    bool isEmpty()
    {
        return (head == nullptr);
    }
};

int main()
{
    Mystack s;
    s.push(30);
    s.push(40);
    s.push(50);
    cout << "Size of stack: " << s.getSize() << endl;
    cout << "Top element: " << s.peek() << endl;
    cout << "Popped element: " << s.pop() << endl;
    cout << "Popped element: " << s.pop() << endl;
    cout << "Popped element: " << s.pop() << endl;
    cout << "Is stack empty? " << s.isEmpty() << endl;
    return 0;
}
