#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *ptr;
    Node(int d)
    {
        data = d;
        ptr = nullptr;
    }
};

class Hashtable
{
private:
    int size;
    Node **table;

    int key(int ele)
    {
        return ele % size;
    }

public:
    Hashtable(int s)
    {
        size = s;
        table = new Node *[size];
        for (int i = 0; i < size; i++)
        {
            table[i] = nullptr;
        }
    }

    void insert(int ele)
    {
        int index = key(ele);
        Node *newnode = new Node(ele);
        newnode->ptr = table[index];
        table[index] = newnode;
    }

    bool search(int sele)
    {
        int index = key(sele);
        Node *curr = table[index];
        while (curr)
        {
            if (curr->data == sele)
            {
                return true;
            }
            curr = curr->ptr;
        }

        return false;
    }

    void del(int dele)
    {
        int index = key(dele);
        Node *curr = table[index];
        Node *prev = nullptr;

        while (curr)
        {
            if (curr->data == dele)
            {
                if (prev)
                {
                    prev->ptr = curr->ptr;
                }
                else
                {
                    table[index] = curr->ptr;
                }
                delete curr;
                return;
            }
            prev = curr;
            curr = curr->ptr;
        }
    }
};

int main()
{
    Hashtable ht(5);

    ht.insert(5);
    ht.insert(7);
    ht.insert(9);
    ht.insert(4);

    cout << (ht.search(9) ? "Found" : "Not Found") << endl;
    cout << (ht.search(7) ? "Found" : "Not Found") << endl;

    ht.del(9);
    ht.del(7);

    cout << (ht.search(9) ? "Found" : "Not Found") << endl;
    cout << (ht.search(7) ? "Found" : "Not Found") << endl;
}