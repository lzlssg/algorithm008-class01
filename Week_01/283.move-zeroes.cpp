/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int noZeroCount = 0,cur = 0; cur < nums.size(); cur++)
        {
            if(nums[cur] != 0 )
            {
                swap(nums[noZeroCount++], nums[cur]);
            }
        }
    }
};
// @lc code=end

