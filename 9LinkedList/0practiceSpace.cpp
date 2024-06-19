#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;
    Node(int d)
    {
        data = d;
        next = nullptr;
        prev = nullptr;
    }
};

Node *beg(Node *head, int ele)
{
    Node *temp = new Node(ele);
    temp->data = ele;
    if (head != nullptr)
    {
        temp->next = head;
        head->prev = temp;
    }
    return temp;
}

Node *end(Node *head, int ele)
{
    Node *temp = new Node(ele);
    temp->data = ele;
    if (head == nullptr)
    {
        return nullptr;
    }
    Node *curr = head;
    while (curr->next != nullptr)
    {
        curr = curr->next;
    }
    curr->next = temp;
    temp->prev = curr;
    return head;
}
Node *spos(Node *head, int ele, int pos)
{
    Node *temp = new Node(ele);
    if (head == nullptr)
    {
        return nullptr;
    }
    if (pos == 1)
    {
        return temp;
    }
    Node *curr = head;
    for (int i = 1; i < pos - 1 && curr != nullptr; i++)
    {
        curr = curr->next;
    }
    if (curr == nullptr)
    {
        return head;
    }
    temp->next = curr->next;
    curr->next = temp;
    temp->prev = curr;
    return head;
}

Node *delf(Node *head)
{
    if (head == nullptr)
    {
        return nullptr;
    }
    else
    {
        Node *temp = head->next;
        delete head;
        if (temp != nullptr)
        {
            temp->prev = nullptr;
            return temp;
        }
    }
    return nullptr;
}

Node *dele(Node *head)
{
    if (head == nullptr)
    {
        return nullptr;
    }
    Node *curr = head;
    while (curr->next->next != nullptr)
    {
        curr = curr->next;
    }
    delete curr->next;
    curr->next = nullptr;
    return head;
}

Node *delepos(Node *head, int pos)
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
    if (head == nullptr)
    {
        return;
    }
    cout << head->data << " ";
    printlist(head->next);
}
int main()
{
    Node *head = nullptr;
    head = beg(head, 30);
    head = beg(head, 40);

    printlist(head);
    cout << endl;

    head = end(head, 50);
    head = end(head, 60);

    printlist(head);
    cout << endl;

    head = spos(head, 70, 3);
    printlist(head);
    cout << endl;

    head = delf(head);
    printlist(head);
    cout << endl;

    head = dele(head);
    printlist(head);
    cout << endl;

    head = delepos(head, 2);
    printlist(head);
    cout << endl;
}