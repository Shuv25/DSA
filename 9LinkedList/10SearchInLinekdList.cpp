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

int searchElement(Node *head, int x)
{
    Node *curr = head;
    int cnt = 1;
    while (curr != NULL)
    {
        if (curr->data == x)
        {
            return cnt;
        }
        curr = curr->next;
        cnt++;
    }
    return -1;
}

// int searchElement(Node *head, int x)
// {
//     if (head == NULL)
//     {
//         return -1;
//     }
//     static int cnt = 1;
//     if (head->data == x)
//     {
//         return cnt;
//     }
//     cnt++;
//     searchElement(head->next, x);
// }

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    int ele;
    cout << "Enter the element you want to find:";
    cin >> ele;

    int pos = searchElement(head, ele);

    if (pos == -1)
    {
        cout << "Eelement is not found" << endl;
    }
    else
    {
        cout << "Eelement found at " << pos << " position." << endl;
    }
}