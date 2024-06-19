#include <iostream>

using namespace std;

int noofdigit(int res)
{
    int count = 0;
    while (res != 0)
    {
        res = res & (res - 1);
        count++;
    }
    return count;
}

int nooffliped(int x, int y)
{
    int res = x ^ y;
    cout << res << endl;
    return noofdigit(res);
}

int main()
{
    int x, y;
    cout << "Enter the first no:";
    cin >> x;
    cout << "Enter the second no:";
    cin >> y;

    cout << nooffliped(x, y);
}