/*
 * @lc app=leetcode id=91 lang=cpp
 *
 * [91] Decode Ways
 */

// @lc code=start
class Solution {
public:
    int numDecodings(string s) {
        if(s.size() == 0) return 0;
        vector<int> dp(s.size(), 0);
        if(s[0] > '0') dp[0] = 1;
        for(int i = 1; i < dp.size(); ++i){
            if(s[i] == '0'){
                if(s[i-1] == '1' || s[i-1] == '2'){
                    int dp_i_2 = i-2 >= 0? dp[i-2]: 1;
                    dp[i] = dp_i_2;
                }else{
                    return 0;
                }
            }else{
                if(s[i-1] == '1' || (s[i-1] == '2' && s[i] <= '6')){
                    int dp_i_2 = i-2 >= 0? dp[i-2]: 1;
                    dp[i] = dp[i-1] + dp_i_2;
                }else{
                    dp[i] = dp[i-1];
                }
            }
        }
        return dp.back();
    }
};
// @lc code=end

