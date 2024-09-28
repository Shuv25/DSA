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

Node *deleteDup(Node *head)
{
    Node *curr = head;
    while (curr != nullptr && curr->ptr != nullptr)
    {
        if (curr->data == curr->ptr->data)
        {
            Node *dup = curr->ptr;
            curr->ptr = curr->ptr->ptr;
            delete dup;
        }
        else
        {
            curr = curr->ptr;
        }
    }
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
    head = insertBeg(head, 70);
    head = insertBeg(head, 60);
    head = insertBeg(head, 50);
    head = insertBeg(head, 40);
    head = insertBeg(head, 40);
    head = insertBeg(head, 30);

    cout << "Printing the list First:";
    printlist(head);
    cout << endl;

    head = deleteDup(head);

    cout << "Printing the list aftr deleting duplicate:";
    printlist(head);
    cout << endl;
}