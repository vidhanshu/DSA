#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Stack
{
    T *st;
    int t;
    int size;

public:
    Stack(int sz)
    {
        st = new T[sz];
        t = -1;
        size = sz;
    }
    void push(T val)
    {
        if (t == size)
        {
            cout << "stack is full";
            return;
        }
        if (t == -1)
        {
            t = 0;
            st[t] = val;
            return;
        }
        st[++t] = val;
    }
    void pop()
    {
        if (t == -1)
        {
            cout << "stack is empty";
            return;
        }
        if (t == 0)
        {
            t = -1;
            return;
        }
        t--;
    }
    T top()
    {
        if (t == -1)
        {
            cout << "stack is empty";
            return -1;
        }
        return st[t];
    }
};