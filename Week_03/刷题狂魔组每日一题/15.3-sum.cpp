/*
 * @lc app=leetcode id=15 lang=cpp
 *
 * [15] 3Sum
 */

// @lc code=start
class Solution {
public:
    /*
    方法一：先排序，在排序的基础上使用双指针方法,时间复杂度O(n^2)
    */
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        if(nums.size() < 3)
        {
            return res;
        }

        int left = 0, right = 0;
        for(int i = 0; i < nums.size(); ++i)
        {
            if(nums[i] > 0)
            {
                break;          //如果当前数字大于0，所以三个数字的和一定大于0，所以结束循环
            }

            if(i > 0 && nums[i] == nums[i - 1])
            {
                continue;       //去重
            } 

            left = i + 1;
            right = nums.size() - 1;
            while(left < right)
            {
                int sum = nums[i] + nums[left] + nums[right];
                if (sum == 0)
                {
                    res.push_back(vector<int>{nums[i], nums[left], nums[right]});
                    while(left < right && nums[left] == nums[left + 1])
                    {
                        left++; //去重
                    }

                     while(left < right && nums[right] == nums[right - 1])
                    {
                        right--; //去重
                    }
                    ++left;
                    --right;
                }
                else if( sum > 0)
                {
                    right -= 1; //向左移动一格
                }
                else
                {
                    left += 1; //向右移动一格
                }
            }
        }

        return res;
    }
};
// @lc code=end

