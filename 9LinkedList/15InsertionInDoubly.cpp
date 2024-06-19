#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;
    Node(int x)
    {
        data = x;
        next = NULL;
        prev = NULL;
    }
};

Node *beg(Node *head, int x)
{
    Node *temp = new Node(x);
    temp->data = x;
    temp->next = head;
    if (head != NULL)
    {
        head->prev = temp;
    }
    return temp;
}
Node *end(Node *head, int x)
{
    Node *temp = new Node(x);
    temp->data = x;
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
    temp->prev = curr;
    return head;
}
Node *pos(Node *head, int pos, int x)
{
    Node *temp = new Node(x);
    temp->data = x;
    if (pos == 1)
    {
        temp->next = head;
        head->prev = temp;
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
    temp->prev = curr;
    return head;
}

void printlist(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    cout << head->data << " ";
    printlist(head->next);
}

int main()
{
    Node *head = NULL;
    head = beg(head, 30);
    head = beg(head, 20);
    head = beg(head, 10);

    head = end(head, 40);
    head = end(head, 50);
    head = end(head, 60);

    head = pos(head, 4, 70);
    head = pos(head, 5, 80);
    head = pos(head, 6, 90);

    printlist(head);
}