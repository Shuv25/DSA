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

int main()
{
    Node *head = NULL;
    head = insertEnd(head, 30);
    head = insertEnd(head, 40);
    head = insertEnd(head, 50);

    printlist(head);
}