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
}