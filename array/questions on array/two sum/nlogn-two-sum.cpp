#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        sort(nums.begin(), nums.end());

        int n = nums.size();

        for (int i = 0; i < n; i++)
        {
            int a = nums[i];
            int b = abs(target - nums[i]);

            int j = lower_bound(nums.begin(), nums.end(), b) - nums.begin();

            if (nums[j] == b)
            {
                return {i, j};
            }
        }
        return {};
    }
}; // O(n*log n)

int main()
{
    Solution s;
    vector<int> nums = {2, 7, 11, 15};
    int target = 26;
    vector<int> ans = s.twoSum(nums, target);
    for (auto &it : ans)
    {
        cout << it << " ";
    }
    return 0;

    return 0;
}