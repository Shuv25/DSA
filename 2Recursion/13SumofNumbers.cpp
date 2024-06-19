#include <iostream>

using namespace std;

int sumOfdigit(int n)
{
    if (n == 1)
    {
        return 1;
    }
    int nm1 = sumOfdigit(n - 1);
    int ans = n + nm1;
    return ans;
}

int main()
{
    int n = 5;
    cout << sumOfdigit(n) << endl;
}