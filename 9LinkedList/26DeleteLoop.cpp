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

void deleteLoop(Node *head)
{
    Node *first = head;
    Node *slow = head;

    int flag = 0;

    while (first != nullptr && first->ptr != nullptr)
    {
        slow = slow->ptr;
        first = first->ptr->ptr;

        if (first == slow)
        {
            break;
        }
    }

    if (first != slow)
    {
        return;
    }

    slow = head;

    while (slow->ptr != first->ptr)
    {
        slow = slow->ptr;
        first = first->ptr;
    }

    first->ptr = nullptr;
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
    Node *head = new Node(30);
    Node *temp2 = new Node(40);
    Node *temp3 = new Node(50);
    Node *temp4 = new Node(60);
    Node *temp5 = new Node(70);

    head->ptr = temp2;
    temp2->ptr = temp3;
    temp3->ptr = temp4;
    temp4->ptr = temp5;
    temp5->ptr = temp2;

    deleteLoop(head);

    printlist(head);
}