#include <iostream>

using namespace std;

int main()
{
    int n = 10;
    cout << (n | (1 << 2)) << endl; // here i am set the unset bit at 2nd pos od 10 in binary
}