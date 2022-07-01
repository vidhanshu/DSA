#include "../../binT/binaryTree.h"

void levelOrder_traversal(Node<int> *root)
{
    queue<Node<int> *> q;

    if (!root)
    {
        return;
    }

    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node<int> *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            cout << "\n";
            if (q.empty())
            {
                break;
            }
            else
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
        }

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