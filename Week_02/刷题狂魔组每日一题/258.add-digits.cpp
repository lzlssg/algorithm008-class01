/*
 * @lc app=leetcode id=258 lang=cpp
 *
 * [258] Add Digits
 */

// @lc code=start
class Solution {
public:
    int addDigits(int num) {
        int sum = 0;
        while (num > 9)
        {
            sum = 0;
            while (num)
            {
                int tmp = num % 10;
                sum += tmp;
                num /= 10;
            }
            num = sum;
        }
        return num;
    }
};
// @lc code=end

