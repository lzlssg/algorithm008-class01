/*
 * @lc app=leetcode id=189 lang=cpp
 *
 * [189] Rotate Array
 */

// @lc code=start
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        for(int i  = size; k > size - k - 1; ++i)
        {
            int temp = nums[i];
            nums.erase(temp);
        }
    }
};
// @lc code=end

