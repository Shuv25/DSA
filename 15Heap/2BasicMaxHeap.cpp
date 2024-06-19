#include <bits/stdc++.h>

using namespace std;

class heap
{
    int size;
    int cap;
    int *arr;

public:
    heap(int c)
    {
        size = 0;
        cap = c;
        arr = new int[cap];
    }
    int left(int i) { return (2 * i + 1); }
    int right(int i) { return (2 * i + 2); }
    int parent(int i) { return ((i - 1) / 2); }

    void insert(int ele)
    {
        if (size == cap)
        {
            return;
        }
        size++;
        arr[size - 1] = ele;
        for (int i = size - 1; i > 0 && arr[parent(i)] < arr[i];)
        {
            int k = arr[parent(i)];
            arr[parent(i)] = arr[i];
            arr[i] = k;

            i = parent(i);
        }
    }

    void traverse()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
    }
};

int main()
{
    heap h(10);
    h.insert(45);
    h.insert(35);
    h.insert(55);
    h.insert(75);
    h.insert(25);

    h.traverse();
}