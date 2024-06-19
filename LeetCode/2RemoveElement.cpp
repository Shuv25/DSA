// Given an integer array `nums` and an integer `val`, the task is to remove all occurrences of `val` in - place.The order of the elements in `nums` may be changed, and the goal is to return the number of elements in `nums` that are not equal to `val`.To achieve this, the array `nums` is modified such that the first k elements contain the elements not equal to `val`, and the remaining elements of `nums` are not significant.The function returns the value k, representing the count of elements in `nums` that are not equal to `val`.For example, if `nums = [ 3, 2, 2, 3 ]` and `val = 3`, the expected output is `2`, and `nums` is modified to be `[2, 2, _, _]`.

#include <iostream>
#include <vector>

using namespace std;

void removeElement(int n, int m, vector<int> &arr)
{
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != m)
        {
            arr[k++] = arr[i];
        }
    }
    arr.resize(k);
}

int main()
{
    int n;
    cout << "Entre the size of the vector:";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the elements of the vector:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int m;
    cout << "Enter the element you want to remove:";
    cin >> m;

    removeElement(n, m, arr);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}