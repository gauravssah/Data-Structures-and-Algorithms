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

void printLevelOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    queue<Node *> q;

    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *newNode = q.front();
        q.pop();
        if (newNode != NULL)
        {
            cout << newNode->data << " ";

            if (newNode->left != NULL)
            {
                q.push(newNode->left);
            }
            if (newNode->right != NULL)
            {
                q.push(newNode->right);
            }
        }
        else if (!q.empty())
        {
            q.push(NULL);
        }
    }
}

int main()
{

    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->left = new Node(6);
    root->right->right = new Node(7);

    // Level Order Traversal:

    printLevelOrder(root);

    return 0;
}