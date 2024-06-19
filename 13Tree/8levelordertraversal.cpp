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

void printnodesatkdistnace(node *root, int hi)
{
    if (root == nullptr)
    {
        return;
    }
    if (hi == 0)
    {
        cout << root->key << " ";
    }
    printnodesatkdistnace(root->left, hi - 1);
    printnodesatkdistnace(root->right, hi - 1);
}

int height(node *root)
{
    if (root == nullptr)
    {
        return 0;
    }
    return max(height(root->left), height(root->right)) + 1;
}

int main()
{
    node *root = new node(50);
    root->left = new node(45);
    root->right = new node(60);
    root->right->right = new node(80);
    root->left->left = new node(30);
    root->left->right = new node(40);
    root->left->right->left = new node(35);
    root->left->right->right = new node(38);

    int h = height(root);

    for (int i = 0; i < h; ++i)
    {
        printnodesatkdistnace(root, i);
        cout << endl;
    }
}