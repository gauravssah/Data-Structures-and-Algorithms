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

int calcDiameter(Node *root, int *height)
{
    if (root == NULL)
    {
        *height = 0;
        return 0;
    }

    int leftHeight = 0;
    int rightHeight = 0;

    int leftDiameter = calcDiameter(root->left, &leftHeight);
    int rightDiameter = calcDiameter(root->right, &rightHeight);

    int currDiameter = leftHeight + rightHeight + 1;
    *height = max(leftHeight, rightHeight) + 1;

    return max(currDiameter, max(leftDiameter, rightDiameter));
};

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->left = new Node(6);
    root->right->right = new Node(7);

    // Diameter of Binary Tree - Optimized.

    int height = 0;
    cout << calcDiameter(root, &height) << endl; //  5

    return 0;
}