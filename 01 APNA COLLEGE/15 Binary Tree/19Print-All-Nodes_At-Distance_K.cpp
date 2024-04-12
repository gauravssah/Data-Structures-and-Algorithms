#include <iostream>
#include <queue>
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

// Case: 1
void printSubtreeNodes(Node *root, int k)
{
    if (root == NULL || k < 0)
    {
        return;
    }
    if (k == 0)
    {
        cout << root->data << " ";
        return;
    }

    printSubtreeNodes(root->left, k - 1);
    printSubtreeNodes(root->right, k - 1);
};

// Case: 2
int printNodesAtK(Node *root, Node *traget, int k)
{
    if (root == NULL)
    {
        return -1;
    }
    if (root == traget)
    {
        printSubtreeNodes(root, k);
        return 0;
    }

    int dl = printNodesAtK(root->left, traget, k);
    if (dl != -1)
    {
        if (dl + 1 == k)
        {
            cout << root->data << " ";
        }
        else
        {
            printSubtreeNodes(root->right, k - dl - 2);
        }
        return 1 + dl;
    }

    int dr = printNodesAtK(root->right, traget, k);
    if (dr != -1)
    {
        if (dr + 1 == k)
        {
            cout << root->data << " ";
        }
        else
        {
            printSubtreeNodes(root->left, k - dr - 2);
        }
        return 1 + dr;
    }

    return -1;
};

int main()
{

    /*
             1
           /   \
          2     3
         / \   / \
        4   5 6   7
    */

    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    /*
               4
              / \
             9   5
           /  \   \
          1    3   6
         /  \   \   \
        7    8   0   2
    */

    Node *root1 = new Node(4);
    root1->left = new Node(9);
    root1->right = new Node(5);
    root1->left->left = new Node(1);
    root1->left->left->left = new Node(7);
    root1->left->left->right = new Node(8);
    root1->left->right = new Node(3);
    root1->left->right->right = new Node(0);
    root1->right->right = new Node(6);
    root1->right->right->right = new Node(2);

    // Printing:

    printNodesAtK(root1, root1->left, 2); // 7 8 0 5

    return 0;
}
