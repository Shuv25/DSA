#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int domino = 2;

    int prod = n * m;
    int cnt = 0;
    while (prod >= domino)
    {
        if (prod % domino == 0)
        {
            cnt++;
        }
        prod--;
    }
    cout << cnt << endl;
}