#include "../../binT/binaryTree.h"

using namespace std;

void inorder_traversal(Node<int> *root)
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
    BinaryTree<int> bt;
    bt.buildTree();
    cout << "inorder traversal of the given tree\n";
    inorder_traversal(bt.root);

    return 0;
}