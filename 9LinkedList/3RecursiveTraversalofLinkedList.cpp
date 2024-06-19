#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = nullptr;
    }
};

Node *printlist(Node *head)
{
    if (head == nullptr)
    {
        return head;
    }
    cout << head->data << " ";
    return printlist(head->next);
}

Node *reverseList(Node *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        return head;
    }
    Node *prev = nullptr;
    Node *curr = head;
    Node *next = nullptr;
    while (curr != nullptr)
    {
        next = curr->next;
        curr->next = prev;

        prev = curr;
        curr = next;
    }
    head = prev;
    return head;
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    head = reverseList(head);

    printlist(head);
    cout << endl;

    Node *temp;
    while (head != nullptr)
    {
        temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
