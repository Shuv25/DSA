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

int getHeight(tree *root)
{
    if (root == nullptr)
    {
        return 0;
    }

    return (max(getHeight(root->left), getHeight(root->right))) + 1;
}
bool isBalance(tree *root)
{
    if (root == nullptr)
    {
        return true;
    }
    if (root->left == nullptr && root->right == nullptr)
    {
        return true;
    }

    int l = getHeight(root->left);
    int r = getHeight(root->right);

    int diff = 0;

    if (l > r)
    {
        diff = l - r;
    }
    else if (r > l)
    {
        diff = r - l;
    }
    else
    {
        diff = 0;
    }

    return (diff == 0 || diff == 1 && isBalance(root->left) && isBalance(root->right));
}
int main()
{
    tree *root = new tree(18);
    root->left = new tree(4);
    root->left->left = new tree(70);
    root->left->right = new tree(80);

    root->right = new tree(75);
    root->right->right = new tree(90);
    root->right->right->left = new tree(95);

    cout << isBalance(root) << endl;
}