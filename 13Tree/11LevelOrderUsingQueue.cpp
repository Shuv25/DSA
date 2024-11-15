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

void levelOrderTrav(tree *root)
{
    if (root == nullptr)
    {
        return;
    }
    queue<tree *> q;
    q.push(root);

    while (q.empty() == false)
    {
        tree *curr = q.front();
        q.pop();
        cout << curr->data << " ";
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