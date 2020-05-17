/*
 * @lc app=leetcode id=455 lang=cpp
 *
 * [455] Assign Cookies
 */

// @lc code=start
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        if(s.empty() || g.empty()) return 0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int i = 0, j = 0;
        int n = g.size();
        int m = s.size();
        int ans = 0;
        while(i < n && j < m){
            if(g[i] <= s[j]){
                ans++;
                i ++;
                j ++;
            }
            else j ++;
        }
        return ans;
    }
};
// @lc code=end

