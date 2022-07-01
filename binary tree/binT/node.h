#include <bits/stdc++.h>
using namespace std;

/**
 * @brief Node class
 *
 */
template <typename T>
class Node
{
public:
    T data;
    Node *left;
    Node *right;
    Node()
    {
        this->data = 0;
        left = right = NULL;
    }
    Node(T d)
    {
        this->data = d;
        left = right = NULL;
    }
    Node(T d, Node *l, Node *r)
    {
        this->data = d;
        this->left = l;
        this->right = r;
    }
};
