#include <iostream>

using namespace std;

class Graph
{
private:
    int V;
    int **arr;
    bool *visited;

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
        visited = new bool[V];
        for (int i = 0; i < V; i++)
        {
            visited[i] = false;
        }
    }

    void addEdge(int src, int dest)
    {
        arr[src][dest] = 1;
        arr[dest][src] = 1;
    }

    void DFSUtil(int s)
    {
        visited[s] = true;
        cout << s << " ";
        for (int i = 0; i < V; i++)
        {
            if (arr[s][i] && !visited[i])
            {
                DFSUtil(i);
            }
        }
    }

    void DFS()
    {
        cout << "DFS Traversal:";
        for (int i = 0; i < V; i++)
        {
            if (!visited[i])
            {
                DFSUtil(i);
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
        delete[] visited;
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

    g.DFS();
}