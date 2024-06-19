#include <iostream>

using namespace std;

class Graph
{
private:
    int V;
    int **arr;

public:
    Graph(int vertices)
    {
        V = vertices;
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
            arr[src] = new int[2]; // Changed size to 2 to accommodate both destination and -1
            arr[src][0] = dest;
            arr[src][1] = -1; // Mark the end of the list
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
    int vertices, edges;
    cout << "Enter the number of vertices: ";
    cin >> vertices;
    cout << "Enter the number of edges: ";
    cin >> edges;

    Graph g(vertices);

    cout << "Enter the edges (source vertex and destination vertex separated by space):" << endl;
    for (int i = 0; i < edges; i++)
    {
        int src, dest;
        cin >> src >> dest;
        g.addEdge(src, dest);
    }

    cout << "Adjacency List:" << endl;
    g.printList();

    return 0;
}
