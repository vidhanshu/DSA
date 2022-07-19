#include <bits/stdc++.h>
using namespace std;
void insertion_sort(int *ar, int n)
{
    for (int i = 1; i < n; i++)
    {
        int cur = ar[i];
        int j = i - 1;
        while (cur < ar[j] && j >= 0)
        {
            ar[j + 1] = ar[j];
            j--;
        }
        j++;
        ar[j] = cur;
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
    insertion_sort(ar, n);
    print(ar, n);
    return 0;
}