#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *prev;
    Node *next;

    Node(int x)
    {
        prev = NULL;
        next = NULL;
    }
};

Node *insertEnd(Node *head, int x)
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

Node *insertpos(Node *head, int pos, int x)
{
    Node *temp = new Node(x);
    temp->data = x;
    if (head == NULL)
    {
        return temp;
    }
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
    temp->prev = curr;
    curr->next = temp;
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
    head = insertEnd(head, 10);
    head = insertEnd(head, 20);
    head = insertEnd(head, 30);

    printlist(head);
    cout << endl;

    head = insertpos(head, 2, 40);
    head = insertpos(head, 3, 50);

    printlist(head);
    cout << endl;
}