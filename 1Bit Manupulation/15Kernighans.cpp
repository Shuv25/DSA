#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    while (n != 0)
    {
        int res = n & -n; //-n=~n+1, 2's compliment
        n -= res;
        count++;
    }

    cout << count << endl;
}