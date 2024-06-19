#include <bits/stdc++.h>

using namespace std;

class heap
{
    int *arr;
    int size;
    int cap;

public:
    heap(int c)
    {
        cap = c;
        size = 0;
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

        for (int i = size - 1; i > 0 && arr[parent(i)] > arr[i];)
        {
            swap(arr[parent(i)], arr[i]);
            i = parent(i);
        }
    }

    void minheapify(int i)
    {
        int lt = left(i);
        int rt = right(i);
        int samllest = i;
        if (lt < size && arr[lt] < arr[i])
        {
            samllest = lt;
        }
        if (rt < size && arr[rt] < arr[i])
        {
            samllest = rt;
        }
        if (samllest != i)
        {
            swap(arr[i], samllest);
            minheapify(samllest);
        }
    }
    int extractMin()
    {
        if (size <= 0)
            return INT_MAX;
        if (size == 1)
        {
            size--;
            return arr[0];
        }
        swap(arr[0], arr[size - 1]);
        size--;
        minheapify(0);

        return arr[size];
    }
};
int main()
{
    heap h(11);
    h.insert(3);
    h.insert(2);
    h.insert(15);
    h.insert(20);
    cout << h.extractMin() << " ";
}