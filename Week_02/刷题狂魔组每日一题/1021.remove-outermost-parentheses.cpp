/*
 * @lc app=leetcode id=1021 lang=cpp
 *
 * [1021] Remove Outermost Parentheses
 */

// @lc code=start
class Solution {
public:
    /*
    遇到'(' 就把left加一，遇到')'就把left减一，当left重新归于零时，说明左右括号刚好匹配，这时找到一组原语
    后删除该原语的最外层括号，这里用mark记录原语的第一个左括号
    */
    string removeOuterParentheses(string S) {
        string ret;
        int left = 0, mark = 0;
        for (char c: S)
        {
            if (c == '(')
            {
                ++left;
            }
            else
            {
                --left;
            }
            
            if (left == 0)
            {
                ret.erase(ret.begin() + mark);
                mark = ret.size();
            }
            else
            {
               ret.push_back(c);
            }
        }
        
         return ret;
    }
};
// @lc code=end

