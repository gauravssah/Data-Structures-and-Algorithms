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

int calcHeight(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int leftHeight = calcHeight(root->left);
    int rightHeight = calcHeight(root->right);

    return max(leftHeight, rightHeight) + 1;
};

int calcDiameter(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int leftHeight = calcHeight(root->left);
    int rightHeight = calcHeight(root->right);
    int currDiameter = leftHeight + rightHeight + 1;

    int leftDiameter = calcDiameter(root->left);
    int rightDiameter = calcDiameter(root->right);

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

    // Diameter of Binary Tree
    cout << calcDiameter(root) << endl; //  5

    return 0;
}