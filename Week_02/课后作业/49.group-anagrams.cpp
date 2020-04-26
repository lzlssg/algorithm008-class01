/*
 * @lc app=leetcode id=49 lang=cpp
 *
 * [49] Group Anagrams
 */

// @lc code=start
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ret;  
        int sub=0;  
        string tmp;
        unordered_map<string,int> work;
        for(auto str:strs)
        {
            tmp=str;
            sort(tmp.begin(),tmp.end());
            if(work.count(tmp))
            {
               ret[work[tmp]].push_back(str);
            }
            else
            {
                vector<string> vec(1,str);
                ret.push_back(vec);
                work[tmp]=sub++;
            }
        }
        return ret;
    }
};
// @lc code=end

