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

Node *delbeg(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    else
    {
        Node *temp = head->next;
        delete head;
        return temp;
    }
}

Node *delend(Node *head)
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

Node *delpos(Node *head, int pos)
{
    if (head == NULL)
    {
        return NULL;
    }
    if (pos == 1)
    {
        delete head;
        return NULL;
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
    delete curr;
    return head;
}

Node *insertBeg(Node *head, int x)
{
    Node *temp = new Node(x);
    temp->next = head;
    return temp;
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

Node *insertpos(Node *head, int pos, int x)
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
    head = insertBeg(head, 30);
    head = insertBeg(head, 20);
    head = insertBeg(head, 10);

    head = insertEnd(head, 40);
    head = insertEnd(head, 50);
    head = insertEnd(head, 60);

    head = insertpos(head, 3, 70);
    head = insertpos(head, 4, 80);
    head = insertpos(head, 5, 90);

    printlist(head);
    cout << endl;

    head = delbeg(head);
    printlist(head);
    cout << endl;

    head = delend(head);
    printlist(head);
    cout << endl;

    head = delpos(head, 3);
    printlist(head);
    cout << endl;
}