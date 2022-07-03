#include <bits/stdc++.h>
#include "../linkedT/list.h"

using namespace std;

/**
 * @brief insert at head
 *
 * @param head
 * @param data
 * @return node<int>*
 */
node<int> *insertAtHead(node<int> *head, int data)
{
    if (!head)
    {
        return new node<int>(data);
    }

    node<int> *newNode = new node<int>(data);
    newNode->next = head;
    head = newNode;
    return head;
}

/**
 * @brief insert at tail
 *
 * @param head
 * @param data
 * @return node<int>*
 */
node<int> *insertAtTail(node<int> *head, int data)
{
    if (!head)
    {
        return new node<int>(data);
    }

    node<int> *newNode = new node<int>(data);
    node<int> *temp = head;

    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;

    return head;
}

node<int> *insertAtPosition(node<int> *head, int data, int pos)
{
    if (pos == 0)
    {
        return insertAtHead(head, data);
    }
    node<int> *temp = head;
    while (--pos)
    {
        temp = temp->next;
    }
    node<int> *newNode = new node<int>(data);
    newNode->next = temp->next;
    temp->next = newNode;
    return head;
}

int main()
{
    List<int> l;
    /**
     * @brief insert at head
     *
     */
    int n = 5;
    cout << "\nEnter " << n << " space separated numbers: ";
    while (n--)
    {
        int data;
        cin >> data;
        l.head = insertAtHead(l.head, data);
    }
    l.printList();

    // clearing the list***********************************
    l.clear();

    /**
     * @brief insert at tail
     *
     */
    n = 5;
    cout << "\nEnter " << n << " space separated numbers: ";
    while (n--)
    {
        int data;
        cin >> data;
        l.head = insertAtTail(l.head, data);
    }
    l.printList();

    // clearing the list***********************************
    l.clear();

    /**
     * @brief insert at position
     *
     */

    l.buildList();
    cout << "Enter data to be inserted and position: ";
    int data;
    cin >> data;
    int i;
    cin >> i;
    l.head = insertAtPosition(l.head, data, i);
    l.printList();
}
