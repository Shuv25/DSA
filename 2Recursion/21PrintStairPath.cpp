#include <iostream>
#include <vector>

using namespace std;

void printStairPath(int n, vector<int> &path)
{
    if (n == 0)
    {
        for (int i = 0; i < path.size(); i++)
        {
            cout << path[i] << " ";
        }
        cout << endl;
        return;
    }

    for (int i = 1; i <= 3; i++)
    {
        if (n - i >= 0)
        {
            path.push_back(i);
            printStairPath(n - i, path);
            path.pop_back();
        }
    }
}

int main()
{
    int n;
    cout << "Enter your step no:";
    cin >> n;

    vector<int> path;

    cout << "Paths to reach ground from step " << n << ":" << endl;
    printStairPath(n, path);

    return 0;
}
