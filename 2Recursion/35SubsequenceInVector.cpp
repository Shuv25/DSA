#include <iostream>
#include <vector>

using namespace std;

void printVector(const vector<int> &vec)
{
    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;
}

void subsequences(int arr[], int n, vector<int> &lol, int i = 0)
{
    if (i == n)
    {
        printVector(lol);
        return;
    }

    // Include the current element
    lol.push_back(arr[i]);
    subsequences(arr, n, lol, i + 1);

    // Exclude the current element
    lol.pop_back();
    subsequences(arr, n, lol, i + 1);
}

int main()
{
    int arr[3] = {1, 2, 3};
    vector<int> lol;
    subsequences(arr, 3, lol);
    return 0;
}
