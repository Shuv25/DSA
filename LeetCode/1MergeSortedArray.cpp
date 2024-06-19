// Given two sorted integer arrays `nums1` and `nums2`, with lengths `m` and `n` respectively, the task is to merge them into a single array, sorted in non - decreasing order.The resulting sorted array should be stored inside the `nums1` array.The array `nums1` has a length of `m + n`, where the first `m` elements represent the initial elements to be merged, and the last `n` elements are initialized to 0 and should be ignored.The goal is to merge the two arrays in - place and update `nums1` accordingly.For example, if `nums1 = [ 1, 2, 3, 0, 0, 0 ]` with `m = 3` and `nums2 = [ 2, 5, 6 ]` with `n = 3`, the expected output after merging should be `nums1 = [ 1, 2, 2, 3, 5, 6 ]`.

#include <iostream>
#include <vector>
using namespace std;

void mergeArray(vector<int> &arr1, vector<int> &arr2, int m, int n)
{
    arr1.resize(m + n);

    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;

    while (i >= 0 && j >= 0)
    {
        if (arr1[i] > arr2[j])
        {
            arr1[k--] = arr1[i--];
        }
        else
        {
            arr1[k--] = arr2[j--];
        }
    }

    while (j >= 0)
    {
        arr1[k--] = arr2[j--];
    }
}

int main()
{
    vector<int> arr1 = {1, 2, 3, 0, 0, 0};
    vector<int> arr2 = {2, 5, 6};

    int m = 3;
    int n = arr2.size();

    for (int i = 0; i < m; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;

    mergeArray(arr1, arr2, m, n);

    for (int i = 0; i < m + n; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;

    return 0;
}
