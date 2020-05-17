/*
 * @lc app=leetcode id=860 lang=cpp
 *
 * [860] Lemonade Change
 */

// @lc code=start
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        if(bills.empty()) return true;
        unordered_map<int, int> mp;
        for(int i = 0; i < bills.size(); i++){
            if(bills[i] == 5) mp[5] ++;
            else if(bills[i] == 10){
                mp[5] --;
                mp[10] ++;
                if(mp[5] < 0) return false;
            }
            else if(bills[i] == 20){
                int tmp = 15;
                if(mp[10] > 0){
                    tmp -= 10;
                    mp[10] --;
                }
                while(tmp > 0){
                    tmp -= 5;
                    mp[5] --;
                }
                if(mp[5] < 0) return false;
            }
        }
        return true;
    }
};
// @lc code=end

