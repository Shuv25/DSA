#include <iostream>

using namespace std;

class Graph
{
private:
    int V;
    int **arr;

public:
    Graph(int x)
    {
        V = x;
        arr = new int *[V];
        for (int i = 0; i < V; i++)
        {
            arr[i] = nullptr;
        }
    }
    void addEdge(int src, int dest)
    {
        if (arr[src] == nullptr)
        {
            arr[src] = new int[2];
            arr[src][0] = dest;
            arr[src][1] = -1;
        }
        else
        {
            int i = 0;
            while (arr[src][i] != -1)
            {
                i++;
            }
            arr[src] = (int *)realloc(arr[src], (i + 2) * sizeof(int));
            arr[src][i] = dest;
            arr[src][i + 1] = -1;
        }
    }
    void printList()
    {
        for (int i = 0; i < V; i++)
        {
            cout << "Vertex:" << arr[i] << "->";
            if (arr[i] != nullptr)
            {
                int j = 0;
                while (arr[i][j] != -1)
                {
                    cout << arr[i][j] << " ";
                }
                cout << endl;
            }
        }
    }
    ~Graph()
    {
        for (int i = 0; i < V; i++)
        {
            delete[] arr[i];
        }
        delete[] arr;
    }
};

int main()
{
    int v;
    cout << "No of vertex? ";
    cin >> v;
    int e;
    cout << "No of edges? ";
    cin >> e;
    Graph g(v);
    cout << "Enter the src and dest using space:" << endl;
    int i = 0;
    while (i < e)
    {
        int src, dest;
        cin >> src >> dest;
        g.addEdge(src, dest);
        i++;
    }
    g.printList();
}