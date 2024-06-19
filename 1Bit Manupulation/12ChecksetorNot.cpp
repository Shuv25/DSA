#include <iostream>

using namespace std;

int main()
{
    int n = 33;
    int res = n & (1 << 5); // here i am checking if the 4th pos bit in 33 is set or not
    if (res > 0)
    {
        cout << "It's a set bit" << endl;
    }
    else
    {
        cout << "It's a unset bit" << endl;
    }
}