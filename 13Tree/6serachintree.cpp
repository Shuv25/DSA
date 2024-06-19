#include <iostream>

using namespace std;

struct node
{
    int key;
    node *left;
    node *right;
    node(int k)
    {
        key = k;
        left = nullptr;
        right = nullptr;
    }
};
bool search(node *root, int ele)
{
    if (root == nullptr)
    {
        return false;
    }
    if (root->key == ele)
    {
        return true;
    }
    return search(root->left, ele) || search(root->right, ele);
}
int main()
{
    node *root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->right->right = new node(60);
    root->left->left = new node(40);
    root->left->right = new node(50);
    root->left->right->left = new node(70);
    root->left->right->right = new node(80);

    int ele;
    cout << "Enter the element you want to search:";
    cin >> ele;

    cout << search(root, ele) << endl;
}