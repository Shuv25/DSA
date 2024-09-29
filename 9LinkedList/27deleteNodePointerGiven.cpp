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

Node *deleteNode(Node *node)
{
    Node *temp = node->ptr;
    node->data = temp->data;
    node->ptr = temp->ptr;
    delete temp;
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

    deleteNode(temp3);

    printlist(head);
}