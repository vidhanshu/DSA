#include <bits/stdc++.h>
using namespace std;
void selection_sort(int *ar, int n)
{
    for (int i = 0; i < n; i++)
    {
        int mi = i;
        for (int j = i; j < n; j++)
        {
            if (ar[j] < ar[mi])
            {
                mi = j;
            }
        }
        swap(ar[i], ar[mi]);
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
    int ar[] = {2, 3, -12, 992, 233, 23};
    int n = sizeof(ar) / sizeof(int);
    selection_sort(ar, n);
    print(ar, n);
    return 0;
}