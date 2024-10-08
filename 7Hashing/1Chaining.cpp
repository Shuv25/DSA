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

    int hashkey(int key)
    {
        return key % size;
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
        int index = hashkey(ele);

        Node *newnode = new Node(ele);

        newnode->ptr = table[index];

        table[index] = newnode;
    }

    bool search(int sele)
    {
        int index = hashkey(sele);
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
        int index = hashkey(dele);
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
    Hashtable ht(10);

    ht.insert(45);
    ht.insert(55);
    ht.insert(95);

    cout << (ht.search(45) ? "Found" : "Not Found") << endl;
    cout << (ht.search(78) ? "Found" : "Not Found") << endl;

    ht.del(45);

    cout << (ht.search(45) ? "Found" : "Not Found") << endl;
}