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

/**
 * @brief insert at given position
 *
 * @param head
 * @param data
 * @param pos
 * @return node<int>*
 */
node<int> *insertAtPosition(node<int> *head, int data, int pos)
{
    // 1 2 3 4 i=4 and key=12
    if (pos == 0)
    {
        return insertAtHead(head, data);
    }
    node<int> *temp = head;
    cout << pos << " \n";
    while (--pos)
    {
        temp = temp->next;
    }
    node<int> *newNode = new node<int>(data);
    newNode->next = temp->next;
    temp->next = newNode;
    return head;
}

/**
 * @brief delete from head
 *
 * @param head
 * @return node<int>*
 */
node<int> *deleteFromHead(node<int> *head)
{
    if (!head)
    {
        return NULL;
    }
    node<int> *temp = head;
    head = head->next;
    delete temp;
    return head;
}

/**
 * @brief delete from tail
 *
 * @param head
 * @return node<int>*
 */
node<int> *deleteFromTail(node<int> *head)
{
    // 1 2 3
    if (!head || head->next == NULL)
    {
        return NULL;
    }

    node<int> *temp = head;
    while (temp->next->next)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
    return head;
}

/**
 * @brief delete from position
 *
 * @param head
 * @param i
 * @return node<int>*
 */
node<int> *deleteFromPosition(node<int> *head, int pos)
{
    // 1 2 3F
    if (!head)
    {
        return NULL;
    }
    if (pos == 0)
    {
        return deleteFromHead(head);
    }
    node<int> *temp = head;
    while (--pos)
    {
        temp = temp->next;
    }
    node<int> *tbd = temp->next;
    temp->next = tbd->next;
    delete tbd;
    return head;
}

/**
 * @brief count the length iteratively
 *
 * @param head
 * @return int
 */
int countLengthIt(node<int> *head)
{
    int count = 0;
    while (head)
    {
        count++;
        head = head->next;
    }
    return count;
}

/**
 * @brief count length recursive
 *
 * @param head
 * @return int
 */
int countLengthRc(node<int> *head)
{
    if (!head)
    {
        return 0;
    }
    return 1 + countLengthRc(head->next);
}
/**
 * @brief reverse the linked list iteratively
 *
 * @param head
 * @return node<int>*
 */
node<int> *reverseIt(node<int> *head)
{
    // 1 2 3 4
    node<int> *p = NULL;
    node<int> *c = NULL;
    node<int> *n = head;
    while (n)
    {
        c = n;
        n = n->next;
        c->next = p;
        p = c;
    }
    return c;
}

/**
 * @brief reverse the linked list recursively
 *
 * @param head
 * @return node<int>*
 */
node<int> *reverseRc(node<int> *p, node<int> *c, node<int> *n)
{
    if (n)
    {
        c = n;
        n = n->next;
        c->next = p;
        p = c;
        return reverseRc(p, c, n);
    }
    return p;
}

int main()
{
    List<int> l;
    /**
     * @brief insert at head
     *
     */
    int t = 1;
    int c;
    int data;
    int i;
    while (1)
    {
        cout << "Enter choice:\n";
        cout << "1) insert At Head\n";
        cout << "2) insert At Tail\n";
        cout << "3) insert At Pos\n";
        cout << "4) delete from Head\n";
        cout << "5) delete from Tail\n";
        cout << "6) delete from Pos\n";
        cout << "7) count length iterative\n";
        cout << "8) count length recursive\n";
        cout << "9) reverse iterative\n";
        cout << "10) reverse recursive\n";
        cout << "Enter : ";
        cin >> c;
        switch (c)
        {
        case 1:
            cout << "\nEnter data: ";
            cin >> data;
            l.head = insertAtHead(l.head, data);
            l.printList();
            break;
        case 2:
            cout << "\nEnter data: ";
            cin >> data;
            l.head = insertAtTail(l.head, data);
            l.printList();
            break;
        case 3:
            cout << "\nEnter position and data: ";
            cin >> i;
            cin >> data;
            l.head = insertAtPosition(l.head, data, i);
            l.printList();
            break;
        case 4:
            l.head = deleteFromHead(l.head);
            l.printList();
            break;
        case 5:
            l.head = deleteFromTail(l.head);
            l.printList();
            break;
        case 6:
            cout << "\nEnter position: ";
            cin >> i;
            l.head = deleteFromPosition(l.head, i);
            l.printList();
            break;
        case 7:
            cout << countLengthIt(l.head) << "\n";
            break;
        case 8:
            cout << countLengthRc(l.head) << "\n";
            break;
        case 9:
            l.head = reverseIt(l.head);
            l.printList();
            break;
        case 10:
            l.head = reverseRc(0, 0, l.head);
            l.printList();
            break;
        default:
            cout << "Invalid choice!\n";
        }
        cout << "Wanna continue?(1/0)";
        cin >> t;
    }
}
