/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    /*
    暴力解法：使用两次遍历，找到target-nums[i]就退出循环，时间复杂度O(n^2)
    */
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size() - 1; ++i)
        {
            for(int j = i + 1; j < nums.size(); ++j)
            {
                if (nums[i] + nums[j] == target)
                {
                    return {i, j};
                }
                
            }
        }

        return {}; 
    }
    /*
    使用hash解法:首先建立数字和其位置的映射，如果找到第二个数字和索引相加等于targe就返回，时间复杂度为O(n);
    */
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int, int> res;
       for(int i = 0; i < nums.size(); ++i)
       {
           res[nums[i]] = i;                //向map中添加元素
       } 

       for(int i = 0; i < nums.size(); ++i)
       {
           if (res.find(target - nums[i]) != res.end() && m[targe - nums[i]] != i)
           {
               return {res[target - nums[i]], i};
           }
       }

       return {}; 
    }

    /*
    使用hash解法2:利用hashmap的特性，如果有haspmap里面有对应的数字并且相加等于targe的话，就直接返回，如果没有
    就将当前的数字和位置映射，时间复杂度为O(n);
    */
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int, int> res;

       for(int i = 0; i < nums.size(); ++i)
       {
           if (res.find(target - nums[i]) != res.end())
           {
               return {res[target - nums[i]], i};
           }

            res[nums[i]] = i;               //向map中添加元素
       }

       return {}; 
    }
};
// @lc code=end

