/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> hashMap;
        vector<int> out;
        for(int i = 0; i < nums.size(); ++i)
        {
            int secondle = target - nums[i];
            if( hashMap.find(secondle) != hashMap.end() && hashMap.find(secondle)->second != i )
            {
                out.push_back(i);
                out.push_back(hashMap.find(secondle)->second);
                return out;
            }
            
            hashMap.insert(pair<int, int>(nums[i], i));
        }
    }
};
// @lc code=end

