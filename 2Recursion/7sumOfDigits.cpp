#include <iostream>

using namespace std;

int sumOfDigit(int n)
{
    if (n <= 0)
    {
        return 0;
    }
    else
    {
        return sumOfDigit(n / 10) + n % 10;
    }
}

int main()
{
    int n;
    cout << "Enter digit:";
    cin >> n;

    cout << sumOfDigit(n) << endl;
    ;
}