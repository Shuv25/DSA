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

void preorder(node *root)
{
    if (root)
    {
        cout << root->key << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(node *root)
{
    if (root)
    {
        postorder(root->left);
        postorder(root->right);
        cout << root->key << " ";
    }
}

bool ispresent(node *root, int ele)
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
        return ispresent(root->right, ele);
    }
    else
    {
        return ispresent(root->left, ele);
    }
}

node *insert(node *root, int e)
{
    if (root == nullptr)
    {
        return new node(e);
    }
    if (e > root->key)
    {
        root->right = insert(root->right, e);
    }
    else if (e < root->key)
    {
        root->left = insert(root->left, e);
    }
    return root;
}

int height(node *root)
{
    if (root == nullptr)
    {
        return 0;
    }

    return max(height(root->left), height(root->right)) + 1;
}

void nodeatkdistance(node *root, int n)
{
    if (root == nullptr)
    {
        return;
    }

    if (n == 0)
    {
        cout << root->key << " ";
    }
    nodeatkdistance(root->left, n - 1);
    nodeatkdistance(root->right, n - 1);
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

    cout << "Inorder traversal: ";
    inorder(root);
    cout << endl;

    cout << "Preorder traversal: ";
    preorder(root);
    cout << endl;

    cout << "Postorder traversal: ";
    postorder(root);
    cout << endl;

    int s;
    cout << "Enter the element you want to search: ";
    cin >> s;

    if (ispresent(root, s))
    {
        cout << "Element is found" << endl;
    }
    else
    {
        cout << "Element is not found" << endl;
    }

    cout << "Height of the tree is: " << height(root) << endl;

    int m;
    cout << "Enter the node distance: ";
    cin >> m;

    cout << "Elements at distance " << m << ": ";
    nodeatkdistance(root, m);
    cout << endl;

    int el;
    cout << "Enter an element to isnert:";
    cin >> el;
    root = insert(root, el);
    inorder(root);
}
