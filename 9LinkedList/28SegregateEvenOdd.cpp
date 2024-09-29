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

Node *insertEnd(Node *head, int ele)
{
    Node *temp = new Node(ele);
    if (head == nullptr)
    {
        head = temp;
        return head;
    }

    Node *curr = head;
    while (curr->ptr != nullptr)
    {
        curr = curr->ptr;
    }

    curr->ptr = temp;
    return head;
}

Node *segEvenOdd(Node *head)
{
    Node *eS = NULL, *eE = NULL, *oS = NULL, *oE = NULL;
    for (Node *curr = head; curr != NULL; curr = curr->ptr)
    {
        int x = curr->data;
        if (x % 2 == 0)
        {
            if (eS == NULL)
            {
                eS = curr;
                eE = eS;
            }
            else
            {
                eE->ptr = curr;
                eE = eE->ptr;
            }
        }
        else
        {
            if (oS == NULL)
            {
                oS = curr;
                oE = oS;
            }
            else
            {
                oE->ptr = curr;
                oE = oE->ptr;
            }
        }
    }
    if (oS == NULL || eS == NULL)
        return head;
    eE->ptr = oS;
    oE->ptr = NULL;
    return eS;
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
    head = insertEnd(head, 17);
    head = insertEnd(head, 15);
    head = insertEnd(head, 8);
    head = insertEnd(head, 12);
    head = insertEnd(head, 15);

    printlist(head);
    cout << endl;

    head = segEvenOdd(head);
    printlist(head);
    cout << endl;
}