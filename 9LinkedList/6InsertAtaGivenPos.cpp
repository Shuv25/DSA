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
    printlist(head->next);
}
Node *insertEnd(Node *head, int x)
{
    Node *temp = new Node(x);

    if (head == NULL)
    {
        return temp;
    }

    Node *curr = head;

    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;
    return head;
}

Node *insertSpecific(Node *head, int x, int pos)
{
    Node *temp = new Node(x);
    if (pos == 1)
    {
        return temp;
    }

    Node *curr = head;

    for (int i = 1; i < pos - 1 && curr != NULL; i++)
    {
        curr = curr->next;
    }
    if (curr == NULL)
    {
        return head;
    }
    temp->next = curr->next;
    curr->next = temp;
    return head;
}

int main()
{
    Node *head = NULL;
    head = insertEnd(head, 30);
    head = insertEnd(head, 40);
    head = insertEnd(head, 50);

    head = insertSpecific(head, 6, 2);
    head = insertSpecific(head, 7, 3);
    head = insertSpecific(head, 8, 4);

    printlist(head);
}