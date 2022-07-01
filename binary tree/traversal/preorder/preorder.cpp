#include "../../binT/binaryTree.h"

using namespace std;

void preorder_traversal(Node<int> *root)
{
    if (root)
    {
        cout << root->data << " ";
        preorder_traversal(root->left);
        preorder_traversal(root->right);
    }
}
int main()
{
    BinaryTree<int> bt;
    bt.buildTree();
    cout << "preorder traversal of the given tree\n";
    preorder_traversal(bt.root);

    return 0;
}