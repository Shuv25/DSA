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

bool childSum(tree *root)
{
    if (root == nullptr)
    {
        return true;
    }

    if (root->left == nullptr && root->right == nullptr)
    {
        return true;
    }

    int sum = 0;
    if (root->left != nullptr)
    {
        sum += root->left->data;
    }
    if (root->right != nullptr)
    {
        sum += root->right->data;
    }

    return (root->data == sum && childSum(root->left) && childSum(root->right));
}

int main()
{
    tree *root = new tree(20);
    root->left = new tree(8);
    root->left->left = new tree(3);
    root->left->right = new tree(5);

    root->right = new tree(12);

    cout << childSum(root) << endl;
}