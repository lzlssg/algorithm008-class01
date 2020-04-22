/*
 * @lc app=leetcode id=350 lang=cpp
 *
 * [350] Intersection of Two Arrays II
 */

// @lc code=start
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ret;
        map<int, int> record;

        for(int i : nums1)
        {
            record[i]++;
        }

        for (int i : nums2)
        {
            if(record.find(i) != record.end() && --record[i] >= 0)
            {
                ret.push_back(i);
            }
        }
        
        return ret;
    }
};
// @lc code=end

