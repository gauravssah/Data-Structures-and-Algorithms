#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int lh = height(root->left);
    int rh = height(root->right);

    return max(lh, rh) + 1;
};

bool isBalanced(Node *root)
{
    if (root == NULL)
    {
        return true;
    }

    if (isBalanced(root->left) == false)
    {
        return false;
    }
    if (isBalanced(root->right) == false)
    {
        return false;
    }

    int lh = height(root->left);
    int rh = height(root->right);

    if (abs(lh - rh) <= 1)
    {
        return true;
    }
    else
    {
        return false;
    }
};

int main()
{

    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    // Another Tree

    Node *root2 = new Node(1);
    root2->left = new Node(2);
    root2->left->left = new Node(3);

    // Height Balanced Tree

    if (isBalanced(root))
    {
        cout << "This is a Balanced Tree" << endl;
    }
    else
    {
        cout << "This is Not Balanced Tree" << endl;
    }

    // root2 Tree

    if (isBalanced(root2))
    {
        cout << "This is a Balanced Tree" << endl;
    }
    else
    {
        cout << "This is Not Balanced Tree" << endl;
    }

    return 0;
}