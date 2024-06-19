#include <iostream>

using namespace std;

int unsetBit(int n, int i)
{
    return n & ~(1 << i);
}

int main()
{
    int n;
    cout << "Enter the number:";
    cin >> n;

    int i;
    cout << "Enter the bit you want to unset:";
    cin >> i;

    cout << "After unseting the " << i << " th bit in " << n << " is " << unsetBit(n, i);
}