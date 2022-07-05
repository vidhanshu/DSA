#include <bits/stdc++.h>
using namespace std;

void partition(int *ar, int n)
{
}

void quick_sort(int *ar, int n)
{
}

void print(int *ar, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
}
int main()
{
    int ar[] = {2, 3, -12, 992, 233, 23};
    int n = sizeof(ar) / sizeof(int);
    quick_sort(ar, n);
    cout << "\n";
    print(ar, n);
    return 0;
}