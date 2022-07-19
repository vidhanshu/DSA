#include <bits/stdc++.h>
using namespace std;
void merge(int *ar, int start, int end, int mid)
{
    int ls = (mid - start + 1);
    int rs = (end - mid);
    int left[ls + 1];
    int right[rs + 1];
    left[ls] = right[rs] = INT_MAX;
    int j = 0;
    for (int i = start; i <= mid; i++, j++)
    {
        left[j] = ar[i];
    }
    j = 0;
    for (int i = mid + 1; i <= end; i++, j++)
    {
        right[j] = ar[i];
    }
    int i_l = 0;
    int i_r = 0;
    for (int i = start; i <= end; i++)
    {
        if (left[i_l] < right[i_r])
        {
            ar[i] = left[i_l];
            i_l++;
        }
        else
        {
            ar[i] = right[i_r];
            i_r++;
        }
    }
}
void merge_sort(int *ar, int start, int end)
{
    if (start < end)
    {
        int mid = (start + end) / 2;
        merge_sort(ar, start, mid);
        merge_sort(ar, mid + 1, end);
        merge(ar, start, end, mid);
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
    merge_sort(ar, 0, n - 1);
    print(ar, n);
    return 0;
}