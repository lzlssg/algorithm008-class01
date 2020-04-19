/*
 * @lc app=leetcode id=66 lang=cpp
 *
 * [66] Plus One
 */

// @lc code=start
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size =  digits.size();
        for(int n = size - 1; n >= 0; --n)
        {
            if(digits[n] == 9)
            {
                digits[n] = 0;
            }
            else
            {
                digits[n]++;
                return digits;
            }
        }

        digits[0]++;
        digits.push_back(0);
        return digits;
    }
};
// @lc code=end

