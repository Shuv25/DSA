#include <iostream>

using namespace std;

int setBit(int n, int i)
{
    return n | (1 << i);
}

int main()
{
    int n;
    cout << "Enter the number:";
    cin >> n;

    int i;
    cout << "Enter the bit you want to set:";
    cin >> i;

    cout << "After seting the " << i << " th bit in " << n << " is " << setBit(n, i);
}