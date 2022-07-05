#include "../../binT/binaryTree.h"

int heightOfTree(Node<int> *root)
{
    if (!root)
    {
        return 0;
    }
    return max(1 + heightOfTree(root->left), 1 + heightOfTree(root->right));
}
int main()
{
    /**
     * 4 2 3 -1 5 -1 -1 10 -1 -1 23 34  45 34 -1 -1 -1 -1 -1
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
     * @result 4
     *
     */
    BinaryTree<int> bt;
    bt.buildTree();
    cout << "\nheight->";
    cout << heightOfTree(bt.root);
}