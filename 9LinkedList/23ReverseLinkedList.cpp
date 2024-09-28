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

Node *insertBeg(Node *head, int d)
{
    Node *temp = new Node(d);
    temp->ptr = head;
    return temp;
}

Node *revList(Node *head)
{
    Node *curr = head;
    Node *prev = nullptr;

    while (curr != nullptr)
    {
        Node *next = curr->ptr;
        curr->ptr = prev;
        prev = curr;
        curr = next;
    }

    return prev;
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
    head = insertBeg(head, 30);
    head = insertBeg(head, 25);
    head = insertBeg(head, 15);
    head = insertBeg(head, 20);
    head = insertBeg(head, 5);
    head = insertBeg(head, 10);

    cout << "Printing the list First:";
    printlist(head);
    cout << endl;

    head = revList(head);
    cout << "Printing the revlist:";
    printlist(head);
    cout << endl;
}