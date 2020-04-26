/*
 * @lc app=leetcode id=264 lang=cpp
 *
 * [264] Ugly Number II
 */

// @lc code=start
class Solution {
public:
    int nthUglyNumber(int n) {
        if(n < 7) return n;
        vector<int> res(n);
        //初始化
        res[0] = 1;
        int t1 = 0,t2 = 0,t3 = 0;
        for(int i = 1;i < n;i++)
        {
            //min({}) 是C++11的新特性
            res[i] = min({res[t1]*2,res[t2]*3,res[t3]*5});
            if(res[i] == res[t1] * 2) t1++;
            if(res[i] == res[t2] * 3) t2++;
            if(res[i] == res[t3] * 5) t3++;
        }
        return res[n - 1];
    }
};
// @lc code=end

