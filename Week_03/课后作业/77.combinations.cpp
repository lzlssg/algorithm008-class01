/*
 * @lc app=leetcode id=77 lang=cpp
 *
 * [77] Combinations
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> valid_res;
        count(res, valid_res, n, k, 1);
        return res;
    }

    void count(vector<vector<int>> &res, vector<int> &valid_res, int &n, int &k, int idx){
        if(valid_res.size() >= k){
            res.push_back(valid_res);
            return;
        }
        else{
            for(int i = idx; i <= n; ++i){
                //cout << i  << " " << valid_res.size() << endl;
                valid_res.push_back(i);
                count(res, valid_res, n, k, i+1);
                valid_res.pop_back();
            }
        }
    }
};
// @lc code=end

