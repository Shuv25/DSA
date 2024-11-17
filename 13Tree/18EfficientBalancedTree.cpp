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

int isBalanced(tree *root)
{
    if (root == nullptr)
    {
        return 0;
    }

    int lt = isBalanced(root->left);
    if (lt == -1)
    {
        return -1;
    }
    int rt = isBalanced(root->right);
    if (rt == -1)
    {
        return -1;
    }

    if (abs(lt - rt) > 1)
    {
        return -1;
    }
    else
    {
        return max(lt, rt) + 1;
    }
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

    cout << isBalanced(root) << endl;
}