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

Node *inorderSucc(Node *root)
{
    Node *curr = root;
    while (curr && curr->left != NULL)
    {
        curr = curr->left;
    }

    return curr;
};

// Delete In BST  ------->

Node *deleteInBST(Node *root, int key)
{
    if (root == NULL)
    {
        return root;
    }

    if (key < root->data)
    {
        root->left = deleteInBST(root->left, key);
    }
    else if (key > root->data)
    {
        root->right = deleteInBST(root->right, key);
    }
    else
    {
        // Case 1: Node with only one child or no child
        if (root->left == NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }

        // Case 2: Node with two children
        Node *temp = inorderSucc(root->right);
        root->data = temp->data;
        root->right = deleteInBST(root->right, temp->data);
    }

    return root;
}

void inOrderOfTree(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    inOrderOfTree(root->left);
    cout << root->data << " ";
    inOrderOfTree(root->right);
}

int main()
{

    Node *root = new Node(4);
    root->left = new Node(2);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right = new Node(5);
    root->right->right = new Node(6);

    /*
                     4
                    / \
                   2   5
                  / \   \
                 1   3   6
    */
    inOrderOfTree(root); // 1 2 3 4 5 6
    cout << endl;
    root = deleteInBST(root, 2);
    inOrderOfTree(root); // 1 3 4 5 6
    cout << endl;

    return 0;
}