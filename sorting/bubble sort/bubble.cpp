#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int *ar, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ar[i] > ar[j])
            {
                swap(ar[i], ar[j]);
            }
        }
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
    bubble_sort(ar, n);
    cout << "\n";
    print(ar, n);
    return 0;
}