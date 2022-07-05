#include <bits/stdc++.h>
#include "node.h"
using namespace std;

template <class T>
class BinaryTree
{
public:
    Node<T> *root;
    Node<T> *temp;

    void buildTree()
    {
        root = createTreeRecursively(root);
    }

    Node<T> *createTreeRecursively(Node<T> *root)
    {
        T d;
        cout << "Enter data: ";
        cin >> d;
        if (d == -1)
        {
            return NULL;
        }
        root = new Node<T>(d);

        cout << "\nEnter the left data of the " << d << ": \n";
        root->left = createTreeRecursively(root->left);

        cout << "\nEnter the right data of the " << d << ": \n";
        root->right = createTreeRecursively(root->right);

        return root;
    }
    void inorder_traversal(Node<T> *root)
    {
        if (root)
        {
            inorder_traversal(root->left);
            cout << root->data << " ";
            inorder_traversal(root->right);
        }
    }
    void preorder_traversal(Node<T> *root)
    {
        if (root)
        {
            cout << root->data << " ";
            preorder_traversal(root->left);
            preorder_traversal(root->right);
        }
    }
    void postorder_traversal(Node<T> *root)
    {
        if (root)
        {
            postorder_traversal(root->left);
            postorder_traversal(root->right);
            cout << root->data << " ";
        }
    }
    int heightOfTree(Node<int> *root)
    {
        if (!root)
        {
            return 0;
        }
        return max(1 + heightOfTree(root->left), 1 + heightOfTree(root->right));
    }
    void levelOrder(Node<int> *root)
    {
        if (!root)
        {
            return;
        }
        queue<Node<T> *> q;

        q.push(root);

        while (!q.empty())
        {
            Node<T> *temp = q.front();
            cout << q.front()->data << " ";
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
    void levelOrderWithSeperator(Node<T> *root)
    {
        if (!root)
        {
            return;
        }

        queue<Node<int> *> q;

        q.push(root);
        q.push(NULL);

        while (!q.empty())
        {
            Node<T> *temp = q.front();
            q.pop();
            if (temp == NULL)
            {
                cout << "\n";

                if (!q.empty())
                {
                    q.push(NULL);
                    continue;
                }
                else
                {
                    break;
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
};
