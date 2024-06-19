#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int res = n & 1;
    if (res == 0)
    {
        cout << "Even" << endl;
    }
    else
    {
        cout << "Odd" << endl;
    }
}