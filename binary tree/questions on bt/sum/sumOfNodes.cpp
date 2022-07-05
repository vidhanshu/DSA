#include "../../binT/binaryTree.h"

int sumOfNodes(Node<int> *root)
{
    if (!root)
    {
        return 0;
    }
    return root->data + sumOfNodes(root->left) + sumOfNodes(root->right);
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
     * @result 126
     *
     */
    BinaryTree<int> bt;
    bt.buildTree();
    cout << "\nsum->";
    cout<<sumOfNodes(bt.root);
}