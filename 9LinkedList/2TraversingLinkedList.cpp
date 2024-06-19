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

void printlist(Node *head)
{
    Node *curr = head; // creating a curr variable to traverse the linked list untill its find null
    while (curr != NULL)
    {
        cout << curr->data << " "; // printing the data of a particular node
        curr = curr->next;         // changing to next location
    }
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    printlist(head);
}