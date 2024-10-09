#include <iostream>
#include <vector>

using namespace std;

vector<int> subArray(int n, int *arr, int sum)
{
    vector<int> res;
    int i = 0, j = 0, current_sum = 0;

    while (j < n)
    {
        current_sum += arr[j];

        while (current_sum > sum && i <= j)
        {
            current_sum -= arr[i];
            i++;
        }

        if (current_sum == sum)
        {
            for (int k = i; k <= j; k++)
                res.push_back(arr[k]);
            return res;
        }

        j++;
    }

    return res;
}

int main()
{
    int n;
    cout << "Size:";
    cin >> n;

    int *arr = new int[n];
    cout << "Elements:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum;
    cout << "Enter the sum:";
    cin >> sum;

    vector<int> narr = subArray(n, arr, sum);

    for (int i = 0; i < narr.size(); i++)
    {
        cout << narr[i] << " ";
    }
    delete[] arr;
}
