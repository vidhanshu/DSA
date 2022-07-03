#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int n = nums.size();
        unordered_map<int, int> hm;
        for (int i = 0; i < n; i++)
        {
            hm[nums[i]] = i;
        }

        for (int i = 0; i < n; i++)
        {
            int a = nums[i];
            int b = target - a;

            if (hm[b] != i && nums[hm[b]] + a == target)
            {
                return {i, hm[b]};
            }
        }

        return {-1, -1};
    }
}; // O(n) with extra O(n) space

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

/**
 * @brief Learnings after solving this question
 *
 * unordered map's insertion in worst case O(n^2) and not n
 * and that's the reason that the this approach of using hashmap is very in efficient it took 21ms to execute.
 * 
 * @ref to the article of gfg why unordered_map is O(n^2) in worst case https://www.geeksforgeeks.org/how-to-use-unordered_map-efficiently-in-c/#:~:text=C%2B%2B%20provides%20std%3A%3Aunordered_set%20and%20std%3A%3Aunordered_map%20to%20be%20used,the%20worst-case%20complexity%20is%20O%20%28n%202%20%29.
 *
 */