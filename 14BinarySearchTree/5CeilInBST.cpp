#include <bits/stdc++.h>

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

void inorder(node *root)
{
    if (root)
    {
        inorder(root->left);
        cout << root->key << " ";
        inorder(root->right);
    }
}

node *ceil(node *root, int x)
{
    node *res = NULL;
    while (root != NULL)
    {
        if (root->key == x)
            return root;
        else if (root->key < x)
            root = root->right;
        else
        {
            res = root;
            root = root->left;
        }
    }
    return res;
}

int main()
{
    node *root = new node(30);
    root->left = new node(20);
    root->left->left = new node(5);
    root->left->right = new node(15);
    root->right = new node(40);
    root->right->left = new node(35);
    root->right->right = new node(55);

    inorder(root);
    cout << endl;

    int elem;
    cout << "Enter the element:";
    cin >> elem;
    cout << (ceil(root, elem)->key) << endl;
}