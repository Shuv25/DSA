#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "No of problems:";
    cin >> n;

    int minutes;
    cout << "Enter the minute will take to reach venue:";
    cin >> minutes;

    int problemsolved = 0;
    int totaltime = 0;

    for (int i = 1; i <= n; i++)
    {
        totaltime += i * 5;
        if (totaltime + minutes <= 240)
        {
            problemsolved++;
        }
        else
        {
            break;
        }
    }

    cout << problemsolved << endl;
}