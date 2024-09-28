#include <iostream>

using namespace std;

struct Node
{
    int key;
    Node *left;
    Node *right;
    Node(int k)
    {
        key = k;
        left = nullptr;
        right = nullptr;
    }
};

void preorder(Node *root)
{
    if (root != nullptr)
    {
        cout << root->key << " ";
        preorder(root->left);
        preorder(root->right);
    }
}
int main()
{
    Node *root = new Node(40);
    root->left = new Node(30);
    root->right = new Node(50);
    root->left->left = new Node(25);
    root->left->right = new Node(27);
    root->right->left = new Node(48);
    root->right->right = new Node(55);

    preorder(root);

    cout << endl;
}