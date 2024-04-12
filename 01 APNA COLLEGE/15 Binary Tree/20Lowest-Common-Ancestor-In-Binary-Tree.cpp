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

bool getPath(Node *root, int key, vector<int> &path)
{
    if (root == NULL)
    {
        return false;
    }

    path.push_back(root->data);
    if (root->data == key)
    {
        return true;
    }

    if (getPath(root->left, key, path) || getPath(root->right, key, path))
    {
        return true;
    }

    path.pop_back();
    return false;
}

int LCA(Node *root, int n1, int n2)
{
    vector<int> path1, path2;

    if (!getPath(root, n1, path1) || !getPath(root, n2, path2))
    {
        return -1;
    }

    int pc;
    for (pc = 0; pc < path1.size() && path2.size(); pc++)
    {
        if (path1[pc] != path2[pc])
        {
            break;
        }
    }

    return path1[pc - 1];
};

// --------- 2nd Way --------------
// Single Tree Traversal Method: ,  Time Complexity: - O(n);

Node *LCA2(Node *root, int n2, int n1)
{
    if (root == NULL)
    {
        return NULL;
    }

    if (root->data == n1 || root->data == n2)
    {
        return root;
    }

    Node *leftLCA = LCA2(root->left, n2, n1);
    Node *rightLCA = LCA2(root->right, n2, n1);

    if (leftLCA && rightLCA)
    {
        return root;
    }

    if (leftLCA != NULL)
    {
        return leftLCA;
    }

    return rightLCA;
}

int main()
{

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

    // int n1 = 7;
    // int n2 = 3;
    // int lca = LCA(root1, n1, n2);

    // if (lca == -1)
    // {
    //     cout << "LCA doesn't exist" << endl;
    // }
    // else
    // {
    //     cout << "LCA : " << lca << endl; // LCA : 9
    // }

    // --------- 2nd Way --------------
    // Printing:

    int n1 = 7;
    int n2 = 3;
    Node *lca = LCA2(root1, n1, n2);

    if (lca == NULL)
    {
        cout << "LCA doesn't exist" << endl;
    }
    else
    {
        cout << "LCA : " << lca->data << endl; // LCA : 9
    }

    return 0;
}
