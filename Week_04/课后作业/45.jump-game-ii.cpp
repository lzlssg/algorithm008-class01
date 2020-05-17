/*
 * @lc app=leetcode id=45 lang=cpp
 *
 * [45] Jump Game II
 */

// @lc code=start
class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        vector<int> f(n);
        for (int i = 0, last = 0; i < n; i++) 
        {
            if (!i)
            {
                f[i] = 0;
            } 
            else 
            {
                while (last < n && last + nums[last] < i) 
                {
                    last++;
                }
                f[i] = f[last] + 1;
            }
        }
        return f[n - 1];
    }
};
// @lc code=end

