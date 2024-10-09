#include <iostream>
#include <unordered_map>

using namespace std;

int maxfruit(int n, int *arr, int k)
{
    int i = 0;
    int j = 0;
    int maxFruits = 0;
    unordered_map<int, int> basket;

    while (j < n)
    {
        basket[arr[j]]++;
        if (basket.size() > 2)
        {
            basket[arr[i]]--;
            if (basket[arr[i]] == 0)
            {
                basket.erase(arr[i]);
            }
            i++;
        }
        maxFruits = max(maxFruits, j - i + 1);
        j++;
    }
    return maxFruits;
}
int main()
{
    int n;
    cout << "Size?";
    cin >> n;

    int *arr = new int[n];
    cout << "Enter the elements of the array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k;
    cout << "Entre the no of unique fruit u want :";
    cin >> k;

    cout << maxfruit(n, arr, k) << endl;

    delete[] arr;
}