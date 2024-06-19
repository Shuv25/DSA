#include <iostream>
using namespace std;

class heap
{
    int size;
    int capacity;
    int *arr;

public:
    heap(int c)
    {
        size = 0;
        capacity = c;
        arr = new int[capacity];
    }

    int left(int i)
    {
        return (2 * i + 1);
    }
    int right(int i)
    {
        return (2 * i + 2);
    }
    int parent(int i)
    {
        return (i - 1) / 2;
    }
    void insert(int ele)
    {
        if (size == capacity)
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
    h.insert(50);
    h.insert(40);
    h.insert(60);
    h.insert(35);
    h.insert(65);

    h.traverse();
    return 0;
}
