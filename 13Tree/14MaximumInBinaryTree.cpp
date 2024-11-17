#include <bits\stdc++.h>

using namespace std;

struct tree
{
    int data;
    tree *left;
    tree *right;
    tree(int d)
    {
        data = d;
        left = nullptr;
        right = nullptr;
    }
};

int getMax(tree *root)
{
    if (root == nullptr)
    {
        return INT_MIN;
    }
    return max(root->data, max(getMax(root->left), getMax(root->right)));
}

int main()
{
    tree *root = new tree(10);
    root->left = new tree(20);
    root->left->left = new tree(40);
    root->left->right = new tree(50);

    root->right = new tree(30);
    root->right->right = new tree(70);
    root->right->right->right = new tree(80);

    cout << getMax(root) << endl;
}