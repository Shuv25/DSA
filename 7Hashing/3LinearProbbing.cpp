#include <iostream>

using namespace std;

struct Hashtable
{
    int *arr;
    int size;
    int cap;
    Hashtable(int c)
    {
        cap = c;
        size = 0;
        arr = new int[cap];
        for (int i = 0; i < cap; i++)
        {
            arr[i] = -1;
        }
    }

    int hashkey(int key)
    {
        return key % cap;
    }

    bool insert(int ele)
    {
        int index = hashkey(ele);
        if (size == cap)
        {
            return false;
        }
        while (arr[index] != -1 && arr[index] != -2 && arr[index] != ele)
        {
            index = (index + 1) % cap;
        }

        if (arr[index] == ele)
        {
            false;
        }
        else
        {
            arr[index] = ele;
            size++;
            return true;
        }
    }

    bool search(int sele)
    {
        int h = hashkey(sele);
        int index = h;
        while (arr[index] != -1)
        {
            if (arr[index] == sele)
            {
                return true;
            }
            index = (index + 1) % cap;

            if (index == h)
            {
                return false;
            }
        }

        return false;
    }

    bool del(int dele)
    {
        int h = hashkey(dele);
        int index = h;
        while (arr[index] != -1)
        {
            if (arr[index] == dele)
            {
                arr[index] = -2;
                return true;
            }
            index = (index + 1) % cap;
            if (index == h)
            {
                return false;
            }
        }

        return false;
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