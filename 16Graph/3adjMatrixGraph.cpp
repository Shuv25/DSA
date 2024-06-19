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
            arr[i] = new int[V];
            for (int j = 0; j < V; j++)
            {
                arr[i][j] = 0;
            }
        }
    }
    void addEdge(int src, int dest)
    {
        arr[src][dest] = 1;
        arr[dest][src] = 1;
    }
    void printMatrix()
    {
        for (int i = 0; i < V; i++)
        {
            cout << "Vertex:" << i << "->";
            for (int j = 0; j < V; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
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
    g.addEdge(1, 0);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 1);

    g.printMatrix();
}