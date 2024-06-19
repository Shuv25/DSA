#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    int x = 0;
    for (int i = 0; i < n; ++i)
    {
        string statement;
        getline(cin, statement);

        if (statement[0] == '+' || statement[2] == '+')
        {
            ++x;
        }
        else
        {
            --x;
        }
    }

    cout << x << endl;
    return 0;
}
