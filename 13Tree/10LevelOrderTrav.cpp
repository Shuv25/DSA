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

int getheight(tree *root)
{
    if (root == nullptr)
    {
        return 0;
    }

    return max(getheight(root->left), getheight(root->right)) + 1;
}

void printele(tree *root, int k)
{
    if (root != nullptr)
    {
        printele(root->left, k - 1);
        if (k == 0)
        {
            cout << root->data << " ";
        }
        printele(root->right, k - 1);
    }
}

void levelOrderTrav(tree *root)
{
    int h = getheight(root);

    for (int i = 0; i < h; i++)
    {
        printele(root, i);
    }
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

    levelOrderTrav(root);
}