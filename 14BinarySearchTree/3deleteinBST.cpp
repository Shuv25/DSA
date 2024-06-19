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

node *getSuccessor(node *curr)
{
    curr = curr->right;
    while (curr != nullptr && curr->left != nullptr)
        curr = curr->left;
    return curr;
}

node *delet(node *root, int ele)
{
    if (root == nullptr)
    {
        return root;
    }
    if (ele > root->key)
    {
        root->right = delet(root->right, ele);
    }
    else if (ele < root->key)
    {
        root->left = delet(root->left, ele);
    }
    else
    {
        if (root->left == nullptr)
        {
            node *temp = root->right;
            delete root;
            return temp;
        }
        if (root->right == nullptr)
        {
            node *temp = root->left;
            delete root;
            return temp;
        }
        else
        {
            node *succ = getSuccessor(root);
            root->key = succ->key;
            root->right = delet(root->right, succ->key);
        }
    }
    return root;
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

    int n;
    cout << "\nEnter the number of values to be deleted: ";
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int ele;
        cout << "Enter value " << i + 1 << ": ";
        cin >> ele;
        root = delet(root, ele);
    }

    cout << "Inorder after deletion: ";
    inorder(root);
    cout << endl;

    return 0;
}
