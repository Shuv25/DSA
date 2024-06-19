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

Node *del(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }
    Node *curr = head;
    while (curr->next->next != NULL)
    {
        curr = curr->next;
    }
    delete curr->next;

    curr->next = NULL;

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

Node *inserBeg(Node *head, int x)
{
    Node *temp = new Node(x);
    temp->next = head;
    return temp;
}

int main()
{
    Node *head = NULL;
    head = inserBeg(head, 50);
    head = inserBeg(head, 40);
    head = inserBeg(head, 30);

    printlist(head);

    head = del(head);

    cout << endl;
    printlist(head);
}