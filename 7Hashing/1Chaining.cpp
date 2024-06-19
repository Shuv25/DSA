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

class HashTable
{
private:
    int size;
    Node **table;

    int hash(int key)
    {
        return key % size;
    }

public:
    HashTable(int s)
    {
        size = s;
        table = new Node *[size];
        for (int i = 0; i < size; ++i)
        {
            table[i] = nullptr;
        }
    }

    void insert(int ele)
    {
        int index = hash(ele);
        Node *newNode = new Node(ele);
        newNode->ptr = table[index];
        table[index] = newNode;
    }

    bool search(int sele)
    {
        int index = hash(sele);
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

    void remove(int dele)
    {
        int index = hash(dele);
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
    HashTable ht(10);

    ht.insert(5);
    ht.insert(15);
    ht.insert(25);
    ht.insert(35);
    ht.insert(45);

    cout << "Search 15: " << (ht.search(15) ? "Found" : "Not found") << endl;
    cout << "Search 20: " << (ht.search(20) ? "Found" : "Not found") << endl;

    ht.remove(15);
    cout << "Search 15 after removal: " << (ht.search(15) ? "Found" : "Not found") << endl;

    return 0;
}
