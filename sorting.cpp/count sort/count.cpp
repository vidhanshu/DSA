#include <bits/stdc++.h>
using namespace std;
int hm[(int)1e6];
void print(int *ar, int);
void count_sort(vector<int> &ar)
{

    int n = ar.size();
    for (int i = 0; i < n; i++)
    {
        hm[ar[i]]++;
    }
    for (int i = 1; i < int(1e6); i++)
    {
        hm[i] += hm[i - 1];
    }
    vector<int> dummy(n);
    for (int i = n - 1; i >= 0; i--)
    {
        int idx = --hm[ar[i]];
        dummy[idx] = ar[i];
    }
    ar = dummy;
}
void print(vector<int> ar)
{
    int n = ar.size();
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
}
int main()
{
    vector<int> ar = {23, 12, 3, 344, 992, 233, 23};
    int n = ar.size();
    count_sort(ar);
    print(ar);
    return 0;
}