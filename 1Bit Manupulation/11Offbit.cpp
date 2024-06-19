#include <iostream>

using namespace std;

int main()
{
    int n = 10;
    cout << (n & ~(1 << 1)) << endl; // here i am unseting the set bit in 1st pos of 10 in binary
}