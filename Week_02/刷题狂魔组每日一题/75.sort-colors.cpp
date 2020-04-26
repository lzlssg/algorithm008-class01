/*
 * @lc app=leetcode id=75 lang=cpp
 *
 * [75] Sort Colors
 */

// @lc code=start
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int p0 = 0, cur = 0, p2 = nums.size() - 1;
        while(cur <= p2)
        {
            if (nums[cur] == 0)
            {
                swap(nums[cur++], nums[p0++]);
            }
            else if(nums[cur] == 2)
            {
                swap(nums[cur], nums[p2--]);
            }
            else
            {
                cur++;
            }
        }
    }
};
// @lc code=end

