#include <iostream>

using namespace std;

int partition(int s, int e, int *arr)
{
    int front = arr[s];
    int cnt = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= front)
        {
            cnt++;
        }
    }

    int pindex = s + cnt;

    int temp = arr[s];
    arr[s] = arr[pindex];
    arr[pindex] = temp;

    int i = s;
    int j = e;

    while (i < pindex && j > pindex)
    {
        while (arr[i] < front)
        {
            i++;
        }
        while (arr[j] > front)
        {
            j--;
        }
        if (i < pindex && j > pindex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
}

void quickSort(int s, int e, int *arr)
{
    if (s >= e)
    {
        return;
    }
    int p = partition(s, e, arr);

    quickSort(s, p - 1, arr);
    quickSort(p + 1, e, arr);
}

int main()
{
    int n;
    cout << "Size?";
    cin >> n;

    int *arr = new int[n];

    cout << "Elements:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    quickSort(0, n - 1, arr);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}