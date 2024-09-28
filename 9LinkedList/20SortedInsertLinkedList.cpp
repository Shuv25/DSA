#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *ptr;
    Node(int d)
    {
        data = d;
        ptr = nullptr;
    }
};

Node *insertBeg(Node *head, int x)
{
    Node *temp = new Node(x);
    temp->ptr = head;
    return temp;
}

Node *sortedInsert(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == nullptr || temp->data < head->data)
    {
        temp->ptr = head;
        return temp;
    }

    Node *curr = head;
    while (curr->ptr != nullptr && curr->ptr->data < temp->data)
    {
        curr = curr->ptr;
    }

    temp->ptr = curr->ptr;
    curr->ptr = temp;

    return head;
}

Node *printlist(Node *head)
{
    if (head == nullptr)
    {
        return head;
    }
    cout << head->data << " ";
    return printlist(head->ptr);
}

int main()
{
    Node *head = nullptr;

    head = insertBeg(head, 50);
    head = insertBeg(head, 40);
    head = insertBeg(head, 20);

    // int k;
    // cout << "Enter the element that u want to insert:";
    // cin >> k;

    head = sortedInsert(head, 10);
    head = sortedInsert(head, 30);

    printlist(head);
}