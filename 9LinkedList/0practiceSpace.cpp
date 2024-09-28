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

Node *insertBeg(Node *head, int data)
{
    Node *temp = new Node(data);
    temp->ptr = head;
    return temp;
}

Node *insertEnd(Node *head, int data)
{
    Node *temp = new Node(data);
    if (head == nullptr)
    {
        head = temp;
        return head;
    }
    Node *curr = head;
    while (curr->ptr != nullptr)
    {
        curr = curr->ptr;
    }
    curr->ptr = temp;
    return head;
}

Node *insertPos(Node *head, int pos, int data)
{
    Node *temp = new Node(data);
    if (pos == 1)
    {
        temp->ptr = head;
        return temp;
    }

    Node *curr = head;

    for (int i = 1; i < pos - 1 && curr != nullptr; i++)
    {
        curr = curr->ptr;
    }
    if (curr == nullptr)
    {
        return head;
    }

    temp->ptr = curr->ptr;
    curr->ptr = temp;
    return head;
}

Node *printlist(Node *head)
{
    if (head == nullptr)
    {
        return head;
    }
    cout << head->data << " ";
    printlist(head->ptr);
}

int main()
{
    Node *head = nullptr;
    head = insertBeg(head, 30);
    head = insertBeg(head, 40);
    head = insertBeg(head, 50);

    head = insertEnd(head, 60);
    head = insertEnd(head, 70);
    head = insertEnd(head, 80);

    head = insertPos(head, 2, 110);
    head = insertPos(head, 3, 100);

    printlist(head);
}