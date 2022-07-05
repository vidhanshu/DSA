#include <bits/stdc++.h>
#include "../../binT/binaryTree.h"

/**
 * @brief count the total number of nodes
 * 
 * @param root 
 * @return int 
 */
int countNode(Node<int> *root)
{
    if (!root)
    {
        return 0;
    }
    return 1 + countNode(root->left) + countNode(root->right);
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
     * @result 8
     *
     */

    BinaryTree<int> bt;
    bt.buildTree();
    cout << "\nans->";
    cout << countNode(bt.root);
}
