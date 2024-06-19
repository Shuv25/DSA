#include <iostream>

using namespace std;

struct node
{
    int key;
    node *left;
    node *right;
    node(int k)
    {
        key = k;
        left = right = nullptr;
    }
};

void inorder(node *root)
{
    if (root)
    {
        inorder(root->left);
        cout << root->key << endl;
        inorder(root->right);
    }
}

bool search(node *root, int ele)
{
    if (root == nullptr)
    {
        return false;
    }
    if (root->key == ele)
    {
        return true;
    }
    else if (ele > root->key)
    {
        return search(root->right, ele);
    }
    else
    {
        return search(root->left, ele);
    }
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

    int ele;
    cin >> ele;

    cout << search(root, ele) << endl;
}