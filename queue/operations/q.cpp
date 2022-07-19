#include "../cqueueT/cqueue.h"
using namespace std;
int main()
{
    Cqueue<int>q(10);
    q.enqueue(10);
    q.enqueue(10);
    q.enqueue(10);
    q.dequeue();
    q.print();
    return 0;
}