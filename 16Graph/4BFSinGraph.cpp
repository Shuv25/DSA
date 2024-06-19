#include <iostream>

using namespace std;

class Queue
{
private:
    int size;
    int capacity;
    int front;
    int *arr;

public:
    Queue(int c)
    {
        size = 0;
        capacity = c;
        front = 0;
        arr = new int[capacity];
    }
    int getSize()
    {
        return size;
    }
    bool isEmpty()
    {
        return size == 0;
    }
    bool isFull()
    {
        return size == capacity;
    }
    int getFront()
    {
        return front;
    }
    int getRear()
    {
        return arr[(front + size - 1) % capacity];
    }
    void enqueue(int ele)
    {
        if (isFull())
        {
            cout << "Queue is full" << endl;
            return;
        }
        int rear = (front + size) % capacity;
        arr[rear] = ele;
        size++;
    }
    int dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        int item = arr[front];
        front = (front + 1) % capacity;
        size--;
        return item;
    }
    ~Queue()
    {
        delete[] arr;
    }
};

class Graph
{
private:
    int V;
    int **narr;

public:
    Graph(int x)
    {
        V = x;
        narr = new int *[V];
        for (int i = 0; i < V; i++)
        {
            narr[i] = new int[V];
            for (int j = 0; j < V; j++)
            {
                narr[i][j] = 0;
            }
        }
    }
    void addEdge(int src, int dest)
    {
        narr[src][dest] = 1;
        narr[dest][src] = 1;
    }
    void BFS(int s)
    {
        bool *visited = new bool[V];
        for (int i = 0; i < V; i++)
        {
            visited[i] = false;
        }
        Queue q(V);
        visited[s] = true;
        q.enqueue(s);

        cout << "Traversal starts from " << s << ":";

        while (!q.isEmpty())
        {
            int ci = q.dequeue();
            cout << ci << " ";
            for (int i = 0; i < V; i++)
            {
                if (narr[ci][i] && !visited[i])
                {
                    visited[i] = true;
                    q.enqueue(i);
                }
            }
        }

        cout << endl;

        delete[] visited;
    }

    ~Graph()
    {
        for (int i = 0; i < V; i++)
        {
            delete[] narr[i];
        }
        delete[] narr;
    }
};

int main()
{
    Graph g(5);

    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 3);
    g.addEdge(3, 4);

    g.BFS(0);
}