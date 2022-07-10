#include <bits/stdc++.h>
using namespace std;

int linear_search(vector<int> ar, int key)
{
    for (int i = 0; i < ar.size(); i++)
    {
        if (ar[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    vector<int> ar = {2, 3, -12, 992, 233, 23};
    int n = ar.size();
    int key = 233;
    cout << linear_search(ar, key) << "\n";
    return 0;
}