/*
 * @lc app=leetcode id=347 lang=cpp
 *
 * [347] Top K Frequent Elements
 */

// @lc code=start
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m;

        for (int i = 0; i < nums.size(); ++i)
        {
            ++m[nums.at(i)];
        }

        vector<vector<int>> buckets(nums.size() + 1);

        for (auto iter = m.begin(); iter != m.end(); ++iter)
        {
            buckets.at(iter->second).push_back(iter->first);
        }

        vector<int> res(k);
        int count = 0;
        for (int i = buckets.size() - 1; i >= 0; --i)
        {
            for (int j = 0; j < buckets.at(i).size(); ++j)
            {
                res.at(count) = buckets.at(i).at(j);
                ++count;
                if (count == k)
                    return res;
            }
        }

        return res;
    }
};
// @lc code=end

