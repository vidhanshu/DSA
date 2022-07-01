#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        int n = nums.size();

        if (k > n)
        {
            k = k % n;
        }

        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
}; // O(n^2) TLE

int main()
{
    Solution s;
    vector<int> ar{1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    s.rotate(ar, k);

    for (int i = 0; i < ar.size(); i++)
    {
        cout << ar[i] << " ";
    }
    return 0;
}