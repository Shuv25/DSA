#include <iostream>

using namespace std;

int squareRoot(int k)
{
    int low = 0;
    int high = k;
    int ans = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int sqr = mid * mid;
        if (sqr > k)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
            ans = mid;
        }
    }
    return ans;
}

int main()
{

    int k;
    cout << "Enter the element you want to find the square root:";
    cin >> k;

    int ans = squareRoot(k);

    cout << "The square root is " << ans << endl;
}