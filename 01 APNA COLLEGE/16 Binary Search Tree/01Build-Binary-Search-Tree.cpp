#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node *insertBST(Node *root, int val)
{
    if (root == NULL)
    {
        return new Node(val);
    }

    if (val < root->data)
    {
        root->left = insertBST(root->left, val);
    }
    else
    {
        // Val > root->data
        root->right = insertBST(root->right, val);
    }

    return root;
};

void inorderTrav(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    inorderTrav(root->left);
    cout << root->data << " ";
    inorderTrav(root->right);
};

int main()
{
    Node *root = NULL;
    root = insertBST(root, 5);
    insertBST(root, 1);
    insertBST(root, 3);
    insertBST(root, 4);
    insertBST(root, 2);
    insertBST(root, 7);

    // Print Inorder.
    inorderTrav(root); // 1 2 3 4 5 7   // -> Sorted Order
    cout << endl;

    return 0;
}
