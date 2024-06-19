#include <iostream>

using namespace std;

void printMagePathWithJump(int i, int j, int m, int n, string psf)
{
    if (i > m || j > n)
    {
        return;
    }
    if (i == m && j == n)
    {
        cout << psf << endl;
        return;
    }

    for (int jump = 1; jump <= 2; jump++)
    {
        if (i + jump <= m)
        {
            printMagePathWithJump(i + jump, j, m, n, psf + to_string(jump) + 'v');
        }
    }

    for (int jump = 1; jump <= 2; jump++)
    {
        if (j + jump <= n)
        {
            printMagePathWithJump(i, j + jump, m, n, psf + to_string(jump) + 'h');
        }
    }
}

int main()
{
    int i = 1;
    int j = 1;
    int m, n;

    cout << "Enter the position of the desired location in the mage grid: ";
    cin >> m >> n;

    printMagePathWithJump(i, j, m, n, "");
    return 0;
}
