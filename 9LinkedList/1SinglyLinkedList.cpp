#include <iostream>

using namespace std;

struct Node
{
    int data;   // creating a variable can be any type
    Node *next; // createing the next node

    Node(int x) // creating a constractor for initializing values to diff nodes
    {
        data = x;    // asssinging values to the data
        next = NULL; // by default we are pointing to null address
    }
};

void printlist(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
}

int main()
{
    Node *head = new Node(10);  // creating a node named head the starting node with value as ten;
    Node *temp1 = new Node(20); // creating second node named temp1 with value as twenty
    Node *temp2 = new Node(30); // creating third node named temp2 with value as thirty

    head->next = temp1;  // storing  node adress of temp1;
    temp1->next = temp2; // storing node adress of temp2;
    // here temp2 is not storing any node adress;

    // head->next=new Node(40); //we can create this way also
    // head->next->next=new Node(50);

    printlist(head);
}