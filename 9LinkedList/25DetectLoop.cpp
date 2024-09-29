// Floyd Cycle Detection

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

bool detectLoop(Node *head)
{
    Node *first = head;
    Node *slow = head;

    while (first != nullptr && first->ptr != nullptr)
    {
        slow = slow->ptr;
        first = first->ptr->ptr;
        if (slow == first)
        {
            return true;
        }
    }

    return false;
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

    cout << detectLoop(head) << endl;
}