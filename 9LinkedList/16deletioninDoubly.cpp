#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *prev;
    Node *next;
    Node(int x)
    {
        data = x;
        prev = NULL;
        next = NULL;
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

Node *delf(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    else
    {
        Node *temp = head->next;
        delete head;
        if (temp != NULL)
        {
            temp->prev = NULL;
            return temp;
        }
    }
}

Node *dele(Node *head)
{
    if (head == NULL)
    {
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

Node *delpos(Node *head, int pos)
{
    if (head == NULL)
    {
        return NULL;
    }
    if (pos == 1)
    {
        Node *temp = head->next;
        delete head;
        if (temp != NULL)
        {
            temp->prev = NULL;
            return temp;
        }
    }
    Node *prev = NULL;
    Node *curr = head;
    int cnt = 1;
    while (curr != NULL && cnt < pos)
    {
        prev = curr;
        curr = curr->next;
        cnt++;
    }
    if (curr == NULL)
    {
        return head;
    }
    prev->next = curr->next;
    if (curr->next != NULL)
    {
        curr->next->prev = prev;
    }
    delete curr;
    return head;
}

void printlist(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    head = beg(head, 40);
    head = beg(head, 30);
    head = beg(head, 20);
    head = beg(head, 10);

    printlist(head);
    cout << endl;

    head = delf(head);
    printlist(head);
    cout << endl;

    head = dele(head);
    printlist(head);
    cout << endl;

    head = delpos(head, 2);
    printlist(head);
    cout << endl;
    return 0;
}