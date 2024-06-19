#include <iostream>

using namespace std;

int evenOdd(int n)
{
    if ((n & 1) != 0)
    {
        cout << "Odd" << endl;
    }
    else
    {
        cout << "Even" << endl;
    }
}

int main()
{
    int n;
    cout << "Enter a number:";
    cin >> n;

    cout << "The no " << n << " is ";
    evenOdd(n);
}