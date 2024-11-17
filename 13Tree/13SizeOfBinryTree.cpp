#include <iostream>

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

int getSize(tree *root)
{
    if (root == nullptr)
    {
        return 0;
    }
    return (getSize(root->left) + getSize(root->right)) + 1;
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

    cout << getSize(root) << endl;
}