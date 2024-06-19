#include <iostream>

using namespace std;

struct tree
{
    int key;
    tree *left;
    tree *right;
    tree(int k)
    {
        key = k;
        left = NULL;
        right = NULL;
    }
};

int main()
{
    tree *root = new tree(30);
    root->left = new tree(40);
    root->right = new tree(50);
    root->left->left = new tree(60);
    root->left->right = new tree(70);
}