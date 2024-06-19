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

Node *insertBeg(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
    {
        temp->next = temp;
        return temp;
    }
    else
    {
        temp->next = head->next;
        head->next = temp;
        int t = head->data;
        head->data = temp->data;
        temp->data = t;
        return head;
    }
}
Node *insertEnd(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
    {
        temp->next = temp;
        return temp;
    }
    else
    {
        temp->next = head->next;
        head->next = temp;
        int t = head->data;
        head->data = temp->data;
        temp->data = t;
        return temp;
    }
}
Node *insertPos(Node *head, int x, int pos)
{
    Node *temp = new Node(x);
    if (head == NULL) // If the list is empty, insert at the beginning
    {
        temp->next = temp;
        return temp;
    }
    if (pos == 1) // If inserting at the beginning, same as insertBeg
    {
        temp->next = head->next;
        head->next = temp;
        int t = head->data;
        head->data = temp->data;
        temp->data = t;
        return head;
    }
    else
    {
        Node *curr = head;
        for (int i = 1; i < pos - 1 && curr->next != head; i++) // Traverse to the (pos - 1)th node
        {
            curr = curr->next;
        }
        temp->next = curr->next;
        curr->next = temp;
        return head;
    }
}

void printlist(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    cout << head->data << " ";
    for (Node *p = head->next; p != head; p = p->next)
    {
        cout << p->data << " ";
    }
    cout << endl;
}

// void printlistRev(Node *head)
// {
//     if (head == NULL)
//     {
//         return;
//     }
//     printlistRev(head->next);
//     cout << head->data << " ";
// }
Node *deleteBeg(Node *head)
{
    if (head == NULL)
    {
        return NULL; // If the list is empty, nothing to delete
    }

    Node *temp = head;

    if (head->next == head) // If there's only one node in the list
    {
        delete head;
        return NULL; // The list becomes empty after deletion
    }

    Node *last = head;
    while (last->next != head)
    {
        last = last->next; // Traverse to the last node
    }
    last->next = head->next; // Make the last node point to the second node
    head = head->next;       // Update the head pointer to the second node
    delete temp;             // Delete the first node
    return head;             // Return the updated head
}

Node *deleteEnd(Node *head)
{
    if (head == NULL)
    {
        return NULL; // If the list is empty, nothing to delete
    }

    if (head->next == head) // If there's only one node in the list
    {
        delete head;
        return NULL; // The list becomes empty after deletion
    }

    Node *prev = NULL;
    Node *curr = head;
    while (curr->next != head)
    {
        prev = curr;
        curr = curr->next;
    }
    prev->next = head; // Make the second last node point to the head
    delete curr;       // Delete the last node
    return head;       // Return the updated head
}

Node *deletePos(Node *head, int pos)
{
    if (head == NULL)
    {
        return NULL; // If the list is empty, nothing to delete
    }

    if (pos == 1) // If deleting the first node
    {
        Node *temp = head;
        if (head->next == head) // If there's only one node in the list
        {
            delete head;
            return NULL; // The list becomes empty after deletion
        }
        else
        {
            Node *last = head;
            while (last->next != head)
            {
                last = last->next; // Traverse to the last node
            }
            last->next = head->next; // Make the last node point to the second node
            head = head->next;       // Update the head pointer to the second node
            delete temp;             // Delete the first node
            return head;             // Return the updated head
        }
    }
    else
    {
        Node *prev = NULL;
        Node *curr = head;
        int cnt = 1;
        while (cnt < pos && curr->next != head)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        if (curr == head) // If the position is out of range
        {
            return head; // Return the list as is
        }
        prev->next = curr->next; // Link the previous node to the node after the current node
        delete curr;             // Delete the current node
        return head;             // Return the updated head
    }
}

int main()
{
    Node *head = NULL;
    head = insertBeg(head, 30);
    head = insertBeg(head, 40);
    head = insertBeg(head, 50);
    head = insertBeg(head, 60);

    printlist(head);

    head = insertEnd(head, 70);
    head = insertEnd(head, 80);
    head = insertEnd(head, 90);
    head = insertEnd(head, 100);

    printlist(head);

    head = insertPos(head, 70, 3);

    printlist(head);
}
