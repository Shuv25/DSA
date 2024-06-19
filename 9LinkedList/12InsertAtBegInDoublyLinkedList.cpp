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

Node *insertBeg(Node *head, int x)
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
    head = insertBeg(head, 30);
    head = insertBeg(head, 20);
    head = insertBeg(head, 10);

    printlist(head);
}