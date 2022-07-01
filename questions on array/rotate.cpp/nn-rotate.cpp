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

        while (k--)
        {
            int last = nums[n - 1];

            for (int i = n - 1; i > 0; i--)
            {
                nums[i] = nums[i - 1];
            }

            nums[0] = last;
        }
    }
};// O(n^2) TLE

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