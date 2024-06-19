#include <iostream>

using namespace std;

int ithbit(int n, int i)
{
    return (n >> i) & 1;
}

int main()
{
    int n;
    cout << "Enter the number:";
    cin >> n;

    int i;
    cout << "Enter the bit no:";
    cin >> i;

    cout << "The " << i << " th bit in " << n << " is " << ithbit(n, i);
}