#include "../../binT/binaryTree.h"
BinaryTree<int> bt;

int diameter(Node<int> *root)
{
    if (!root)
    {
        return 0;
    }
    int dia1 = diameter(root->left);
    int dia2 = diameter(root->right);
    int dia3 = bt.heightOfTree(root->left) + bt.heightOfTree(root->right) + 1;
    return max(dia3, max(dia1, dia2));
}
int main()
{
    /**
     * @brief longes diameter is the longest distance between any two nodes of the tree
     *
     *
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
     * @result 7
     *
     */
    bt.buildTree();
    cout << "\ndiameter->";
    cout << diameter(bt.root);
}