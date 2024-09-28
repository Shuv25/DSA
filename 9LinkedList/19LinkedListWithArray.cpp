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
    int size;
    cout << "Entre the size of the linked list:";
    cin >> size;

    int *arr = new int[size];
    cout << "Enter the elements of the linked list:";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    Node *head = nullptr, *tail = nullptr;

    for (int i = 0; i < size; i++)
    {
        Node *newnode = new Node(arr[i]);
        if (head == nullptr)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->ptr = newnode;
            tail = newnode;
        }
    }
    cout << "Elemnts of linked list are:";
    printlist(head);
    cout << endl;
    delete[] arr;
}