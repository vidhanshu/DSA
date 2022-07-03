#include <bits/stdc++.h>
using namespace std;

template <typename T>
class node
{
public:
    T data;
    node *next;
    node(T val)
    {
        data = val;
        next = NULL;
    }
    node(T val, node *n)
    {
        data = val;
        next = n;
    }
};

template <typename T>
class List
{
public:
    node<T> *head;
    List()
    {
        this->head = NULL;
    }
    void buildList()
    {
        cout << "\nEnter the number of nodes to be added to the tree: ";
        int n;
        cin >> n;
        cout << "\nEnter data space separated: ";
        node<T> *temp = NULL;
        while (n--)
        {
            T data;
            cin >> data;
            node<T> *newNode = new node<T>(data);

            if (!temp)
            {
                this->head = temp = newNode;
            }
            else
            {
                temp->next = newNode;
                temp = temp->next;
            }
        }
    }
    void printList()
    {
        node<T> *temp = this->head;
        while (temp)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "\n";
    }
    void clear()
    {
        head = NULL;
    }
};