#include <bits/stdc++.h>
using namespace std;

int partition(int *ar, int l, int h)
{
    int &pivot = ar[l];
    int i = l;
    int j = h;
    while (i < j)
    {
        do
        {
            i++;
        } while (ar[i] <= pivot);
        do
        {
            j--;
        } while (ar[j] > pivot);
        if (i < j)
        {
            swap(ar[i], ar[j]);
        }
    }
    swap(pivot, ar[j]);
    return j;
}

void quick_sort(int *ar, int l, int h)
{
    if (l < h)
    {
        int j = partition(ar, l, h);
        quick_sort(ar, l, j);
        quick_sort(ar, j + 1, h);
    }
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
    int ar[] = {2, 3, -12, 992, 233, 23, INT_MAX};
    int n = sizeof(ar) / sizeof(int);
    quick_sort(ar, 0, n - 1);
    cout << "\n";
    print(ar, n - 1);
    return 0;
}