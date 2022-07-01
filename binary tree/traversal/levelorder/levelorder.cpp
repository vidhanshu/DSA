#include "../../binT/binaryTree.h"

void levelOrder_traversal(Node<int> *root)
{
    queue<Node<int> *> q;

    if (!root)
    {
        return;
    }

    q.push(root);

    while (!q.empty())
    {
        Node<int> *temp = q.front();
        cout << temp->data<<" ";
        q.pop();
        if (temp->left)
        {
            q.push(temp->left);
        }
        if (temp->right)
        {
            q.push(temp->right);
        }
    }
}

int main()
{
    BinaryTree<int> bt;
    bt.buildTree();
    cout << "level order traversal of the given tree is: \n";
    levelOrder_traversal(bt.root);
}