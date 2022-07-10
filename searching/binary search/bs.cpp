#include <bits/stdc++.h>
#define all(ar) ar.begin(), ar.end()
using namespace std;

int binary_search(vector<int> ar, int key)
{
    int start = 0;
    int end = ar.size() - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (ar[mid] == key)
        {
            return mid;
        }
        if (ar[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> ar = {2, 3, -12, 992, 233, 23};
    sort(all(ar));
    int n = ar.size();
    int key = 33;
    cout << binary_search(ar, key) << "\n";
    return 0;
}