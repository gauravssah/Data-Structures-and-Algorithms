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

int sumAtKthLevel(Node *root, int K)
{
    if (root == NULL)
    {
        return -1;
    }

    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    int level = 0;
    int sum = 0;

    while (!q.empty())
    {
        Node *newNode = q.front();
        q.pop();

        if (newNode != NULL)
        {
            if (level == K)
            {
                sum += newNode->data;
            }
            if (newNode->left)
            {
                q.push(newNode->left);
            }
            if (newNode->right)
            {
                q.push(newNode->right);
            }
        }
        else if (!q.empty())
        {
            q.push(NULL);
            level++;
        }
    }

    return sum;
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

    // Sum At Kth Level:

    cout << sumAtKthLevel(root, 2);

    return 0;
}

/*
                1
            /       \
           2          3
        /     \     /    \
       4       5   6      7

*/