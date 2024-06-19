// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main()
{
    int x = 36;
    cout << (x | (1 << 1)) << endl; // on the first bit

    int y = 79;
    cout << (y & ~(1 << 3)) << endl; // off the third bit

    cout << (y ^ (1 << 4)) << endl; // toggle the 4th bit

    if ((y & (1 << 4)) > 0) // checking 4th bit is set or not
    {
        cout << "Set Bit" << endl;
    }
    else
    {
        cout << "Not Set Bit" << endl;
    }
}