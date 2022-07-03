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
        vector<int> temp(n);
        for (int i = 0; i < n; i++)
        {
            temp[(i + k) % n] = nums[i];
        }
        nums = temp;
    }
}; // O(2 * n) and O(n) space

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