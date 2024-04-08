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

int searchIndex(int inorder[], int start, int end, int val)
{
    for (int i = start; i <= end; i++)
    {
        if (inorder[i] == val)
        {
            return i;
        }
    }

    return -1;
}

Node *buildTree(int postorder[], int inorder[], int postorderSize, int start, int end)
{
    static int idx = postorderSize - 1;

    if (start > end)
    {
        return NULL;
    }

    int val = postorder[idx];
    idx--;
    Node *treeRoot = new Node(val);

    if (start == end)
    {
        return treeRoot;
    }

    int pos = searchIndex(inorder, start, end, val);
    treeRoot->right = buildTree(postorder, inorder, postorderSize, pos + 1, end);
    treeRoot->left = buildTree(postorder, inorder, postorderSize, start, pos - 1);

    return treeRoot;
};

void printInorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    printInorder(root->left);
    cout << root->data << " ";
    printInorder(root->right);
};

int main()
{

    int postorder[] = {4, 2, 5, 3, 1};
    int inorder[] = {4, 2, 1, 5, 3};

    Node *root = buildTree(postorder, inorder, 5, 0, 4);

    printInorder(root); // 4 2 1 5 3

    return 0;
}