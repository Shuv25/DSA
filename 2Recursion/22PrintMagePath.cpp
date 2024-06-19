#include <iostream>

using namespace std;

void printMagePath(int i, int j, int n, int m, string path)
{
    if (i > n || j > m)
    {
        return;
    }
    if (i == n && j == m)
    {
        cout << path << endl;
        return;
    }

    printMagePath(i, j + 1, n, m, path + "h");
    printMagePath(i + 1, j, n, m, path + "v");
}

int main()
{
    int n, m;
    cout << " Enter the destination pos:";
    cin >> n >> m;

    printMagePath(1, 1, n, m, "");
}