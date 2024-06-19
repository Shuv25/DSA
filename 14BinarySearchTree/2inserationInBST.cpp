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
        cout << root->key << " ";
        inorder(root->right);
    }
}

node *insert(node *root, int ele)
{
    if (root == nullptr)
    {
        return new node(ele);
    }
    if (ele > root->key)
    {
        root->right = insert(root->right, ele);
    }
    else if (ele < root->key)
    {
        root->left = insert(root->left, ele);
    }
    else
    {
        return root;
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

    int n;
    cout << "Enter the no of value to be insert:";
    cin >> n;
    while (n != 0)
    {
        int ele;
        cin >> ele;
        root = insert(root, ele);
        n--;
    }

    inorder(root);
}