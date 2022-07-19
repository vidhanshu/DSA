#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Cqueue
{
public:
    T *ar;
    int length;
    int front;
    int rear;
    Cqueue(int s)
    {
        length = s;
        ar = new T[s];
        front = -1;
        rear = -1;
    }
    bool enqueue(T data)
    {
        // overflow
        if ((rear + 1) % length == front)
        {
            cout << "overflow\n";
            return false;
        }
        // total empty
        if (front == -1 && rear == -1)
        {
            cout << "empty array\n";
            front = rear = 0;
            ar[rear] = data;
            return true;
        }
        cout << "normal\n";
        rear = (rear + 1) % length;
        ar[rear] = data;
        return true;
    }
    bool dequeue()
    {
        // underflow
        if (front == rear)
        {
            front = rear = -1;
            return false;
        }
        rear--;
        return true;
    }
    T top()
    {
        if (front > 0)
        {
            return ar[front];
        }
        else
        {
            return '\0';
        }
    }
    bool isEmpty()
    {
        if (front == rear)
        {
            return true;
        }
        return false;
    }
    void print()
    {
        for (int i = front; front != -1 && i <= rear; i++)
        {
            cout << ar[i] << " ";
        }
    }
};
