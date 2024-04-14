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

// Check for BST
bool isBST(Node *root, Node *min = NULL, Node *max = NULL)
{

    if (root == NULL)
    {
        return true;
    }

    if (min != NULL && root->data <= min->data)
    {
        return false;
    }

    if (max != NULL && root->data >= max->data)
    {
        return false;
    }

    bool leftValid = isBST(root->left, min, root);
    bool rightValid = isBST(root->right, root, max);

    return leftValid and rightValid;
};

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    /*      (Tree- 1)

               1
              / \
             2   3

    */

    if (isBST(root, NULL, NULL))
    {
        cout << "Valid BST" << endl;
    }
    else
    {
        cout << "InValid BST" << endl;
    }

    // InValid BST

    Node *root1 = new Node(5);
    root->left = new Node(2);
    root->right = new Node(8);

    /*       (Tree- 2)
                5
               / \
              2   8
    */

    if (isBST(root1, NULL, NULL))
    {
        cout << "Valid BST" << endl;
    }
    else
    {
        cout << "InValid BST" << endl;
    }

    //   Valid BST
    return 0;
}