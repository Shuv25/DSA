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

void printNthFromEnd(Node *head, int pos)
{
    Node *curr = head;
    int cnt = 0;
    while (curr != nullptr)
    {
        cnt++;
        curr = curr->ptr;
    }
    Node *ncurr = head;
    for (int i = 1; i <= cnt - pos; i++)
    {
        ncurr = ncurr->ptr;
    }
    cout << ncurr->data << endl;
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

    int k;
    cout << "Entre the pos of the node from the last u want to print:";
    cin >> k;

    cout << "The " << k << "th node from the last:";
    printNthFromEnd(head, k);
}