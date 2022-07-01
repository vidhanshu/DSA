#include <bits/stdc++.h>
using namespace std;

/**
 * @brief Node class
 *
 */
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int d)
    {
        this->data = d;
        left = right = NULL;
    }
    Node(int d, Node *l, Node *r)
    {
        this->data = d;
        this->left = l;
        this->right = r;
    }
};

/**
 * @brief builds the tree
 *
 * @param root
 * @return Node*
 */
Node *buildTree(Node *root)
{
    int d;
    cout << "Enter the data : ";
    cin >> d;
    if (d == -1)
    {
        return NULL;
    }
    root = new Node(d);

    // building left subtree
    cout << "Enter data of left of " << d << ": \n";
    root->left = buildTree(root->left);

    // building right subtree
    cout << "Enter data of right of " << d << ": \n";
    root->right = buildTree(root->right);

    return root;
}

/**
 * @brief inorder traversal of the binary tree
 *
 * @param root
 */
void inorder_traversal(Node *root)
{
    if (root)
    {
        inorder_traversal(root->left);
        cout << root->data << " ";
        inorder_traversal(root->right);
    }
}

int main()
{
    /**
     * 4 2 3 -1 5 -1 -1 10 -1 -1 23 34  45 -1 -1 -1 -1
     *
     *
     * @brief tree
     *          4
     *       /    \
     *      2      23
     *     / \      /
     *    3   10  34
     *     \      /
     *      5   45
     *
     * @result 3 5 2 10 4 45 34 23
     *
     */
    Node *root = NULL;
    root = buildTree(root);
    cout << "inorder traversal of the given tree: \n\n";
    inorder_traversal(root);
    return 0;
}