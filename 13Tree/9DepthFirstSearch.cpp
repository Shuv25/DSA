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

void preorder(tree *root)
{
    if (root != nullptr)
    {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(tree *root)
{
    if (root != nullptr)
    {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

void postorder(tree *root)
{
    if (root != nullptr)
    {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}

int main()
{
    tree *root = new tree(20);
    root->left = new tree(10);
    root->left->left = new tree(5);
    root->left->right = new tree(15);

    root->right = new tree(30);
    root->right->left = new tree(25);
    root->right->right = new tree(35);

    cout << "Preorder Traversal :";
    preorder(root);
    cout << endl;
    cout << "Inorder Traversal :";
    inorder(root);
    cout << endl;
    cout << "Postorder Traversal :";
    postorder(root);
}