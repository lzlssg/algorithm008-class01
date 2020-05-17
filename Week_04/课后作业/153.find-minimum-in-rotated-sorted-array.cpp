/*
 * @lc app=leetcode id=153 lang=cpp
 *
 * [153] Find Minimum in Rotated Sorted Array
 */

// @lc code=start
class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0, mid, right = nums.size() - 1;

        while(left < right) {
            mid = left + (right - left) / 2;
            if(nums[mid] < nums[right]) right = mid;
            else left = mid + 1;
        }

        return nums[left];
    }
};
// @lc code=end

