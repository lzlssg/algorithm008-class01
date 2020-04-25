/*
 * @lc app=leetcode id=1200 lang=cpp
 *
 * [1200] Minimum Absolute Difference
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int min_diff = INT_MAX;

        vector<vector<int>> ret;
        for (int i = 0; i < arr.size() - 1; i++)
        {
            min_diff = min(arr[i + 1] - arr[i], min_diff);
        }
        
        for(int i = 0; i < arr.size() - 1; i++)
        {
            if (arr[i + 1] - arr[i] == min_diff)
            {
                ret.push_back({arr[i], arr[i + 1]});
            }
        }

        return ret;
    }
};
// @lc code=end

