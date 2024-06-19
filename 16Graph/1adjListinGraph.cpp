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
            cout << "Vertex " << i << ":";
            if (arr[i] != nullptr)
            {
                int j = 0;
                while (arr[i][j] != -1)
                {
                    cout << arr[i][j] << " ";
                    j++;
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
    Graph g(3);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(1, 0);
    g.addEdge(2, 1);
    g.addEdge(2, 0);

    g.printList();
}