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
            return false;
        }
        // total empty
        if (front == -1 && rear == -1)
        {
            front = rear = 0;
            ar[rear] = data;
            return true;
        }
        rear = (rear + 1) % length;
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
    void print()
    {
        for (int i = front; front != -1 && i <= rear; i++)
        {
            cout << ar[i] << " ";
        }
    }
};
