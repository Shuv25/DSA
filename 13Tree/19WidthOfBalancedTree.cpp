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

int getWidth(tree *root)
{
    if (root == nullptr)
    {
        return 0;
    }
    queue<tree *> q;
    q.push(root);

    int maxwidth = 0;

    while (q.empty() == false)
    {
        int size = q.size();
        maxwidth = max(size, maxwidth);

        for (int i = 0; i < size; i++)
        {
            tree *curr = q.front();
            q.pop();

            if (curr->left != nullptr)
            {
                q.push(curr->left);
            }
            if (curr->right != nullptr)
            {
                q.push(curr->right);
            }
        }
    }

    return maxwidth;
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

    cout << getWidth(root) << endl;
}