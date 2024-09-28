#include <iostream>

using namespace std;

void insert(bool *arr, int ele, int pos)
{
    arr[pos] = true;
    cout << "Successfully inserted " << ele << " at " << pos << " position." << endl;
}

void search(bool *arr, int ele)
{
    if (arr[ele] == true)
    {
        cout << ele << " is present" << endl;
    }
}

void del(bool *arr, int ele)
{
    if (arr[ele] = true)
    {
        arr[ele] = false;
    }
    cout << ele << " is deleted succesffuly" << endl;
}

int main()
{
    int n;
    cout << "Size?";
    cin >> n;

    bool *arr = new bool[n];

    int ele;
    cout << "Enter the elemet to insert:";
    cin >> ele;
    int pos;
    cout << "Enter the position to insert:";
    cin >> pos;
    insert(arr, ele, pos);
    int index;
    cout << "Enter the index to search:";
    cin >> index;
    search(arr, index);
    int delindex;
    cout << "Enter the index to delete:";
    cin >> delindex;
    del(arr, delindex);
}