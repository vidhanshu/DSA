#include "../../binT/binaryTree.h"

using namespace std;

void postorder_traversal(Node<int> *root)
{
    if (root)
    {
        postorder_traversal(root->left);
        postorder_traversal(root->right);
        cout << root->data << " ";
    }
}
int main()
{
    BinaryTree<int> bt;
    bt.buildTree();
    cout << "postorder traversal of the given tree\n";
    postorder_traversal(bt.root);

    return 0;
}