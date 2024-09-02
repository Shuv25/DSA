#include <iostream>
#include <algorithm>

using namespace std;

struct Point
{
    int x, y;
};

bool MyComp(Point p1, Point p2)
{
    return (p1.x > p2.x);
}

int main()
{
    int n = 4;
    Point arr[n] = {{1, 4}, {7, 6}, {3, 4}, {9, 5}};
    sort(arr, arr + n, MyComp);
    for (auto i : arr)
    {
        cout << i.x << " " << i.y << " ";
    }
    cout << endl;
    return 0;
}