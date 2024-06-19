#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void printlist(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    cout << head->data << " ";
    for (Node *p = head->next; p != head; p = p->next)
    {
        cout << p->data << " ";
    }
}

int main()
{
    Node *head = new Node(30);
    head->next = new Node(40);
    head->next->next = new Node(50);
    head->next->next->next = new Node(60);
    head->next->next->next->next = head;

    printlist(head);
}