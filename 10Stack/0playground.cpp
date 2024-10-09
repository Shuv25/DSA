#include <iostream>

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

struct Mystack
{
    Node *head;
    int size;
    Mystack()
    {
        size = 0;
        head = nullptr;
    }
    void push(int ele)
    {
        Node *temp = new Node(ele);
        temp->ptr = head;
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
        head = head->ptr;
        delete temp;
        size--;
        return res;
    }
    int sizee()
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
    bool isempty()
    {
        if (head == nullptr)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    Mystack s;
    s.push(30);
    s.push(40);
    s.push(50);
    cout << "Size of stack: " << s.sizee() << endl;
    cout << "Top element: " << s.peek() << endl;
    cout << "Popped element: " << s.pop() << endl;
    cout << "Popped element: " << s.pop() << endl;
    cout << "Popped element: " << s.pop() << endl;
    cout << "Is stack empty? " << s.isempty() << endl;
}